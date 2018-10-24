class Solution {
public:
    int numJewelsInStones(string J, string S) {
        vector<char> vec;
        for(int i=0;i<J.size();i++)
            vec.push_back(J[i]);
        unordered_map<char,int> m;
        int cnt=0;
        for(int i=0;i<vec.size();i++)
        {
            cnt+=count(S.begin(),S.end(),vec[i]);
        }
        return cnt;
    }
};
