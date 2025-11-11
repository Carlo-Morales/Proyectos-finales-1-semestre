# Sobre bitsets en C++

## ¿Qué es un bitset?
_bitset_ es una clase de C++ que representa una secuencia de bits de tamaño fijo. Es ideal para trabajar con datos binarios de manera eficiente.
### Declaración y creación 💻
````````````````cpp
bitset<8> b1;              // 00000000 (todos en 0 por defecto)
bitset<8> b2(65);          // 01000001 (desde decimal)
bitset<8> b3("10101010");  // 10101010 (desde string binario)
bitset<8> b4('A');         // 01000001 (desde char)
````````````````
### Acceso a bits individuales 🎯
Los bits se indexan de derecha a izquierda (el bit 0 es el menos significativo).
````````````````cpp
bitset<8> bits(65);  // 01000001

// Lectura
cout << bits[0];     // 1 (bit más a la derecha)
cout << bits[6];     // 1
cout << bits[7];     // 0 (bit más a la izquierda)

// Escritura
bits[0] = 0;         // Cambiar bit 0 a 0
bits[3] = 1;         // Cambiar bit 3 a 1
````````````````
## Métodos principales
### Modificación de bits ✏️
````````````````cpp
bbitset<8> bits(65);  // 01000001

// Activar bits (poner en 1)
bits.set();          // Todos en 1 → 11111111
bits.set(3);         // Solo bit 3 en 1 → 01001001

// Desactivar bits (poner en 0)
bits.reset();        // Todos en 0 → 00000000
bits.reset(0);       // Solo bit 0 en 0 → 01000000

// Invertir bits (toggle)
bits.flip();         // Invertir todos
bits.flip(2);        // Invertir solo bit 2
````````````````
### Consultas 🔎
````````````````cpp
bitset<8> bits(65);  // 01000001

// Contadores
bits.count();        // Cantidad de bits en 1 → 2
bits.size();         // Tamaño total → 8

// Verificaciones
bits.test(0);        // ¿Bit 0 está en 1? → true
bits.all();          // ¿Todos en 1? → false
bits.any();          // ¿Alguno en 1? → true
bits.none();         // ¿Ninguno en 1? → false
````````````````
### Conversiones ㊗️
````````````````cpp
bitset<8> bits(65);  // 01000001

// A números
bits.to_ulong();     // unsigned long → 65
bits.to_ullong();    // unsigned long long → 65

// A string
bits.to_string();    // string → "01000001"

// A char (útil para ASCII)
char c = (char)bits.to_ulong();  // 'A'
````````````````
