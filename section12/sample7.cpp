#include <iostream>
using namespace std;

class Student{
    public:
        int num;
};

void show(Student *x){
    cout << (*x).num << "\n";
}

int main (){
    Student Tanaka, *p;
    p = &Tanaka;
    (*p).num = 10;
    show(p);
    return 0;
}