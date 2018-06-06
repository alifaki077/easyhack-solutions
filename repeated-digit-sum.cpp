#include<bits/stdc++.h>
using namespace std;
 
int sod(int n)
{
    if (n == 0) 
       return 0;
    return (n % 9 == 0) ? 9 : (n % 9);
}

int main()
{
    long long a, b, pwr, sum = 0;
    cin >> a >> b;
    pwr = pow(a, b);
    cout << sod(pwr);
    return 0;
}