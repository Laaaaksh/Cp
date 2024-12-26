#include <iostream>
#include <string>
using namespace std;
 
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int i=0;
        for ( i = 0; i < n; ++i)
        {
            if(s[i]=='0')break;
        }
        if(i==n)i=n-1;
        int m=i-1;
        int index=0;
        for(index=i;index<n&&m>=0;index++,m--){
            if(s[index]=='1')break;
        }
        m++;
        cout<<1<<" "<<n<<" "<<m+1<<" "<<m+n-i<<endl;
    }
    return 0;
}