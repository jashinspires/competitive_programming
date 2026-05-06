//problem link https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class SmallestPair {
public:
    void solve() {
        int n;
        if (!(cin >> n)) return;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        long long min_sender_score = (long long)a[0] - 1;
        long long min_total = LLONG_MAX;
        for(int j = 1; j < n; j++) {
            int current_pos = j + 1;
            long long receiver_score = (long long)a[j] + current_pos;
            long long sender_score = (long long)a[j] - current_pos;
            min_total = min(min_total, min_sender_score + receiver_score);
            min_sender_score = min(min_sender_score, sender_score);
        }
        
        cout << min_total << "\n"; 
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while(t--) {
        SmallestPair sp;
        sp.solve();
    }
    return 0;
}