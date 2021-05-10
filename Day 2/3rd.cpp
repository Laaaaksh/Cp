// priority_queue<int> pq; // by default max heap.
// priority_queue<int, vector<int>, greater<int>>; 
// kth smallest element (max heap)
//  2  24 71 6 12; 
//  3rd smallest element.


// // declaring min heap.
// // default max heap
// 30 20 19 29;
// kth smallest(max heap) or kth largest(min heap) - heap.
//smallest element.
#include<bits/stdc++.h>
using namespace std;
int main(){
priority_queue<int> pq; 
int arr[5]={2,24,71,6,12};
int i=0;
int k=3;
for(auto it : arr){
		pq.push(it);
			if(pq.size() > k)
			pq.pop(); // maximum element always.
	}
cout << pq.top();
return 0;
//O(nlogk);
}