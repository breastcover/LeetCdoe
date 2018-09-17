class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> m;
        for(int i=0;i<list1.size();i++)
        {
            m[list1[i]]=i;
        }
        vector<string> vec;
        int min=list1.size()+list2.size();
        for(int j=0;j<list2.size();j++)
        {
            int tmp;
            if(m.find(list2[j])!=m.end())
            {
                tmp=m[list2[j]]+j;
                if(tmp<min)
                {
                    vec.clear();
                    min=tmp;
                    vec.push_back(list2[j]);
                }
                else if(tmp==min)
                {
                    vec.push_back(list2[j]);
                }

            }
        }
        return vec;
    }
};
