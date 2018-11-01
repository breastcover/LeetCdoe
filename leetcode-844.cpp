class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> s;
        stack<char> t;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!='#')
                s.push(S[i]);
            else if(!s.empty())
                s.pop();
        }
        for(int i=0;i<T.size();i++)
        {
            if(T[i]!='#')
                t.push(T[i]);
            else if(!t.empty())
                t.pop();
        }
        return s==t;
    }
};
