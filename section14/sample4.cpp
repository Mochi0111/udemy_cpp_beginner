#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        NewClass();
        NewClass(int x);
};

NewClass::NewClass(){
    cout << "番号が入力されていません\n";
}

NewClass::NewClass(int x){
    num = x;
    cout << "番号：" << num << "\n";
}

int main (){
    NewClass obj2;
    NewClass obj(14);
    return 0;
}