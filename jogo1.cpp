#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

 funcaoPrincipal(){

    float a[3][3];
    cout << "Bem vindo ao jogo 2x2" << endl;
    cout << "*********************" << endl;
    cout << "Insira os valores para a matriz M" << endl;

    for(int linha = 1; linha < 3; linha++){
        for(int coluna = 1; coluna < 3; coluna++){
            cout << "Valor A" << linha << "" << coluna << ": ";
            cin >> a[linha][coluna];
        }
    }

    cout << endl << "Sua matriz principal: " << endl ;
    for(int linha = 1; linha < 3; linha++){
        for(int coluna = 1; coluna < 3; coluna++){
            cout << a[linha][coluna] << " ";
        }
        cout << endl << endl;
    }

    float r1 = 0.0;
    float r2 = 0.0;
    float v  = 0.0;

    r1 = (a[2][2] - a[2][1])/(a[1][1] + a[2][2] - a[1][2]- a[2][1]);
    cout << "Estrategia para X: "<< r1 << endl;

    r2 = (a[2][2] - a[1][2])/(a[1][1] + a[2][2] - a[1][2]- a[2][1]);
    cout << "Estrategia para Y: " << r2 << endl;

    v = ((a[1][1] * a[2][2]) - (a[1][2] * a[2][1])) / (a[1][1] + a[2][2] - a[1][2]- a[2][1]);
    cout << "Chance de sucesso: " << v*100 << "%" << endl << endl;

}
