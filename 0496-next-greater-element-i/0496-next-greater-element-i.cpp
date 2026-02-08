// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         int n1 = nums1.size();
//         int n2 = nums2.size();
//         vector<int> ans;
//         for(int i = 0; i<n1 ;i++){
//             int greater  = -1;
//             bool found  =  false;// for checking the right part if i and j is equal then increment only j value so that we can check if j value which is now incremented is > i value which is equal to previous j value 
//             for(int j=0;j<n2;j++){
//                 if(nums1[i]==nums2[j]){
//                     found = true;
//                 }else if (found && nums2[j]>nums1[i]){
//                     greater = nums2[j];
//                     break;
//                 }
//             }
//             ans.push_back(greater);
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        stack<int>st;
        for(int j=nums2.size()-1;j>=0;j--){
            while(st.size()>0 && st.top()<=nums2[j]){
                st.pop();
            }
            if(st.empty()){
                mp[nums2[j]] = -1;
            }else{
                mp[nums2[j]]=st.top();
            }
            st.push(nums2[j]);
        }
        vector<int>ans;
        for(int i = 0;i<nums1.size();i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};