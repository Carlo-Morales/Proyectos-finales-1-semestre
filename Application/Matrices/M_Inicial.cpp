#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int filas, columnas;
	cout<<"Introduce el numero de filas: ";
	cin>>filas;
	cout<<"Introduce el numero de columnas: ";
	cin>>columnas;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
		cout<<"-1";//dibuja cada celda	
		}
		cout<<endl;//salto de linea por fila
	}
	return 0;
}