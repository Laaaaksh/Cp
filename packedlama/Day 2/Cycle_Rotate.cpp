// @author: Laksh Sadhwani
// Rotate by one

#include<bits/stdc++.h>
using namespace std;
#define S 5
typedef pair<int, int> iPair;
typedef vector<int> V;
typedef vector<bool> B;
typedef tuple<int,int,int> T;
void rotate_by_one(int arr[], int n){
	int temp=arr[0];
	for(int i=0; i < n-1 ; i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}
void rotate(int arr[], int n, int d)
{
 for(int i = 0; i < d ; i++){
 	rotate_by_one(arr,n);
 }
}
void print_arr(int arr[], int n)
{
	for(int i = 0; i < n ; i++){
		cout << arr[i] << " ";
	}
}
int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
int n=7;
int d = 1;
rotate(arr,n,d);
print_arr(arr,n);	
return 0;
}