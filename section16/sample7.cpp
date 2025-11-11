#include <iostream>
using namespace std;

class Student{
    public:
        int num;
};

class Tanaka : public Student{
    public:
        Tanaka(int x){
            num = x;
        };
};

class Satou : public Student{
    public:
        Satou(int y){
            num = y;
        };
};

int main(){
    Tanaka tanaka(10);
    Satou satou(20);
    Student *p[2];
    p[0] = &tanaka;
    p[1] = &satou;
    int i;
    for(i = 0; i < 2; i++){
        cout << (*p[i]).num << "\n";
    }
    return 0;
}