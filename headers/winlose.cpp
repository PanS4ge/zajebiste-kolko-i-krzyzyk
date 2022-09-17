#include <iostream>
#include "winlose.h"

using namespace std;

char winHorizontally(string uzytepola[]){
    for(int i=0; i<3; i++){
        // # ? ?
        // # ? ?
        // # ? ?
        if(uzytepola[0+i] == "X" && uzytepola[3+i] == "X" && uzytepola[6+i] == "X"){
            return 'X';
        }
        else if(uzytepola[0+i] == "0" && uzytepola[3+i] == "0" && uzytepola[6+i] == "0"){
            return '0';
        }
    }
    return '?';
}

char winVertically(string uzytepola[]){
    for(int i=0; i<3; i++){
        // # ? ?
        // # ? ?
        // # ? ?
        if(uzytepola[0+i*3] == "X" && uzytepola[1+i*3] == "X" && uzytepola[2+i*3] == "X"){
            return 'X';
        }
        else if(uzytepola[0+i*3] == "0" && uzytepola[1+i*3] == "0" && uzytepola[2+i*3] == "0"){
            return '0';
        }
    }
    return '?';
}

char winPrzekatna(string uzytepola[]){
    string problem[2] = {"X", "0"};
    char problemc[2] = {'X', '0'};
    for(int i=0; i<2; i+=1){
        if(uzytepola[0] == problem[i] && uzytepola[4] == problem[i] && uzytepola[8] == problem[i]){
            return problemc[i];
        }
        if(uzytepola[6] == problem[i] && uzytepola[4] == problem[i] && uzytepola[2] == problem[i]){
            return problemc[i];
        }
    }
    return '?';
}

char CheckIfWin(string uzytepola[]){
    if(winHorizontally(uzytepola) == '?'){
        if(winVertically(uzytepola) == '?'){
            if(winPrzekatna(uzytepola) == '?'){
                return '?';
            }
            else{
                return winPrzekatna(uzytepola);
            }
        }
        else{
            return winVertically(uzytepola);
        }
    }
    else{
        return winHorizontally(uzytepola);
    }
}