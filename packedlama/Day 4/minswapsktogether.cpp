// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        cout << minSwap(arr, n, k) << "\n";
    }
	return 0;
}
// } Driver Code Ends

int minSwap(int *arr, int n, int k) {
    // Complet the function
    //sliding window technique
    //let us count the number of elements in array less than k
    int good=0;
    int bad=0;
    for(int i = 0 ; i < n ; i++)
    {
       if(arr[i] <= k){
           good++;
       } 
    }
    for(int i = 0 ; i < good ; i++)
        if(arr[i] > k)
         bad++;
    int mini=10000001;
    int j = good -1;
    int i= 0;
    // will simply slide the window now
    while( j < n)
    {
        mini = min (mini,bad);
        j++;
        if(arr[j] > k) bad++;
        if(arr[i] > k) bad --;
        i++;
    }
    if(mini == 10000001) return 0;
    else
        return mini;
}
