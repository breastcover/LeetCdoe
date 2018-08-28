#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



char findTheDifference(string s, string t) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++)
        {
            int index=s[i]-'a';
            ++hash[index];
        }
        for(int i=0;i<t.size();i++)
        {
            if(hash[t[i]-'a']==0)
                return t[i];
        }
    }

  int main()
  {
      string s="abcd";
      string t="abcde";
      char c=findTheDifference(s,t);
      cout<<c<<endl;
      return 0;
    }
