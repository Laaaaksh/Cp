class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us;
        vector<int> v;
        for(int i=0 ; i < nums1.size(); i++)
        {
         us.insert(nums1[i]);   
        }
        for(int i=0; i< nums2.size(); i++)
        {
         if(us.find(nums2[i])!=us.end())
         {
            v.push_back(nums2[i]);
            us.erase(nums2[i]);
         }
        }
        return v;
    }
};