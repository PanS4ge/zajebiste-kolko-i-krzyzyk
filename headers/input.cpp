#include <iostream>
#include "input.h"

using namespace std;

int ktorepole(string uzytepola[]){
    int x; 
    cout << "Ktory numer? ";
    cin >> x;
    try{
        if(uzytepola[x - 1] != " "){
            cout << "Upsik ten numer jest zajety! " << endl;
            return ktorepole(uzytepola);
        }
        else {
            return x;
        }
    }
    catch (std::exception) {
        cout << "Upsik wyrombales blad! " << endl;
        return ktorepole(uzytepola);
    };
}