#include <iostream>
using namespace std;
template <typename T>
void displayResult(T result) {
cout << result << endl; }
template <class T>
class Calculator {
private:
T num1, num2;
public:
Calculator(T n1, T n2) {
num1 = n1;
num2 = n2; }
T add() {
return num1 + num2; }
};
int main() {
Calculator<int> c1(5, 4);
cout << "The integer addition is: \t";
displayResult(c1.add()); // Using the function template
Calculator<double> c2(5.2, 4.3);
cout << "The double addition is: \t";
displayResult(c2.add());
return 0;
}
