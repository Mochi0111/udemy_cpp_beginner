#include <iostream>
using namespace std;

template <class T1, class T2>
void comp(T1 x, T2 y){
    if(x > y)
        cout << "整数のほうが大きいです\n";
    else
        cout << "少数のほうが大きいです\n";
}

int main (){
    int num1;
    double num2;
    cout << "整数を入力してください\n";
    cin >> num1;
    cout << "少数を入力してください\n";
    cin >> num2;
    comp(num1, num2);
    return 0;
}