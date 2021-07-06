int solve(int arr[], int i , int j)
{
	if(i>=j)
		return 0;
	int mn = INT_MAX;
	for(int  k = i ; k <=j-1; k++)
	{
		int tempAns = solve(arr,i,k) + solve(arr,k+1,j)+(arr[i-1] * arr[k]*arr[j]);
	}
	if(tempAns <mn )
	{
		mn = tempAns;
	}
	return mn;
}