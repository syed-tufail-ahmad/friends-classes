#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b);
    int sumRealComplex(complex, complex);
};

int calculator::add(int a, int b)
{
    return a + b;
}

class complex
{
    int a;
    int b;

public:
    friend int calculator::sumRealComplex(complex, complex);
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "your number is" << a << b << endl;
    }
};

int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    complex o1, o2;
    o1.setNumber(3, 6);
    o2.setNumber(8, 6);
    calculator calculus;
    int results = calculus.sumRealComplex(o1, o2);
    cout << "the code of o1 && o2 is  " << results << endl;
    return 0;
}