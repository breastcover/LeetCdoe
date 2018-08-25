// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {

        long int low=0;
        long int high=n;
        long int mid;
        while(low<high)
        {
            mid=(low+high)/2;
            if(guess(mid)==0)
            {
                return mid;
            }
            if(guess(mid)==1)
            {
                low=mid+1;
                continue;
            }
            if(guess(mid)==-1)
            {

                high=mid;
                continue;
            }

        }
        return low;
    }
};
