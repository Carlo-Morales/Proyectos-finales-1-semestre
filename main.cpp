#include <iostream>
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>
#include <math.h>
#include "Application/Conversiones/C_String_a_binario.h"

using namespace std;
string url;
vector <int> ascii;
vector <bitset<8>> binario;

//funciones

int main(){
    cout<<"INTRODUCE UNA LIGA\n";
    cin >> url;
    int x = string_a_binario(url, ascii, binario);//función mandada a llamar
    //Impresión de la liga en binario para fines prácticos
    for (int i=0; i<binario.size(); i++){
        cout << binario[i] << "  ";
    }
    return 0;
}