#include <iostream>
using namespace std;
class shape {
public:
virtual void Draw() {
cout << "\nDrawing shape";
}
};
class circle : public shape {
public:
void Draw() {
cout << "\ndrawing circle";
}
};
int main() {
circle c1;
shape s1;
shape* str = &c1;
str->Draw();
s1.Draw();
c1.Draw();
return 0;
}
