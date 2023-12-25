#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int img;

    Complex(int r = 0, int i = 0) {
        real = r;
        img = i;
    }
    
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }

    // operator overloading
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.img = img + c.img;
        return temp;
    }
};

int main()
{
    Complex c1(5,7);
    Complex c2(3,9);
    Complex c3, c4;

    c3 = c1.add(c2);
    cout << "c3: " << c3.real << " + " << c3.img << "i " << endl;

    c4 = c1 + c2;
    cout << "c4: " << c4.real << " + " << c4.img << "i " << endl;
}
