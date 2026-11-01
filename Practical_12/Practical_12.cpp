#include <iostream>
using namespace std;
namespace Arithmetic {
void show() {
int a = 10, b = 20;
cout << "Arithmetic namespace: " << a << " + " << b << " = " << (a + b) << endl;
}
}
namespace Geometry {
void show() {
int length = 6, breadth = 4;
cout << "Geometry namespace: rectangle area = " << (length * breadth) << endl;
}
}
int main() {
Arithmetic::show();
Geometry::show();
return 0;
}
