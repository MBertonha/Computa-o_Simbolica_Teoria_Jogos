#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include "jogo1.cpp"
#include "jogo2.cpp"

using namespace std;

int main(){
    int choice;
    cout << "Selecione o tipo de jogo: " << endl;
    cout << "*****************" << endl;
    cout << "Jogo 1 - 2x2: [1]" << endl;
    cout << "Jogo 2 - 3x3: [2]" << endl;
    cout << "Sair -------- [0]" << endl;
    cout << "*****************" << endl << endl;
    cin >> choice;

    if(choice == 1){
        system("cls");
        funcaoPrincipal();
    }
    else if(choice == 2){
        system("cls");
        funcaoPrincipal2();
    }
}


