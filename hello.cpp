#include <iostream>
using namespace std;

class O
{
public:
    void in()
    {
        cout << "In O" << endl;
    }
};

class A : public O
{
public:
};

class B : public O
{
public:
};

class C : public A, public B
{
public:
};

int main()
{
    C c;
    c.A::in();

    // java don thua ke da hien thuc

    return 0;
}