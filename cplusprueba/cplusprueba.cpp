#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
    // SIN USARSE POR LO MIENTRAS XD (Desde Lunes 11 de Octubre del 2021)
    // std::cout << "Hola!\n";
    // std::cout << "Estas viendo\n";
    // std::cout << "una prueba.\n";

    
    // VARIABLES
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "CALCULADORA" << endl << endl;
    cout << "Escribe una operacion! Formatos: a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "El resultado es " << result << endl;
    }

    return 0;
}