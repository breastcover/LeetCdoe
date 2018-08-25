class Solution {
public:
    string reverseVowels(string s) {
        string str="auioeAEIOU";
        int i=0,j=s.size()-1;
        while(i<j)
        {
            i=s.find_first_of(str,i) ;
            j=s.find_last_of(str,j);
            if(i<j)
                swap(s[i++],s[j--]);
        }
        return s;
    }
};
