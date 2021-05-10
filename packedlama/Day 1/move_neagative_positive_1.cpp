
// here the order is not maintained.
#include<bits/stdc++.h>
using namespace std;
void sortarr(int arr[], int n)
{
int mid=0;
int high=n-1;
while(mid <= high){
		if(arr[mid] < 0){
			mid++;
		}
		else{
		swap(arr[mid],arr[high]);
		high--;
		}
}
}
void printarr(int arr[], int n)
{
for(int i=0; i < n; i++)
{
	cout<< arr[i] << " ";
}	
}
int main()
{
int arr[]={ 5, -2, 9, -6, 1, -8, 3, -3};
int n= sizeof(arr) / sizeof(arr[0]);
sortarr(arr,n);
printarr(arr,n);
return 0;
}