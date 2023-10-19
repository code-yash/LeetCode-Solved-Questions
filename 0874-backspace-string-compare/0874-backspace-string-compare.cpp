class Solution {
public:

    string removeHash(string s){
        stack<char> st;

        int n = s.length();

        for(int i=0; i<n; i++){
            if(s[i] == '#'){
                if(!st.empty())
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        string str = "";
        while(!st.empty()){
            str += st.top();
            st.pop();
        }

        return str;
    }


    bool usingStack(string s, string t){
        string s1 = removeHash(s);
        string s2 = removeHash(t);

        if(s1 == s2)
            return true;
        return false;
    }



    bool backspaceCompare(string s, string t) {
        return usingStack(s, t);      
    }
};