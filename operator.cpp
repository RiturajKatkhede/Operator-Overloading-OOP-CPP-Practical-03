#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    
    Complex()
    {
        real = 0;
        imag = 0;
    }

    
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    
    Complex c1(10, 20);
    Complex c2(5, 10);

    
    Complex c3;

    c3 = c1 + c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition of Complex Numbers: ";
    c3.display();

    return 0;
}