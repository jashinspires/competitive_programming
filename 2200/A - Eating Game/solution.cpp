#include <bits/stdc++.h>
using namespace std;
 
int simulate(vector<int> a, int start) {
    int n = a.size();
    int cur = start;
    int last = -1;
    while (true) {
        bool any = false;
        for (int x : a) if (x > 0) { any = true; break; }
        if (!any) break;
        if (a[cur] > 0) {
            a[cur]--;
            last = cur;
        }
        cur = (cur + 1) % n;
    }
    return last;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;
 
        set<int> winners;
        for (int start = 0; start < n; start++) {
            winners.insert(simulate(a, start));
        }
        cout << winners.size() << "
";
    }
    return 0;
}