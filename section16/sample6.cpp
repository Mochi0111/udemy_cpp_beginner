#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void speak() = 0;
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "わんわん\n";
        };
};

int main (){
    Dog inu;
    inu.speak();
    return 0;
}