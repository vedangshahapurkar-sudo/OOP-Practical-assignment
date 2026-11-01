#include <iostream>
using namespace std;
int main() {
int a, b, c;
cout << "Enter two integers: " << endl;
cin >> a >> b;
try {
if (b == 0) {
throw b;
}
c = a / b;
cout << "The div is \t" << c << endl;
}
catch (int x) {
cout << "\nDivision by zero is not permitted.";
cout << "\nThe error value (denominator) is: " << x; }
cout << "\nAt the end of main function." << endl;
return 0;
}
