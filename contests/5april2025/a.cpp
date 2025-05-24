#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 == 0) {
        cout << -1 << endl;
        return;
    }
    
    vector<int> p(n);
    int left = 1, right = n;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            p[i] = left++;
        } else {
            p[i] = right--;
        }
    }
    
    for (int num : p) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}