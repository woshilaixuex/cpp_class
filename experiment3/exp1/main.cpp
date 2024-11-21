#include   <iostream>   
#include   <complex>   
using namespace   std;   

class Base   
{   
public:   
	Base() {cout<<"Base-ctor"<<endl;}   
	~Base() {cout<<"Base-dtor"<<endl;}   
	virtual void f(int){cout<<"Base::f(int)"<<endl;}   
	virtual void f(double){cout<<"Base::f(double)"<<endl;}   
	virtual void g(int i=10){cout<<"Base::g()"<<i<<endl;}   
};   
class Derived : public Base   
{   
public:   
	Derived() {cout<<"Derived-ctor" <<endl;}   
	~Derived(){cout<<"Derived-dtor"<<endl;}
	void f(complex<double>) {
		cout<<"Derived::f(complex)"<<endl;
	}
	void g(int   i=20){
		cout<<"Derived::g()"<<i<<endl;
	}
};   
int main()   
{   
	cout<<sizeof(Base)<<endl;   
	cout<<sizeof(Derived)<<endl;   
	
	Base b;   
	Derived d; 
	Base *pb=new Derived;   
	b.f(1.0);   
	d.f(1.0);   
	pb->f(1.0);   
	b.g();   
	d.g();   
	pb->g();   
	delete   pb;   
	return 0;
}  
