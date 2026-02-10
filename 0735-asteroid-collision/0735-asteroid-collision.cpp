class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        
        for(int i =0;i<n;i++){
            int x = nums[i];
            bool neg = false;
            while(!st.empty() && st.top()>0 && x<0){
                if(st.top()<-x){
                    st.pop();
                }
            else if (st.top()==-x){
                 st.pop();
                 neg = true;
                 break;
            }else{
                neg = true;
                break;
            }
        }
        if(!neg){
            st.push(x);
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



// // iterate 
// if(i is negative and stack top < negative {
//      while top is  empty &top is > negative {
//         then pop
//     }  
//    } else{top is > negative)
//     remove negative
//     } 

//     push i;
// return st;