class Solution {
public:
    int longestValidParentheses(string s) {
      stack<int> st;
      int n=s.length();
      st.push(-1);
      int maxl=0;
      for(int i=0;i<s.length();i++){
          if(s[i]=='('){
                st.push(i);
          }
          else{
             st.pop();
             if(st.empty()){
                    st.push(i);
                }
                else{
                    maxl = max(maxl,i - st.top());
                }
      }  
    }
    return maxl;
    }
};
