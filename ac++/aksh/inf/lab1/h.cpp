#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n; cin >> n;
    deque<int> d, q;

    while(n!=0){
        int x;
        char c; cin >> c;

        if(c == '+'){
            cin >> x;
            if(q.empty()) q.push_front(x);
            else d.push_front(x);
        }
        else if(c == '*'){
            cin >> x;
            d.push_back(x);
        }
        else if(c == '-'){
            cout << q.back() << endl;
            q.pop_back();
        }

        if(d.size() > q.size()){
            q.push_front(d.back());
            d.pop_back();
        }
        n--;
    }

    return 0;
}