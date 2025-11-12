#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        NewClass();
        NewClass operator++();
};

NewClass::NewClass(){
    num = 0;
}

NewClass NewClass::operator++(){
    NewClass tmp;
    ++num;
    tmp.num = num;
    return tmp;
}

int main (){
    NewClass obj, result;
    result = ++obj;
    cout << result.num << "\n";
    return 0;
}