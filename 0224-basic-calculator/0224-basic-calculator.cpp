class Solution {
public:
    int calculate(string s) {
        int n = s.length();
        stack<long long>ans;
        long curr = 0;
        long result = 0;
        int sign = 1;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                curr = 0;
                while(i<n && isdigit(s[i])){
                    //stores curr number like if i is 1 and i+i is 2 then curr is 12
                    curr = curr * 10 + (s[i] - '0');
                    i++;
                }
                i--;
                curr = curr * sign; //next coming digit after - sign will be multipied by minus
                result  += curr;
                curr = 0;
                sign = 1;
            }else if (s[i]=='+'){
                sign = 1;
            }else if (s[i]=='-'){
                sign = -1;
            }else if (s[i]=='('){
                ans.push(result);
                ans.push(sign);
                result = 0;
                sign = 1;
            }else if (s[i]==')'){
                result = result*ans.top();
                ans.pop();
                result += ans.top();
                ans.pop();
            }
        }
        return result;
    }
};