#include <iostream>
template <class Type1,class Type2>
class myclass
{
	public:
		myclass(Type1 a, Type2 b)
		{
			i=a;
			j=b;
		}
		void show()
		{
			std::cout<<i<<' '<<j<<'\n';
		}
	private: 
		Type1 i;
		Type2 j;
};
int main()
{
	myclass<int,double> ob1(10,0.23);
	myclass<char,char *> ob2('x',"This is a test");
	ob1.show();
	ob2.show();
	return 0;
}
