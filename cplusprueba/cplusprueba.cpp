// INCLUIR
#include <iostream>
#include "Calculator.h"

// USAR
using namespace std;

// FUNCION DEL PROGRAMA
int main()
{
    // SIN USARSE POR LO MIENTRAS XD (Desde Lunes 11 de Octubre del 2021)
    // cout << "Hola!\n";
    // cout << "Estas viendo\n";
    // cout << "una prueba.\n";

    
    // VARIABLES
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    // DESCRIPCIÓN PARA DAR INSTRUCCION DEL USO
    cout << "Calculadora v1.1" << endl << endl;
    cout << "Escribe una operacion. Formatos: a+b | a-b | a*b | a/b"
        << endl;

    // RECIBIR LOS RESULTADOS
    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "R = " << result << " resuelto!" << endl;
        if (y == 0 || x == 0)
        {
            cout << "Estas operando con 0." << endl;
        }
    }

    return 0;
}