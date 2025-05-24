#include<bits/stdc++.h>
using namespace std;

vector<int> exist(int n){
    return {-1};
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> result;
        result = exist(n);
        int m = result.size();
        for(int i = 0 ; i < m ;i++){
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}