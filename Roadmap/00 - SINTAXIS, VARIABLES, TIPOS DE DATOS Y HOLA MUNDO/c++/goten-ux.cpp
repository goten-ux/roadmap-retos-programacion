// isocpp.org

// comentario en unica linea 

/// comentario en unica linea leida por programas generadores de documentacion 

/**
comentario 
en varias lineas 
leido por programas generadores de documentacion
*/

/* 
comentario 
en varias lineas 
*/

#include <iostream>

using namespace std; 

int main (){

int variableEstera; 
const int constanteEntera = 1; 
constexpr int sumaCalculadaEnCompilador = 2 + 2; 

// TIPOS DE DATOS 

int entero; 
bool verdaderoOfalso; 
char caracterUnico;
float decimal;
double decimalMayor; 

string palabraUnica = "Hola, C++"; 

cout << palabraUnica;

return 0;
}
