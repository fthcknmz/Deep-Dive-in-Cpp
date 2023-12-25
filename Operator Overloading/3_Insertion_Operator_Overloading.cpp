
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int img;

public:
    Complex(int r, int i) {
        real = r;
        img = i;
    }

    friend ostream& operator<<(ostream& out, Complex& complex);
};

int main()
{
    Complex c1(5, 7);

    cout << "complex number is: " << c1 << endl;

    operator<<(cout, c1);
}

ostream& operator<<(ostream& out, Complex& complex) {
    out << complex.real << " + " << complex.img << "i";
    return out;
}
