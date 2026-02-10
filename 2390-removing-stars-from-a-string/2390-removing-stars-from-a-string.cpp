// class Solution {
// public:
//     string removeStars(string s) {
//         int n = s.length();
//         stack<char>st;
//         for(int i=0;i<n;i++){
//             if(s[i]=='*'){
//                 st.pop();
//                 continue;
//             }else{
//                 if(s[i]!='*'){
//                 st.push(s[i]);
//                 }
//             }
//         }
//             string sto;
//             while(!st.empty()){
//                 sto.push_back(st.top());
//                 st.pop();
//             }
//             reverse(sto.begin(),sto.end());
//         return sto;
//     }
// };

// class Solution {
// public:
//     string removeStars(string s) {
//         string result;
//         for(int i =0;i<s.length();i++){
//             if(s[i]=='*'){
//                 result.pop_back();
//             }else{
//                 result.push_back(s[i]);
//             }
//         }return result;
//     }
// };
class Solution {
public:
    string removeStars(string s) {

        string result = "";

        for (char c : s) {
            if (c == '*') {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }

        return result;
    }
};