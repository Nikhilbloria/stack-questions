// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& temperatures) {
//         vector<int> ans;
//         stack<int>st;
//         int n = temperatures.size();
//         for(int i = n-1;i>=0;i--){
//             if(st.empty()){
//                 st.push(i);
//                 ans.push_back(0);
//             }else {
//                 while(!st.empty()&& temperatures[st.top()]<=temperatures[i]){
//                 st.pop();
//                 }
//                  if(st.empty()){
//                 st.push(i);
//                 ans.push_back(0);
//                  }else{
//                     ans.push_back(st.top()-i);
//                     st.push(i);
//                  }
//             }
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };



class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n  = temperatures.size();
        int maxi = INT_MIN;
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            if(temperatures[i]>=maxi){
                maxi = temperatures[i];
            }else{
                int j = i+1;
                while(temperatures[j]<=temperatures[i]){
                    j = j+ans[j];
                }
                ans[i] = j-i;
            }
        }return ans;
    }
};









