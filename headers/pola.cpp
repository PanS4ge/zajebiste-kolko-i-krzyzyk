#include <iostream>
#include <cstdlib>
#include "input.h"
#include "pola.h"
#include "winlose.h"

using namespace std;

int rozmiarprzeciwnika = 9;

bool czycoswogolezostalonaplanszy(string uzytepola[]){
    bool tak = true;
    for (int i = 0; i < 9; i++){
        if(uzytepola[i] == " "){
            tak = false;
        }
    }
    return tak;
}

void changepole(string zajete[], string uzytepola[]){
    int polezajete = ktorepole(uzytepola);
    uzytepola[polezajete - 1] = "X";
}

void przeciwnik(string zajete[], string uzytepola[]){
    int idzie = rand() % (rozmiarprzeciwnika);
    if(uzytepola[idzie - 1] == " "){
        uzytepola[idzie - 1] = "0";
    } else {
        przeciwnik(zajete, uzytepola);
    }
}