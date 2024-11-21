#include <iostream>
#include <fstream>
#include <limits>
#include <Windows.h> 
using namespace std;

template <typename T>
class Array {
public:
    Array(int size) : size(size) {
        arr = new T[size];  
    }

    ~Array() {
        delete[] arr;
    }

    void readData() {
        cout << "请输入 " << size << " 个数据：" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    void saveToFile(const string& filename) {
        ofstream outFile(filename);
        if (!outFile) {
            cout << "无法打开文件 " << filename << endl;
            return;
        }

        for (int i = 0; i < size; ++i) {
            outFile << arr[i] << endl;
        }

        outFile.close();
        cout << "数据已保存到 " << filename << endl;
    }

    T findMax() {
        T maxVal = numeric_limits<T>::lowest(); 

        for (int i = 0; i < size; ++i) {
            if (arr[i] > maxVal) {
                maxVal = arr[i];
            }
        }
        return maxVal;
    }

private:
    T* arr;  
    int size;
};

int main() {
    SetConsoleOutputCP(CP_UTF8); 
    Array<int> intArr(5);  
    intArr.readData();  
    intArr.saveToFile("./intArray.txt"); 
    cout << "整数数组中的最大值是：" << intArr.findMax() << endl;

    // Array<double> doubleArr(5); 
    // doubleArr.readData();  
    // doubleArr.saveToFile("doubleArray.txt"); 
    // cout << "双精度浮点数组中的最大值是：" << doubleArr.findMax() << endl;

    return 0;
}
