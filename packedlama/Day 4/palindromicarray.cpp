// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
int PalinArray(int a[], int n)
{  
    for(int i = 0 ; i < n ; i++)
    {
        int ans=0;
        int temp = a[i];
        int r;
        while(temp > 0)
        {
            r = temp % 10;
            temp/=10;
            ans = (ans * 10) + r;
        }
        if(ans != a[i])
            return 0;
    }
    return 1;
}