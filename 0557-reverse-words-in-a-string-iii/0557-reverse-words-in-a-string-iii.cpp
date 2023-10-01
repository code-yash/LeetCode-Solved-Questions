class Solution {
public:
    string reverseWords(string s) 
    {
        stack<char>st;
        string rev = "";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == ' '){
                while(!st.empty())
                {    
                    rev += st.top();
                    st.pop();
                }
                rev += " ";
            }
            else{
                st.push(s[i]);
            }
        }

        while(!st.empty())
        {    
            rev += st.top();
            st.pop();
        }

        return rev;
    }
};