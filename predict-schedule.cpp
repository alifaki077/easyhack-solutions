#include <bits/stdc++.h>

using namespace std;

string d[7] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, sy[7], acc[7];
    cin >> n;
    while(n--){
        cin >> k;
        for(int i=0; i < 7; i++) cin >> sy[i];
        int last, summ = 0;
        for(int i=0; i < 7; i++){
            if(sy[i] != 0){
                last = i;
            }
            acc[i] = sy[i] + summ;
            summ = acc[i];
        }
        int mod = k % summ;
        int ans;
        if(mod == 0){
            ans = last;
        }else{
            for(int i=0; i < 7; i++){
                if(acc[i] >= mod){
                    ans = i;
                    break;
                }
            }
        }
        cout << d[ans] << "\n";
    }
    return 0;
}
