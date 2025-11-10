#ifndef C_STRING_A_BINARIO_H
#define C_STRING_A_BINARIO_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

int string_a_binario (string url, vector<int>&ascii){
    ascii.resize(url.size());
    
    for (int i=0; i<url.size(); i++){
        char c = url[i];
        int a = c;
        ascii[i] = a;
    }
    return ascii.size();
}

#endif