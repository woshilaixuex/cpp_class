#include <iostream>
#include <cstring>

class Mystring {
    private:
        char* str; // 存储字符串

    public:
        Mystring() : str(new char[1]) {
            str[0] = '\0';
        }

        Mystring(const char* s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }

        Mystring(const Mystring& other) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }

        ~Mystring() {
            delete[] str;
        }

        Mystring& operator=(const Mystring& other) {
            if (this == &other) {
                return *this;
            }
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
            return *this;
        }

        Mystring operator+(const Mystring& other) const {
            char* newStr = new char[strlen(str) + strlen(other.str) + 1];
            strcpy(newStr, str);
            strcat(newStr, other.str);
            Mystring result(newStr);
            delete[] newStr;
            return result;
        }

        Mystring& operator+=(const Mystring& other) {
            char* newStr = new char[strlen(str) + strlen(other.str) + 1];
            strcpy(newStr, str);
            strcat(newStr, other.str);
            delete[] str;
            str = newStr;
            return *this;
        }

        char& operator[](std::size_t index) {
            if (index >= strlen(str)) {
                throw std::out_of_range("Index out of range");
            }
            return str[index];
        }

        // const char& operator[](std::size_t index) const {
        //     if (index >= strlen(str)) {
        //         throw std::out_of_range("Index out of range");
        //     }
        //     return str[index];
        // }

        void print() const {
            std::cout << str << std::endl;
        }
};

int main() {
    Mystring s1("Hello");
    Mystring s2(" World");
    Mystring s3 = s1 + s2; 
    s3.print();

    s1 += s2; 
    s1.print();

    s1[1] = 'a';
    s1.print();

    return 0;
}
