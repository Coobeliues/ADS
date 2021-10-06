#include <iostream>
#include <cmath>

using namespace std;

string check (int l){
    string Q;
    for (int j=2;j<=sqrt(l);++j){
        if (l%j == 0){
            Q = "composite";
            j = l;
        }
        else Q = "prime";
    }

    if (l == 2) Q = "prime";

    if (l == 3) Q = "prime";

    return Q;
}

int main(){
    int d; cin >> d;
    cout << check(d) << endl;

    return 0;
}