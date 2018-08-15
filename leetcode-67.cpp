class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.size()-1,m=b.size()-1;
        int carry=0;
        string s="";
        while(n>=0||m>=0||carry==1)
        {
            carry+=n>=0?a[n--]-'0':0;
            carry+=m>=0?b[m--]-'0':0;
            s=to_string(carry%2)+s;
            carry=carry/2;
        }
        return s;
    }
};
