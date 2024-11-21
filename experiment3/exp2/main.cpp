#include   <iostream>   
using   namespace   std; 
class   Base   
{   
public:   
	Base():data(count)   
	{
		cout<<"Base-ctor"<<endl;
		++count;
	}
	~Base()
	{
		cout<<"Base-dtor"<<endl;
		--count;
	}   
	static int count;   
	int data;   
};
int Base::count;   
class Derived  : public Base
{
public:
	Derived():data(count),data1(data)
	{
		cout<<"Derived-ctor"<<endl;
		++count;
	}
	~Derived()
	{
		cout<<"Derived-dtor"<<endl;
		--count;
	}
	static int count;
	int data1;
	int data;
};
int Derived::count=10;
int main()
{
	cout<<sizeof(Base)<<endl;
	cout<<sizeof(Derived)<<endl;
	
	Base* pb = new Derived[3];
	cout<<pb[2].data<<endl;
	cout<<((static_cast<Derived*>(pb))+2)->data1<<endl;
	delete[] pb;
	
	cout<<Base::count<<endl;
	cout<<Derived::count<<endl;
	return 0;
} 
