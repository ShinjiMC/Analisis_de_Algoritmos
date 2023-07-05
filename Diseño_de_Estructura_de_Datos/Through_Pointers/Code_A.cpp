#include <iostream>

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
    float a, b, c;
    int opt;

    // Ingresar los operandos
    std::cin >> a >> b;

    // OPT-> 0-Addition, 1-Subtraction, 3-Multiplication, 4-Division
    std::cin >> opt;

    switch (opt)
    {
    case 0:
        c = Addition(a, b);
        break;
    case 1:
        c = Subtraction(a, b);
        break;
    case 2:
        c = Multiplication(a, b);
        break;
    case 3:
        c = Division(a, b);
        break;
        // más casos de operaciones aquí
    }

    std::cout << "Result: " << c << std::endl;

    return 0;
}
