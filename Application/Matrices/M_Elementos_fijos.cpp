#include <iostream>
#include <vector>

// Definiciones
const int TAMANO_QR = 25;
enum Modulo { BLANCO = 0, NEGRO = 1 };

// La matriz global o pasada por referencia
Modulo matriz_qr[TAMANO_QR][TAMANO_QR]; 

// Función para inicializar toda la matriz
void inicializarMatriz() {
    for (int i = 0; i < TAMANO_QR; ++i) {
        for (int j = 0; j < TAMANO_QR; ++j) {
            matriz_qr[i][j] = BLANCO; 
        }
    }
}
void dibujarAlignmentPattern() {
    int fila_inicio = 16;
    int col_inicio = 16;
    
    // El patrón 5x5: N B N B N (donde N=Negro, B=Blanco)
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int fila = fila_inicio + i;
            int col = col_inicio + j;

            // Regla: Borde (0, 4) es N, Interior (1, 3) es B, Centro (2, 2) es N
            if (i == 0 || i == 4 || j == 0 || j == 4 || (i == 2 && j == 2)) {
                matriz_qr[fila][col] = NEGRO;
            } else {
                matriz_qr[fila][col] = BLANCO;
            }
        }
    }
}
void dibujarFinderPattern(int fila_inicio, int col_inicio) {
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            // Coordenadas relativas (dentro del 7x7)
            int fila = fila_inicio + i;
            int col = col_inicio + j;

            // ZONAS DE SEPARACIÓN BLANCA (Borde de 1 módulo)
            // Se asume BLANCO por defecto en inicialización, pero se sobreescribe
            // con NEGRO donde corresponde (i, j fuera del rango [1, 5])

            // Estructura: NEGRO (0,6), BLANCO (1,5), NEGRO (2,3,4)
            if (i == 0 || i == 6 || j == 0 || j == 6 || 
                (i > 1 && i < 5 && j > 1 && j < 5)) {
                matriz_qr[fila][col] = NEGRO;
            } else {
                matriz_qr[fila][col] = BLANCO;
            }
        }
    }
    // NOTA: Los separadores de 1 módulo son simplemente las filas/columnas 7 y 17
    // que, al ser inicializadas a BLANCO, ya están correctas.
}

// CÓDIGO PRINCIPAL: Llamar 3 veces
// dibujarFinderPattern(0, 0);   
// dibujarFinderPattern(0, 18);  
// dibujarFinderPattern(18, 0);
void dibujarTimingPatterns() {
    // Patrón Horizontal: Fila 6, desde Columna 7 hasta 17
    for (int j = 7; j <= 17; ++j) {
        // La secuencia es 1 0 1 0... (Negro, Blanco, Negro...)
        // j=7 (impar) -> NEGRO, j=8 (par) -> BLANCO.
        matriz_qr[6][j] = (j % 2 == 1) ? NEGRO : BLANCO;
    }

    // Patrón Vertical: Columna 6, desde Fila 7 hasta 17
    for (int i = 7; i <= 17; ++i) {
        // La secuencia es 1 0 1 0... 
        // i=7 (impar) -> NEGRO, i=8 (par) -> BLANCO.
        matriz_qr[i][6] = (i % 2 == 1) ? NEGRO : BLANCO;
    }
}
void colocarDarkModule() {
    matriz_qr[18][8] = NEGRO;
}
void imprimirQR(const Modulo matriz_qr[TAMANO_QR][TAMANO_QR]) {
    // La fila y columna 0 son el margen silencioso (Quiet Zone).
    // Para QR V2, el tamaño es 25x25, pero el estándar requiere un margen silencioso 
    // de al menos 4 módulos. Por simplicidad, imprimiremos el 25x25 rodeado de espacios.
    
    // Imprimir el margen superior (opcional, pero recomendado)
    for (int k = 0; k < TAMANO_QR + 2; ++k) {
        std::cout << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < TAMANO_QR; ++i) {
        std::cout << " "; // Margen izquierdo
        for (int j = 0; j < TAMANO_QR; ++j) {
            if (matriz_qr[i][j] == NEGRO) {
                // Usamos el bloque sólido para el contraste
                std::cout << "██"; 
            } else {
                // Usamos el espacio para el módulo blanco
                std::cout << "  "; 
            }
        }
        std::cout << " \n"; // Margen derecho y nueva línea
    }

    // Imprimir el margen inferior (opcional)
    for (int k = 0; k < TAMANO_QR + 2; ++k) {
        std::cout << " ";
    }
    std::cout << "\n";
}
int main(){
    // ... Dentro de tu función main() o una función constructora ...

inicializarMatriz();
dibujarFinderPattern(0, 0);   
dibujarFinderPattern(0, 18);  
dibujarFinderPattern(18, 0);  
dibujarTimingPatterns();
dibujarAlignmentPattern();
colocarDarkModule();

// A partir de aquí: Insertar Información de Formato y el Data Stream (Zigzag)
imprimirQR(matriz_qr);

    return 0;
}