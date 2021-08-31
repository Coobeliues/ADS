#include <iostream>
#include <stack>

using namespace std;

// int ans(int *a, int n){
//     stack<int> t;
//     for (int i=0; i<n; i++){
//         t.push(a[i]);
//     }

// }

int main(){
    int n; cin>>n; int a[n];
    for (int i=0; i<n; i++) cin>>a[i];

    // cout<<ans(a, n);

    int ans = a[0],
	ans_l = 0,
	ans_r = 0,
	sum = 0,
	min_sum = 0,
	min_pos = -1;
    for (int r=0; r<n; ++r) {
	    sum += a[r];
	    int cur = sum - min_sum;
	    if (cur > ans) {
		    ans = cur;
		    ans_l = min_pos + 1;
		    ans_r = r;
	    }
	    if (sum < min_sum) {
		    min_sum = sum;
		    min_pos = r;
	    }
    }

    cout<<ans;

    return 0;
}