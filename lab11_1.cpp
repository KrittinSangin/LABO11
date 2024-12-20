#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
    srand(time(0));
    string Result;
    int rande,nuih;
    rande = rand();
    nuih = rande%9 + 1;
    cout << "Press Enter 3 times to reveal your future.";
    switch (nuih) {
    case 1:
    Result = "A";
        break;
    case 2:
    Result = "B+";
        break;
    case 3:
    Result = "B";
        break;
    case 4:
    Result = "C+";
        break;
    case 5:
    Result = "C";
        break;
    case 6:
    Result = "D+";
        break;
    case 7:
    Result = "D";
        break;
    case 8:
    Result = "F";
        break;
    case 9:
    Result = "W";
        break;
    default:
    Result = "A";
}
            cin.get();
            cin.get();
            cin.get();
            cout << "You will get "<<Result<<" in this 261102.";


// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
}