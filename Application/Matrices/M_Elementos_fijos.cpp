#include <iostream>
#include <vector>
#include "M_Elementos_fijos.h"


const int TAMANO_QR = 27;
const int BLANCO = 0;
const int NEGRO = 1;
const int VACIO = -1;
using std::cout;

int matriz_qr[TAMANO_QR][TAMANO_QR]; 
int i, j;


void inicializarMatriz(){
    for ( i = 0; i < TAMANO_QR; i++) {
        for ( j = 0; j < TAMANO_QR; j++) {
            matriz_qr[i][j] = VACIO; 
        }
    }
}

void dibujarBordeExterno(){
    int BORDE_ANCHO = 1;
    for (i = 0; i < BORDE_ANCHO; i++){
        for (j = 0; j < TAMANO_QR; j++){
            matriz_qr[i][j] = BLANCO;
        }
    }
    for (i = TAMANO_QR - BORDE_ANCHO ; i < TAMANO_QR; i++){
        for (j = 0; j < TAMANO_QR; j++){
            matriz_qr[i][j] = BLANCO;
        }
    }
    for (j = 0; j < BORDE_ANCHO; j++){
        for (i = 0; i < TAMANO_QR; i++){
            matriz_qr[i][j] = BLANCO; 
        }
    }
        for (j = TAMANO_QR - BORDE_ANCHO ; j < TAMANO_QR; j++){
        for (i = 0; i < TAMANO_QR; i++){
            matriz_qr[i][j] = BLANCO; 
        }
    }
}
void dibujarFinderPattern(int FILA_INICIO, int COLUMNA_INCIO) {
    for (int i = 0; i < 7; ++i) { 
        for (int j = 0; j < 7; ++j) { 
            if (i == 0 || i == 6 || j == 0 || j == 6 || (i > 1 && i < 5 && j > 1 && j < 5)) 
            {
                matriz_qr[FILA_INICIO + i][COLUMNA_INCIO + j] = NEGRO; 
            } else {
                matriz_qr[FILA_INICIO + i][COLUMNA_INCIO + j] = BLANCO; 
            }
        }
    }
}
void dibujarFinderPattern_2(int FILA_INICIO, int COLUMNA_INCIO){
    for (int i=FILA_INICIO; i < 9; i++){
            matriz_qr[FILA_INICIO + i][COLUMNA_INCIO] = BLANCO;
    }
        for (int j=FILA_INICIO; j < 9; j++){
            matriz_qr[COLUMNA_INCIO][FILA_INICIO + j] = BLANCO;
    }
}
void dibujarFinderPattern_3(int FILA_INICIO, int COLUMNA_INCIO){
    for (int j=COLUMNA_INCIO; j <= TAMANO_QR - 1; j++){
            matriz_qr[FILA_INICIO][j] = BLANCO;
    }
}
void dibujarFinderPattern_4(int FILA_INICIO, int COLUMNA_INCIO){
    for (int i=FILA_INICIO; i <= TAMANO_QR - 1; i++){
            matriz_qr[i][COLUMNA_INCIO] = BLANCO;
    }
}
void PatronDeTemporizador(){ 
    const int INDICE_FIJO = 7;       
    for (int j = 9; j <= 19; ++j) {
            if (j % 2 == 1) {
                matriz_qr[INDICE_FIJO][j] = NEGRO;
            } else {
                matriz_qr[INDICE_FIJO][j] = BLANCO;
            }
    }
    for (int i = 9; i <= 19; ++i) {
            if (i % 2 == 1) {
                matriz_qr[i][INDICE_FIJO] = NEGRO;
            } else {
                matriz_qr[i][INDICE_FIJO] = BLANCO;
            }
    }
}
void PatronDeAlineacion(){
    for (int j = 16; j <= 20;  j++){
        for (int i = 16; i <= 20; i++){
            if (i == 16 || i == 20 || j == 16 || j == 20 || (i == 18 && j == 18)) 
            {
                matriz_qr[i][j] = NEGRO; 
            } else {
                matriz_qr[i][j] = BLANCO; 
            }
        }
        }
    }
void ElementoNegro() {
    matriz_qr[19][9] = NEGRO; 
}
void imprimirQR() {
    cout << "\n";
    for (int i = 0; i < TAMANO_QR; ++i) {
        for (int j = 0; j < TAMANO_QR; ++j) {
            if (matriz_qr[i][j] == NEGRO) {
                cout << "  ";
            } else if (matriz_qr[i][j] == BLANCO) {
                cout << "██";
            } else {
                cout << "--"; 
            }
        }
        cout << "\n";
    }
}