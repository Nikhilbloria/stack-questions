class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> ans;
        for(int i = 0; i<n1 ;i++){
            int greater  = -1;
            bool found  =  false;// for checking the right part if i and j is equal then increment only j value so that we can check if j value which is now incremented is > i value which is equal to previous j value 
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    found = true;
                }else if (found && nums2[j]>nums1[i]){
                    greater = nums2[j];
                    break;
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }
};