#include <iostream> 
using namespace std;
class B1
{
public:
    B1(int i)
    {
        b1 = i;
        cout << "构造函数 B1." << b1 << endl;
    }
    ~B1() {
        cout << "析构函数 B1." << b1 << endl;
    }
    void print() { cout << b1 << endl; }
private:
    int b1;
};

class B2
{
public:
    B2(int i)
    {
        b2 = i;
        cout << "构造函数 B2." << b2 << endl;
    }
    ~B2() {
        cout << "析构函数 B2." << b2 << endl;
    }
    void print() { cout << b2 << endl; }
private:
    int b2;
};

class B3
{
public:
    B3(int i)
    {
        b3 = i;
        cout << "构造函数 B3." << b3 << endl;
    }
    ~B3() {
        cout << "析构函数 B3." << b3 << endl;
    }
    int getb3() { return b3; }
private:
    int b3;
};

class A : public B2, public B1
{
public:
    A(int i, int j, int k, int l): B1(i), B2(j), bb(k)
    {
        a = l;
        cout << "构造函数 A." << a << endl;
    }
    ~A() {
        cout << "析构函数 A." << a << endl;
    }
    void print()
    {
        B1::print();
        B2::print();
        cout << a << endl;
    }
private:
    int a;
    B3 bb;
};


int main()
{
	A aa(1, 2, 3, 4);
	aa.print();
	return 0;
} 
