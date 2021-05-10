// @author: Laksh Sadhwani
// Code : Juggling algorithm

#include<bits/stdc++.h>
using namespace std;
// #define S 5
// typedef pair<int, int> iPair;
// typedef vector<int> V;
// typedef vector<bool> B;
// typedef tuple<int,int,int> T;
int gcd_d(int a, int b)
{
	if(b==0)
		return a;
	else
		return(b, a%b);
}
void juggle_algo(int arr[], int n, int d)
{
	d = d % n;
	// reduced if the value of d is greater than n
	int gcd= gcd_d(n,d);
	// finding the gcd.
	for(int i=0 ; i< gcd ; i++){
	int temp=arr[i]; // starting off with the first element index
	int j=i;
	while(1)
	{
		int k= j+d;
		if(k>=n)
			k=k-n;
		if(k==i)
			break;
		// this is when our 1 set will break off.	
		arr[j]=arr[k];
		j=k;
	}
	arr[j]=temp;
	}
}
void printarr(int arr[], int n)
{
	for(int i=0 ; i < n; i++){
		cout<< arr[i] << " ";
	}
}
int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
int n=7;
int d=3;
juggle_algo(arr,n,d);
printarr(arr,n);
return 0;
}