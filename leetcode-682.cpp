class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sum=0;
        int s=0;
        vector<int> cur;
        for(auto op:ops)
        {
            if(op=="C")
            {
                sum-=cur.back();
                cur.pop_back();
                continue;
            }
            if(op=="D")
            {
                sum+=s=cur.back()*2;
            }
            else if(op=="+")
            {
                sum+=s=cur[cur.size()-1]+cur[cur.size()-2];
            }
            else
            {
                sum+=s=stoi(op);
            }
            cur.push_back(s);
        }
        return sum;
    }
};
