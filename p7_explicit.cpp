#include <iostream>
using namespace std;

struct Complex {
    int real ,imag;
    explicit Complex(int re, int im = 0):real(re),imag(im) {
    }
    Complex operator+(const Complex& x) {
       return Complex(real + x.real, imag + x.imag);
    }
    friend ostream& operator<<(ostream &output, const Complex& x) {
        output << x.real <<"  "<<x.imag <<endl;
        return output;
    }
};

int main()
{
    Complex c1(12, 5);
    cout << c1;
    Complex c2 = c1 +5;
    cout << c2;
    return 0;
}
