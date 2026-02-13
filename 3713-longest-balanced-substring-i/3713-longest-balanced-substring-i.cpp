class Solution {
public:
    int longestBalanced(string s) {
        int n =s.length();
        int maxi = 0;
        for(int i =0;i<n;i++){
            vector<int>freq(26,0);
            for(int j =i;j<n;j++){
                freq[s[j]-'a']++; // for incrementing indices
                int tar  = freq[s[j]-'a'];
                bool flag = true;
                for(int k = 0;k<26;k++){//checking frequency are equal of each indicies
                    if(freq[k]>0 && freq[k]!= tar){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    maxi = max(maxi,j-i+1);
                }
            }
        }return maxi;
    }
};