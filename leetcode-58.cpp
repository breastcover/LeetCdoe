class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.size()-1,j;
          while(l>=0&&s[l]==' ')
          {
              l--;
          }
         j=l;
          while(l>=0&&s[l]!=' ')
          {
             l--;
          }
         return j-l;
    }
};
