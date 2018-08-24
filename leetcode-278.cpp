// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int first=1,last=n;
        long int mid=(first+last)/2;
        while(first<last)
        {
            mid=(first+last)/2;
            if(isBadVersion(mid))
                last=mid;
            else
                first=mid+1;
        }
        return first;
    }
};
