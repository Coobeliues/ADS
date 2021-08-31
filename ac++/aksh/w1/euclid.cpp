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

int gcd(int a, int b){
    int ans = 0;
    for (int i=1; i<=max(a,b); i++){
        if (a % i == 0 and b % i == 0){
            ans = i;
        }
    }
    return ans;
}

int main(){
    int n, m; cin>>n>>m;
    cout<<gcd_upgrade(n, m)<<endl;
    cout<<gcd(n, m);

    return 0;
}