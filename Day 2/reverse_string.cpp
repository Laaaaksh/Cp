// @author: Laksh Sadhwani
// Code : Reverse string

#include<bits/stdc++.h>
using namespace std;
void reverse_func(string& s, int begin, int end)
{
	while(begin < end){
		char temp=s[begin];
		s[begin]=s[end];
		s[end]=temp;
		begin++;
		end--;
	}
}
// need to pass string put address bar.
// #define S 5
// typedef pair<int, int> iPair;
// typedef vector<int> V;
// typedef vector<bool> B;
// typedef tuple<int,int,int> T;
int main()
{
string s="Laksh";
int begin=0;
int end= s.size()-1;
reverse_func(s,begin,end);
cout << s;
return 0;
}