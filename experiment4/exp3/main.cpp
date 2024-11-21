#include <iostream>
template <class T>
class Stack
{
	public:
		Stack(int sz)	{ v=p=new T [size=sz];}
		~Stack() { delete []v ;}
		void push(T x)  { * p++=x; }
		T pop() {return *--p; }
		int siz() const { return (p-v);}
	private:
		T *v;
		T *p;
		int size;
};
int main()
{
	Stack<int> aSt(5);
	aSt.push(10);
    return 0;
}
