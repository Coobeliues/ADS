#include <iostream>

using namespace std;

int gcd_upgrade(int a, int b, int c, int d){
    int x = c - a;
    int y = d -b;
    while (x >0 and y >0){
        if (x>y) x = x %y;
        else y = y%x;
    }
    return x+y;
}

int main(){
    int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
    cout<<gcd_upgrade(x1, y1, x2, y2)<<endl;


    return 0;
}