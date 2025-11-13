#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
    int i;
    vector<int> array;
    cout << "数を5つ入力してください\n";
    for(i = 0; i < 5; i++){
        int data;
        cin >> data;
        array.push_back(data);
    }
    cout << "入力した数\n";
    for(i = 0; i < 5; i++){
        cout << array[i] << "、";
    }
    cout << "\n";
    cout << "ソート後\n";
    sort(array.begin(), array.end());
    for(i = 0; i < 5; i++){
        cout << array[i] << "、";
    }
    cout << "\n";
    return 0;
}