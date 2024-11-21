#include <iostream>
#include <fstream>
#include <Windows.h> 
using namespace std;
int main(){ 
    SetConsoleOutputCP(CP_UTF8); 
    char ch;
    int i=0;
    ifstream file;
    file.open("./xyz.txt",ios::in);
    if(!file.is_open()){ 
        cout<<"xyz.txt cannot open"<<endl;
        abort();
    }
    while(!file.eof()){   
        file.get(ch);
        i++;
    }
    // while (file.get(ch)) {   
    //     i++;
    // }
    cout<<"文件字符个数："<<i<<endl;
    file.close();
    return 0;
}
