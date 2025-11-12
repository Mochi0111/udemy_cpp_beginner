#include <iostream>
using namespace std;

class Point{
    public:
        int x;
        int y;
        Point(int a, int b);
        Point operator+(Point obj);
};

Point::Point(int a, int b){
    x = a;
    y = b;
}

Point Point::operator+(Point obj){
    Point tmp(0, 0);
    tmp.x = x + obj.x;
    tmp.y = y + obj.y;
    return tmp;
}

int main (){
    Point p1(10, 20);
    Point p2(20, 30);
    Point ans(0, 0);
    ans = p1 + p2;
    cout << "X座標: " << ans.x << "\n";
    cout << "Y座標: " << ans.y << "\n";
    return 0;
}