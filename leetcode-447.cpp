class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int n=0;
        for(auto &p:points)
        {
            unordered_map<double,int> res(points.size());
            for(auto &q:points)
            {
                n+=2*(res[hypot(p.first-q.first,p.second-q.second)]++);
            }
        }
        return n;
    }
};
