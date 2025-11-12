#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>
#include <math.h>
#include "Application/Conversiones/C_String_a_binario.h"
#include "Application/Matrices/M_Elementos_fijos.h"

using namespace std;
string url;
vector <int> ascii;
vector <bitset<8>> binario;

//funciones

int main(){
    cout<<"INTRODUCE UNA LIGA\n";
    cin >> url;
//STRING A BINARIO
    int x = string_a_binario(url, ascii, binario);//función mandada a llamar
    //Impresión de la liga en binario para fines prácticos
    for (int i=0; i<binario.size(); i++){
        cout << binario[i] << "  ";
    }
//ELEMENTOS FIJOS
    inicializarMatriz();
    dibujarBordeExterno();
    dibujarFinderPattern(1, 1); 
    dibujarFinderPattern(1, 19);  
    dibujarFinderPattern(19, 1); 
    dibujarFinderPattern_2(0,8);
    dibujarFinderPattern_2(0,18);
    dibujarFinderPattern_2(18,0);
    dibujarFinderPattern_3(8,19);
    dibujarFinderPattern_4(19,8);
    PatronDeTemporizador();
    PatronDeAlineacion();
    ElementoNegro();
    imprimirQR();
    return 0;
}