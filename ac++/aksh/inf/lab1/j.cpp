#include <iostream>

using namespace std;

int gcd_upgrade(int a, int b){
    while (a > 0 and b > 0){
        if (a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }

    return a + b;
}

int main(){
    int n, m; cin>>n>>m;
    cout<<gcd_upgrade(n, m)<<endl;

    return 0;
}