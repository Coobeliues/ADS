#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    string s; getline(cin, s);

    for (char i : s){
        if (isdigit(i)) st.push(stoi(&i));
        else if(i == '+'){
            int a, b;
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(b + a);
        }else if(i == '-'){
            int a, b;
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(b - a);
        }else if(i == '*'){
            int a, b;
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            st.push(b * a);
        }
    }
    cout<<st.top();

    return 0;
}