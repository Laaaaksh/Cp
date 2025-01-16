#include <bits/stdc++.h>
using namespace std;

vector<int> tree;
int n;

// Build the Segment Tree
void build(vector<int>& arr, int node, int start, int end) {
    if (start == end) {
        // Leaf node
        tree[node] = arr[start];
    } else {
        int mid = (start + end) / 2;
        build(arr, 2 * node, start, mid);
        build(arr, 2 * node + 1, mid + 1, end);
        tree[node] = tree[2 * node] + tree[2 * node + 1]; // Change operation as needed
    }
}

// Range Query
int query(int node, int start, int end, int l, int r) {
    if (r < start || l > end) return 0; // Out of range
    if (l <= start && r >= end) return tree[node]; // Fully within range
    int mid = (start + end) / 2;
    int left = query(2 * node, start, mid, l, r);
    int right = query(2 * node + 1, mid + 1, end, l, r);
    return left + right; // Change operation as needed
}

// Point Update
void update(int node, int start, int end, int idx, int val) {
    if (start == end) {
        // Leaf node
        tree[node] = val;
    } else {
        int mid = (start + end) / 2;
        if (idx <= mid) {
            update(2 * node, start, mid, idx, val);
        } else {
            update(2 * node + 1, mid + 1, end, idx, val);
        }
        tree[node] = tree[2 * node] + tree[2 * node + 1]; // Change operation as needed
    }
}

void init_segment_tree(vector<int>& arr) {
    n = arr.size();
    tree.resize(4 * n);
    build(arr, 1, 0, n - 1);
}

// Example Usage
int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    init_segment_tree(arr);

    // Query sum of range [1, 3]
    cout << "Sum of range [1, 3]: " << query(1, 0, n - 1, 1, 3) << endl;

    // Update index 2 to 6
    update(1, 0, n - 1, 2, 6);
    cout << "Sum of range [1, 3] after update: " << query(1, 0, n - 1, 1, 3) << endl;

    return 0;
}
