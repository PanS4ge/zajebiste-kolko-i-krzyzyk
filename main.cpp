#include <iostream>
#include "headers/plansza.h"
#include "headers/input.h"
#include "headers/pola.h"
#include "headers/winlose.h"

using namespace std;

string zajete[9] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
string uzytepola[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

int main() {
    cout << "Witaj w kolku i krzyzyk dla ubogich" << endl;
    cout << "X - ty" << endl;
    cout << "0 - \"komputer\"" << endl;
    cout << "" << endl;
    
    plansza(zajete, uzytepola);
    while(true){
        char won = CheckIfWin(uzytepola);
        if(won != '?'){
            cout << "Wygral ";
            cout << won;
        }
        if(won == '0'){
            cout << "dont care + didnt ask + cry about it + stay mad + get real + L + h0es mad + the audacity + triggered + get a life + ok and? + cringe + touch grass + not based + your're probably white + not funny didn't laugh + you're* + grammar issue + go outside + get good + ad hominem + ur mom + didn't ask + cry about it + stay mad + get real + L + hoes mad + basic + skill issue + ratio + you fell off + the audacity + triggered + any askers + redpilled + get a life + ok and? + cringe + touch grass + donowalled + not based + your're a full time discordian + not funny didn't laugh + you're* + grammar issue + go outside + get good + your gay + ad hominem + ur mom + unknown + random + biased + racially motivated + kys + ur unfunny +ratio don't care + didn't ask + cry about it + stay mad + get real + L + mald seethe copedon't care + didn't ask + cry about it + L + h0es mad + basic + skill issue + ratio + you fell off + the audacity + triggered + any askers + redpilled + get a life + ok and? + cringe + touch grass + donowalled + not based + your're probably white + not funny didn't laugh + you're* + grammar issue + go outside + get good + ad hominem + ur momdon't care + didn't ask + cry about it + stay mad + get real + L + hoes mad + basic + skill issue + ratio + you fell off + the audacity + triggered + any askers + redpilled + get a life + ok and? + cringe + touch grass + donowalled + not based + your're a full time discordian + not funny didn't laugh + you're* + grammar issue + go outside + get good + your gay + ad hominem + ur mom + unknown + don't care + didn't ask + cry about it + stay mad + get real + so bad + so ass + grammar issue";
            cout << "!" << endl;
            cout << "!" << endl;
            cout << "!" << endl;
        }
        else if(won == 'X'){
            cout << "!" << endl;
        }
        else {
            changepole(zajete, uzytepola);
            przeciwnik(zajete, uzytepola);
            plansza(zajete, uzytepola);
        }
        if(czycoswogolezostalonaplanszy(uzytepola)){
            char won = CheckIfWin(uzytepola);
            if(won == '?'){
                cout << ("Remis, bo program nie wykryl (moze byc po prostu gowniany)") << endl;
            }
        }
    }
}