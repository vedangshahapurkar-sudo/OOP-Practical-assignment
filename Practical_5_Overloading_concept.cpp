#include <iostream>
using namespace std;

class Calculator
{
public:

void add(int a, int b)

{
cout << "Sum of two numbers = " << a + b << endl;
}

void add(int a, int b, int c)
{
 cout << "Sum of three numbers = " << a + b + c << endl;
}

void add(double a, double b)
{
cout << "Sum of two decimal numbers = " << a + b << endl;
}
};


int main()
{
Calculator c;
c.add(10, 25);
c.add(10, 30, 40);
c.add(10.5, 12.5);

    return 0;
}

