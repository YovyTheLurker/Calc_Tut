#include "Calculator.h"

double Calculator::Claculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
   
}

// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    cout << "Calculator Console Operation" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception" << endl;
            continue;
        }
        else
        {
            result = c.Claculate(x, oper, y);
        }
        
        cout << "Result is: " << result << endl;
    }
    return 0;

}