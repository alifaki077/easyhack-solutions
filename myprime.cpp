#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_prime(int n) {
        if (n <= 1) {
                return 0;
        }
        if (n == 2) {
                return true;
        }
        if (!(n % 2)) {
                return false;
        }
        for (int i = 2; i*i <= n; i++) {
                if (!(n % i)) {
                        return 0;
                }
        }
        return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, ans = 0;
    cin >> n;
    for(int i=1; i < n; i++){
        if(is_prime(i)) ans++;
    }
    cout << ans;
    return 0;
}
