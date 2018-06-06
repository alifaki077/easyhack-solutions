#include <bits/stdc++.h>

#define fr(i, start, n) for(int i=start; i < n; i++)
#define p(x, y) cout << x << " " << y << "\n"
#define all(x) x.begin(), x.end()
#define vf(v, e) find(all(v), e) != v.end()
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define in freopen("in", "r", stdin);
#define vi  vector<int>
#define vii vector<vi>
#define ll long long
#define pii pair<int, int>

// infinity
const ll oo = (ll)2 * 10e9; // two bilion

using namespace std;

char b[4][4];



bool v(int i, int j){
    if(i < 0 || i > 3) return false;
    if(j < 0 || j > 3) return false;
    return b[i][j] == 'x';
}

bool check(int i, int j){
    // sideways
    if (v(i, j - 1) && v(i, j+1)){ return true;}
    // updown
    if (v(i - 1, j) && v(i + 1, j)){ return true;}
    // diag
    if (v(i - 1, j - 1) && v(i + 1, j + 1)){ return true;}
    // inv diag
    if (v(i - 1, j + 1) && v(i + 1, j - 1)){ return true;}
    // up
    if (v(i - 1, j) && v(i - 2, j)){ return true;}
    // down
    if (v(i + 1, j) && v(i + 2, j)){ return true;}
    // right
    if (v(i, j + 1) && v(i, j + 2)){ return true;}
    // left
    if (v(i, j - 1) && v(i, j - 2)){ return true;}
    // d1
    if (v(i - 1, j - 1) && v(i - 2, j - 2)){ return true;}
    // d2
    if (v(i + 1, j + 1) && v(i + 2, j + 2)){ return true;}
    // id1
    if (v(i - 1, j + 1) && v(i - 2, j + 2)){ return true;}
    // id2
    if (v(i + 1, j - 1) && v(i + 2, j - 2)){ return true;}
    return false;
}

string solve(){
    for(int i=0; i < 4; i++){
        for(int j=0; j < 4; j++){
            if(b[i][j] == '.' && check(i, j)){
                return "YES";
            }
        }
    }
    return "NO";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;

    while(n--){
        for(int i=0; i < 4; i++){
            for(int j=0; j < 4; j++){
                cin >> b[i][j];
            }
        }
        cout << solve() << "\n";
    }
    return 0;
}