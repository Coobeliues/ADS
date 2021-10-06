#include <iostream>

using namespace std;



void with_optimization(int a){
    if(a < 2){
        cout<<"composite";
        exit(0);
    }
    else if(a == 2){
        cout<<"prime";
        exit(0);
    }
    else if(a % 2 == 0){
        cout<<"composite";
        exit(0);
    }
    for(int i=3; (i*i)<=a; i+=2){
        if(a % i == 0 ){
            cout<<"composite";
            exit(0);
        }
    }
    cout<<"prime";
}

int main(){
    int x1; cin>>x1;
    with_optimization(x1);

    return 0;
}