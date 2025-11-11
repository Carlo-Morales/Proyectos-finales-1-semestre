#ifndef C_STRING_A_BINARIO_H
#define C_STRING_A_BINARIO_H

#include <string>
#include <vector>
#include <iostream>
#include <bitset>
using namespace std;

int string_a_binario (string url, vector<int>&ascii, vector<bitset<8>>&binario){
    ascii.resize(url.size());
    binario.resize(ascii.size());
    
        // Conversión a ASCII
    for (int i = 0; i < url.size(); i++){
        ascii[i] = (int)url[i];
        //Conversión a binario
        binario[i] = bitset<8>(ascii[i]); //Almacenamiento de los binarios en un bitset dentro del vector
    }
    
    return binario.size(); //return del binario
}

#endif