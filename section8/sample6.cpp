#include <iostream>
using namespace std;

void keisan(int x[]){
    int i;
    int sum = 0;
    for(i = 0; i < 3; i++){
        sum += x[i];
    }
    cout << "平均点は" << sum/3 << "です\n";
}

int main(){
    int array[3] = {78, 94, 64};
    keisan(array);
    return 0;
}