#include <iostream>
using namespace std;

int main(){
    int array[5];
    int i;
    cout << "数値を入力してください\n";
    for(i = 0; i < 5; i++){
        cin >> array[i];
    }
    cout << "入力した数はこちらです\n";
    for(i = 0; i < 5; i++){
        cout << i << "番目：" << array[i] << "\n";
    }
    return 0;
}