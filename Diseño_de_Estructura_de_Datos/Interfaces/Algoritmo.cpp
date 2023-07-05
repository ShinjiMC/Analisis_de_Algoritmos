#include <iostream>

// Class CArithmetic definition
class CArithmetic
{
private:
    // Some attributes go here

public:
    static double Addition(double a, double b);
    static double Subtraction(double a, double b);
    static double Multiplication(double a, double b);
    static double Division(double a, double b);
    // More methods go here
};

// Method definitions
double CArithmetic::Addition(double a, double b)
{
    return a + b;
}

double CArithmetic::Subtraction(double a, double b)
{
    return a - b;
}

double CArithmetic::Multiplication(double a, double b)
{
    return a * b;
}

double CArithmetic::Division(double a, double b)
{
    if (b == 0.0)
        throw (int)0; // an exception is thrown here

    return a / b;
}


int main()
{
    double x, y, z;
    int opt;

    // Enter the operands
    std::cout << "Ingresa el primer valor numerico : ";
    std::cin >> x;
    std::cout << "Ingresa el segundo valor numerico : ";
    std::cin >> y;

    // Enter the operation
    std::cout << "Selecciona la Operacion:\n";
    std::cout << "1. Suma\n";
    std::cout << "2. Resta\n";
    std::cout << "3. Multiplicacion\n";
    std::cout << "4. Division\n";
    std::cout << "Ingresa tu opcion: ";
    std::cin >> opt;

    // Perform the selected operation
    try
    {
        switch (opt)
        {
        case 1:
            z = CArithmetic::Addition(x, y);
            break;
        case 2:
            z = CArithmetic::Subtraction(x, y);
            break;
        case 3:
            z = CArithmetic::Multiplication(x, y);
            break;
        case 4:
            z = CArithmetic::Division(x, y);
            break;
        default:
            std::cout << "Valor Invalido\n";
            return 1;
        }

        std::cout << "Resultado: " << z << std::endl;
    }
    catch (int errorcode)
    {
        std::cout << "Error: Division con Cero\n";
    }

    return 0;
}
