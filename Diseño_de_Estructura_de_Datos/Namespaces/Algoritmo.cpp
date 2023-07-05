#include "MyNS.h"
#include <iostream>
namespace MyNS
{
    long factorial(int n)
    {
        if (n <= 1)
            return 1;
        else
            return n * factorial(n - 1);
    }

    CTest::CTest()
    {
        // Constructor implementation
        std::cout << "CTest constructor called" << std::endl;
    }

    void CTest::Method1()
    {
        // Method1 implementation
        std::cout << "Method1 called" << std::endl;
    }
}

int main()
{
    // Accessing global counter from MyNS namespace
    MyNS::gnCount = 10;
    std::cout << "gnCount: " << MyNS::gnCount << std::endl;

    // Calling global function Addition from MyNS namespace
    double result = MyNS::Addition(120.34, 490.34);
    std::cout << "Addition result: " << result << std::endl;

    // Calling global function factorial from MyNS namespace
    long fact = MyNS::factorial(10);
    std::cout << "Factorial of 10: " << fact << std::endl;

    // Creating an instance of CTest class from MyNS namespace
    MyNS::CTest myTest;
    myTest.Method1();

    return 0;
}
