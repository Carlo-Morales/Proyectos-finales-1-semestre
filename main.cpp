#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include "Application/Conversiones/C_String_a_binario.h"

using namespace std;
string url;
vector <int> ascii;

int main(){
    cout<<"INTRODUCE UNA LIGA\n";
    cin >> url;
    int x = string_a_binario(url, ascii);//función mandada a llamar
    return 0;
}