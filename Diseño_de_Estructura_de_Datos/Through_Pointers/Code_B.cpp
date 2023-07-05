#include <iostream>

typedef float (*lpfnOperation)(float, float);

float Addition(float a, float b)
{
    return a + b;
}

float Subtraction(float a, float b)
{
    return a - b;
}

float Multiplication(float a, float b)
{
    return a * b;
}

float Division(float a, float b)
{
    return a / b;
}

int main()
{
    lpfnOperation vpf[4] = {&Addition, &Subtraction, &Multiplication, &Division};
    float a, b, c;
    int opt;

    // Ingresar los operandos
    std::cin >> a >> b;

    // Ingresar la operación: 0-Addition, 1-Subtraction, 3-Multiplication, 4-Division
    std::cin >> opt;

    // La siguiente línea reemplaza el switch completo
    c = (*vpf[opt])(a, b);

    std::cout << "Result: " << c << std::endl;

    return 0;
}
