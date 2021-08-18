class Solution {
  public:
    bool isCheck(string s)
    {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int isDigitSumPalindrome(int N) {
        int temp = N;
        int sum = 0;
        while(temp)
        {
            sum = sum + (temp%10);
            temp = temp / 10;
        }
        return isCheck(to_string(sum));
    }