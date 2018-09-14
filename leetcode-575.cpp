class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int s=candies.size();
        unordered_set<int> kinds;
        for(auto kind:candies)
        {
            kinds.insert(kind);
        }
        int ks=kinds.size();
        if(ks>=s/2)
        {
            return s/2;
        }
        else
        {
            return ks;
        }
    }
};
