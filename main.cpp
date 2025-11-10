#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include "Conversiones/C_String_a_binario.h"

using namespace std;
string url;
vector <int> ascii;

int main(){
    cout<<"INTRODUCE UNA LIGA";
    cin >> url;
    for (int i=0; i<url.size(); i++){
        int x =string_a_binario(url, ascii);
        cout << x;
    }

    return 0;
}