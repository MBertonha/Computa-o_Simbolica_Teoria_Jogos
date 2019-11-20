#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <conio.h>
#include "main.cpp"

using namespace std;

void funcaoPrincipal2(){

    float m1[1][3], m2[4][1];
    float m3[3][4] = {{3,5,-2,-1},{-2,4,-3,-4},{6,-5,0,3}};
    float mr[1][4] = {{0,0,0,0}};
    float mf[1][1] = {{0}};
    float aux[1][4] = {{0,0,0,0}};
    int linha;
    int coluna;
    int x = 0;
    int a = 0;
    int b;

    cout << "Insira a sequencia de jogadas do J1: " << endl;
    for(linha=0; linha<1; linha++)
    {
        for(coluna=0; coluna<3; coluna++){
            cout << "Valor A " << linha << "" << coluna << ": ";
            cin >> m1[linha][coluna];
        }
    }
    cout << endl;
    cout << "Insira a sequencia de jogadas do J2: " << endl;
    for(linha=0; linha<4; linha++)
    {
        for(coluna=0; coluna<1; coluna++){
            cout << "Valor A" << linha << "" << coluna << ": ";
            cin >> m2[linha][coluna];
        }
    }
    cout << endl;

    cout << endl << "Matriz principal: " << endl << endl;
    for (linha=0; linha<3; linha++)
    {
        for(coluna=0; coluna<4; coluna++){
        cout << " " << m3[linha][coluna] << " ";
        }
        cout << endl;
    }


    for (b=0;b<4;b++)
    {
        for(a=0;a<3;a++){
            aux[0][a]=m1[0][a]*m3[a][b];
            mr[0][x]=mr[0][x]+aux[0][a];
        }
        x++;

    }
    float aux1[1][4] = {{0,0,0,0}};
    for (b=0;b<4;b++)
    {
    //cout << endl << "mr " << mr[0][b] << "m2: " << m2[b][0] << endl;
    aux1[0][b]=mr[0][b]*m2[b][0];
    mf[0][0]=mf[0][0]+aux1[0][b];
    //cout << aux1[0][b] << "Aux ";
    }

    cout << endl << "Matriz final: " << mf[0][0] << endl << endl;

}





