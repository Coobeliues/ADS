#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> a, b, c;
    string s;
    while(getline(cin, s)){
        if(s.substr(0,1) == "9"){
            a.push(s);
        }
        else if(s.substr(0,2) == "10"){
            b.push(s);
        }
        else if(s.substr(0,2) == "11"){
            c.push(s);
        }
    }
    while(!a.empty()){
        cout<<a.front()<<endl;
        a.pop();
    }
    while(!b.empty()){
        cout<<b.front()<<endl;
        b.pop();
    }
    while(!c.empty()){
        cout<<c.front()<<endl;
        c.pop();
    }




    return 0;
}