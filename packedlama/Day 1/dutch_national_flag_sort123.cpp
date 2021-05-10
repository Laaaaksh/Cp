// @author: Laksh Sadhwani
// Code : In switch case we can put {} this braces around the cases.

#include<bits/stdc++.h>
using namespace std;
// #define S 5
// typedef pair<int, int> iPair;
// typedef vector<int> V;
// typedef vector<bool> B;
// typedef tuple<int,int,int> T;

void SwapP(int* a, int* b)
{
	int temp= *a;
	*a=*b;
	*b=temp;
}
void sortarr(int arr[], int n)
{
// Dutch national flag algorithm
int low = 0;
int mid=0;
int high=n-1;
	while(mid<=high)
	{
		switch(arr[mid])
		{
			case 0:{
				SwapP(&arr[low++], &arr[mid++]); break;
			}
			case 1 :{
				mid++; break;
			}
			case 2 :{
				SwapP(&arr[mid], &arr[high--]); break;
			}
		}
	}
}
void printarr(int arr[], int n)
{
	for(int i=0 ; i < n; i++)
		cout<< arr[i] << " ";
}
int main()
{
int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
int n = sizeof(arr) / sizeof(arr[0]);
sortarr(arr,n);
printarr(arr,n);
return 0;
}