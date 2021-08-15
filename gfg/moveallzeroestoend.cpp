class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int i = 0 ;
	    int k = 0;
	    for(;k<n;k++)
	    {
	        if(arr[k]!=0)
	            arr[i++] = arr[k];
	    }
	    while(i<n)
	        arr[i++] = 0;
	}
};