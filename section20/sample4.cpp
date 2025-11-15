#include <iostream>
using namespace std;

int main(){
    try{
        int num;
        cout << "番号を入力してください\n";
        cout << "1:整数, 2:少数, 3:文字列\n";
        cin >> num;
        if(num == 1)
            throw 1;
        else if(num == 2)
            throw 3.14;
        else
            throw string("文字列");
    }
    catch(...){
        cout << "どんなデータ型でもOK\n";
    }
    return 0;
}