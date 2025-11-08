#include <stdio.h>

struct Fruits{
    int apple;
    int orange;
    int banana;
};

void price (struct Fruits store1);

int main(void){
    struct Fruits store1 = {100, 200, 300};
    price(store1);
    return 0;
}

void price(struct Fruits store){
    printf("りんごの金額：%d\n", store.apple);
    printf("オレンジの金額：%d\n", store.orange);
    printf("バナナの金額：%d\n", store.banana);
    return;
}