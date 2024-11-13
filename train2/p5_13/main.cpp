#include <iostream>
#include <ostream>
class X{
    public:
        X(){
            this->i = 0;
        }
        friend class Y;
        friend class Z;
        friend int h(X* x){
            return x->i += 10;
        } 
    private:
        int i;
};
class Y{
    public:
        int g(X* x) {
            return ++x->i;
        }

};
class Z{
    public:
        int f(X* x){
           return x->i += 5;
        }
};
int main(){
    X x;
    Y y;
    Z z;
    std::cout << "" << h(&x) << std::endl;
    std::cout << "" << y.g(&x) << std::endl;
    std::cout << "" << z.f(&x) << std::endl;
}