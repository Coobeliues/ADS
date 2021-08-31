#include <cassert>
#include <iostream>
#include <cmath>

class Fibonacci {
    public:
        static int get(int n) {
            int res;
            int zeros = 0, firsts = 1;
            for (int i=1; i<n; i++){
                res = firsts;
                firsts+= zeros;
                zeros = res;
            }
            


            return firsts;
        }
};

int main(void) {
    int n;
    std::cin >> n;
    std::cout << Fibonacci::get(n) << std::endl;
    return 0;
}