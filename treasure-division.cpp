#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, t;
    cin >> t;
    while(t--){
        cin >> n;
        if(n % 2 == 0){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }
    return 0;
}