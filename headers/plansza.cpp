#include <iostream>
#include "plansza.h"

using namespace std;

int dziewiec(){
    return 9;
}

string poprzeczka(string wielkosc){
    // wielkosc np. "  |  X  |  O "
    string poprzeczka = "";
    for(int i=0;i<wielkosc.size();i++){
        poprzeczka = poprzeczka + "-";
    }
    return poprzeczka;
}

void plansza(string zajete[], string uzytepola[]){
    // zajete expected: np. [" ", X, O]
    string homonkulus[9] = {" ", " ", " ", " ", " ", " ", " ", " "};
    for(int i=0;i<9;i++){
        if(uzytepola[i] == " "){
            homonkulus[i] = zajete[i];
        } else {
            homonkulus[i] = uzytepola[i];
        }
    }
    for(int i=0;i<9;i+=3){
        cout << homonkulus[0+i] + " | " + homonkulus[1+i] + " | " + homonkulus[2+i] << endl;
        if(i != 6){
            cout << poprzeczka("X | X | X") << endl;
        }
    }
}