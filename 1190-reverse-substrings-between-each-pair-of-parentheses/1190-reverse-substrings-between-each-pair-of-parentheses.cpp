class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        for(int i = 0 ; i < s.length(); i++){
            if(s[i] == '('){
                st.push(i);
            }
            else if(s[i] == ')'){
                int open = st.top();
                int close = i;
                st.pop();
                reverse(s.begin() + open +1 , s.begin() + close);
            }
        }
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(' || s[i] == ')'){
                s.erase(s.begin()+i);
                i--;
            }
        }
        return s;
    }    
};