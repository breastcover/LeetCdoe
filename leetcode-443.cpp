class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,l=0;
        for(int j=0;j<chars.size();j++)
        {
            if(j+1==chars.size()||chars[j]!=chars[j+1])
            {
                chars[l++]=chars[j];
                if(i<j)
                for(char c:to_string(j-i+1))
                    chars[l++]=c;
                i=j+1;
            }

        }
        return l;
    }
};
