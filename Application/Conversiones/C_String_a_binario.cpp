#include "C_String_a_binario.h"
#include <iostream>
#include <vector>

int string_a_binario (string url, vector<int>&ascii){
    ascii.resize(url.size());
    
    for (int i=0; i<url.size(); i++){
        char c = url[i];
        int a = c;
        ascii[i] = a; //vector con la conversión de cada caracter a ascii
    }
    return ascii.size(); //return provisional
}