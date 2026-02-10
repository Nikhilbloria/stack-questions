class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        for(int &a:nums){
            while(!st.empty() && a<0 && st.top()>0){
                int sum = a+st.top();
                if(sum<0){
                    st.pop();
                }else if (sum>0){
                    a=0;
                }else{//sum==0
                    st.pop();
                    a=0;
                }
            }
            if(a!=0){
                st.push(a);
            }
        }
 vector<int> ans(st.size());
        for(int i = ans.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};

