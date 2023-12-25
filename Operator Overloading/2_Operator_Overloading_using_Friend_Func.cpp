
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0) {
        real = r;
        img = i;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }

    friend Complex operator+(Complex c1, Complex c2);
};


int main()
{
    Complex n1(5, 7);
    Complex n2(9, 3);
    Complex n3;
    n3 = n1 + n2;
    n3.display();
}


Complex operator+(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
