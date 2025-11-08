#include <stdio.h>

typedef struct{
    int apple;
    int orange;
    int banana;
}Fruits;

int main(void){
    Fruits store;
    store.apple = 100;
    printf("りんごの金額：%d円\n", store.apple);
    return 0;
}