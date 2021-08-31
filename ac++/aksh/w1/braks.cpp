#include <iostream>
#include <stack>

using namespace std;

// bool brack(string s){
//     int k = 0;
//     for (int i=0; i<s.size(); i++){
//         if (s[i] == '(') k++;
//         else k--;
//         if (k<0) return false;
//     }
//     if (k==0) return true;
//     return false;
// }


bool brackets(string s){
    stack<char> t;
    for (int i=0; i<s.size(); i++){
        if (s[i]=='(' or s[i]=='[' or s[i]=='{') t.push(s[i]);
        else{
            if (t.empty()) return false;
            else if(t.top()=='(' and s[i]!=')') return false;
            else if(t.top()=='[' and s[i]!=']') return false;
            else if(t.top()=='{' and s[i]!='}') return false;
            t.pop();
        }
    }
    return t.empty();
}

int main(){
    string s; cin>>s;

    if(brackets(s)) cout<<"yes";
    else cout<<"no";

    return 0;
}