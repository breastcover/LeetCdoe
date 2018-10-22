class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        long long i = ceil((-1.0 + sqrt(1+8.0*target)) / 2);

        long long sum = i * (i+1) / 2;
        if(sum==target)
            return i;
        int res=sum-target;
        if((res&1)==0)
            return i;
        else
            return i+((i)&1?2:1);
    }
};
