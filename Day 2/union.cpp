// @author: Laksh Sadhwani
// Code : Union of two arays

#include<bits/stdc++.h>
using namespace std;
// #define S 5
// typedef pair<int, int> iPair;
// typedef vector<int> V;
// typedef vector<bool> B;
// typedef tuple<int,int,int> T;
vector<int> union_function(int a[], int b[], int n, int m)
{
	unordered_set<int> us;
	for(int i = 0 ; i < n ; i++)
	{
		us.insert(a[i]);
	}
	for(int i = 0 ; i < m ; i++)
	{
		us.insert(b[i]);
	}
vector<int> v;
unordered_set<int>::iterator it;
for(it=us.begin(); it!=us.end(); it++){
	v.push_back(*it);
}
return v;
}
int main()
{
int a[7] = { 1, 2, 5, 6, 2, 3, 5 };
int b[10] = { 2, 4, 5, 6, 8, 9, 4, 2, 6, 5 };
vector<int> result = union_function(a,b,7,9);
for(auto it : result)
	cout << it << " ";
return 0;
}