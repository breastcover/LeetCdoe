class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        char c;
        while(n!=0)
        {
            int m=(n-1)%26;


             c='A'+m;
             res=c+res;


            n=(n-1)/26;
        }
        return res;
    }
};  
