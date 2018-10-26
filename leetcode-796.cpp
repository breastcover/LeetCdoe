class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.empty()&&B.empty())
            return true;
        deque<char> q;
        deque<char> p;
        for(int i=0;i<B.size();i++)
        {
            p.push_back(B[i]);
        }
        for(int i=0;i<A.size();i++)
        {
            q.push_back(A[i]);
        }
        for(int i=0;i<A.size();i++)
        {
            char tmp=q.front();
            q.pop_front();
            q.push_back(tmp);
            if(q==p)
                return true;
        }
        return false;
    }
};
