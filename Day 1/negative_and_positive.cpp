// @author: Laksh Sadhwani
// Code : negative and positive without extra space

#include<bits/stdc++.h>
using namespace std;
// #define S 5
// typedef pair<int, int> iPair;
// typedef vector<int> V;
// typedef vector<bool> B;
// typedef tuple<int,int,int> T;
void printarr(int arr[], int n)
{
	for(int i=0; i< n; i++)
		cout<< arr[i] << " ";
}
// low=2;
// high=10;
// median = (low + high) / 2;
void reverse(int arr[], int left, int right)
{
	if(left < right){
		swap(arr[left],arr[right]);
		reverse(arr,++left,--right);
	}
}
void merge(int arr[], int n, int low, int mid, int high)
{
	int i=low;
	// first array starting point
	int j= mid +1;
	// second ka starting point

	// (low,1,-2,-3,i,4,5,6,mid);		(-1,-2,-3,-7,-4,4,5,6,7,8)
	// (mid +1,-7,-4,j,7,8,high);			
	while(i<=mid && arr[i]< 0)
		i++;
	while(j<=high && arr[j]<0)
		j++;
	// -1,-2,-3,-7,-4,4,5,6,7,8;
	// ,6,5,4  -4 , -7 j-1
	// -7,-4,4,5,6
	reverse(arr,i,mid);
	reverse(arr,mid+1,j-1);
	reverse(arr,i,j-1);
}
void mergesort(int arr[], int n, int low, int high)
{
	if(low < high)
	{
		int mid = low + (high-low)/2;
		mergesort(arr, n, low, mid);
		mergesort(arr, n , mid+1, high);

		merge(arr,n,low,mid,high);

	}
}
int main()
{
	int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
	int n= sizeof(arr)/sizeof(arr[0]);
	int low=0;
	int high=n-1;
	mergesort(arr,n,low,high);
	printarr(arr,n);
	return 0;
}