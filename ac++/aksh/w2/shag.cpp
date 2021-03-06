#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int used [101];
int shagi[101];

int someone(int a, int b){
    queue<pair<int, int>> q;
    q.push(make_pair(a, 0));
    used [a] = 1;
    shagi[a] = a;

    while(!q.empty()){
        int p =q.front().first;
        int d = q.front().second;

        if (p == b) return d;

        if (used[p+1] == 0 ){
            q.push(make_pair(p+1, d+1));
            used[p+1] = 1;
            shagi[p+1] = p;
        }
        if (used[p*2] == 0 ){
            q.push(make_pair(p*2, d+1));
            used[p*2] = 1;
            shagi[p*2] = p;
        }
        if (used[p-1] == 0 ){
            q.push(make_pair(p-1, d+1));
            used[p-1] = 1;
            shagi[p-1] = p;
        }
        if (used[p/2] == 0 ){
            q.push(make_pair(p/2, d+1));
            used[p/2] = 1;
            shagi[p/2] = p;
        }

        q.pop();
    }
    return 0;
}

int main(){
    int a, b; cin>>a>>b;
    cout<<someone(a, b)<<endl;

    vector<int> v;
    v.push_back(b);
    int t = b;

    while (shagi[t] != t){
        t = shagi   [t];
        v.push_back(t);
    }
    
    for(int i =v.size()-1; i>=0; i--){
        cout<<v[i]<<" ";
    }

    return 0;
}