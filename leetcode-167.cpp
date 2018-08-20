class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=numbers.size();
        for(int i=0,j=s-1;;)

            if(numbers[i]+numbers[j]>target)
                j--;
            else if(numbers[i]+numbers[j]<target)
                i++;
            else
                return {i+1,j+1};
    }

};
