class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for(int i=left;i<=right;i++)
        {
            if(helper(i))
                vec.push_back(i);
        }
        return vec;
    }

    bool helper(int num)
    {
        int tmp=num;
        while(tmp)
        {
            int tmp2=tmp%10;
            tmp/=10;
            if(tmp2==0||num%tmp2!=0)
                return false;
        }
        return true;
    }
};
