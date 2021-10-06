#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> a, b;
    int j, n = 0;
    for(int i=0; i<10; i++){
        cin>>j;
        if(i<5) a.push(j);
        else b.push(j);
    }
    while (!a.empty() and !b.empty() and n<=1000000){
        if(a.front() == 0 and b.front() == 9){
            a.push(0);
            a.push(9);
        }else{
            if(a.front() == 9 and b.front() == 0){
                b.push(9);
                b.push(0);
            }else{
                if(a.front()>b.front()){
                    a.push(a.front());
                    a.push(b.front());
                }else{
                    b.push(a.front());
                    b.push(b.front());
                }
            }
        }
        n++;
        a.pop();
        b.pop();
    }
    if(n>1000000) cout<<"botva";
    else{
        if(b.empty()) cout<<"first ";
        else cout<<"second ";

        cout<<n;
    }


    return 0;
}