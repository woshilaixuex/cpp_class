#include <iostream>
using namespace std;

template <typename T>
T min(T a, T b, T c) {
    if (a < b) {
        if (a < c) return a;  
        else return c;        
    } else {
        if (b < c) return b;  
        else return c;        
    }
}

int main() {
    cout << min(10, 5, 3) << endl;      
    cout << min(10.0, 5.0, 3.0) << endl;
    cout << min('a', 'b', 'c') << endl; 
    return 0;
}
