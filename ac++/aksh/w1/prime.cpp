#include <iostream>
//#include <fstream>

using namespace std;

void no_optimization(int a){
    for (int i =2; i<=a; i++){
        bool temp = true;
        for (int j =2; j*j<=i; j++){
            if (i % j == 0)
                temp = false;
            
        }
        if (temp) cout<<i<<" ";
    }
}

long long p[10000100];

void with_optimization(int a){
    //ofstream myfile;
    //myfile.open("prime.txt");

    for (int i =2; i*i<=a; i++){
        if (p[i] == 0){
            int k = i;
            while (i +k <= a){
                k += i;
                p[k] = 1;
            }
        }
    }
    for (int i=2; i<=a; i++){
        if (p[i] ==0){
            //myfile<<i<<" ";
            cout<<i<<" ";
        }
    }
    //myfile.close();
}

int main(){
    int x1; cin>>x1;
    with_optimization(x1);
    

    return 0;
}