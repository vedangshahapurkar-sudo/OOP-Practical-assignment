#include <iostream>
using namespace std;

class Complex
{
public:
    double real, img; // Changed to double to allow accurate division results

    void accept(double r, double i)
    {
        real = r;
        img = i;
    }

    void display()
    {
        if (img >= 0)
            cout << real << " + " << img << "i";
        else
            cout << real << " - " << -img << "i";
    }

    Complex operator+(Complex c)
    {
        Complex x;
        x.real = real + c.real;
        x.img = img + c.img;
        return x;
    }

    Complex operator-(Complex c)
    {
        Complex x;
        x.real = real - c.real;
        x.img = img - c.img;
        return x;
    }

    Complex operator*(Complex c)
    {
        Complex x;
        x.real = real * c.real - img * c.img;
        x.img = real * c.img + img * c.real;
        return x;
    }

    Complex operator/(Complex c)
    {
        Complex x;
        double denom = c.real * c.real + c.img * c.img;

        if (denom == 0) {
            cout << "\nError: Division by zero!";
            x.real = 0;
            x.img = 0;
            return x;
        }

        x.real = (real * c.real + img * c.img) / denom;
        x.img = (img * c.real - real * c.img) / denom;

        return x;
    }
};

int main()
{
    Complex c1, c2, sum, diff, product, quotient;

    c1.accept(6, 8);
    c2.accept(2, 5);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "\nSecond Complex Number: ";
    c2.display();

    sum = c1 + c2;
    cout << "\nAddition of the complex numbers is: ";
    sum.display();

    diff = c1 - c2;
    cout << "\nSubtraction of these complex numbers is: ";
    diff.display();

    product = c1 * c2;
    cout << "\nMultiplication: ";
    product.display();

    quotient = c1 / c2;
    cout << "\nDivision: ";
    quotient.display();

    cout << endl;

    return 0;
}
