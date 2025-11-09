#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        int year;
        void show(); 
};

void Student::show(){
    cout << "番号：" << num << "\n";
    cout << "年齢：" << year << "\n";
}

int main(){
    Student Tanaka;
    Tanaka.num = 10;
    Tanaka.year = 12;
    Tanaka.show();
    return 0;
}