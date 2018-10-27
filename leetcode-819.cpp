#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
#include <map>
using namespace std;

string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.begin(),paragraph.end(),paragraph.begin(),::tolower);
        for(int i=0;i<paragraph.size();i++)
        {
          if(ispunct(paragraph[i]))
              paragraph[i]=' ';
        }
        cout<<paragraph<<endl;
        map<string,int> m;
        istringstream word(paragraph);
        string s;
        while(word>>s)
        {
            m[s]++;
            for(int i=0;i<banned.size();i++)
            {
                if(banned[i]==s)
                      m[s]=0;
            }

        }
        for(auto iter=m.begin();iter!=m.end();iter++)
        {
          cout<<iter->first<<":"<<iter->second<<endl;
        }
        string res;
        int MAX=0;
        for(auto iter=m.begin();iter!=m.end();iter++)
        {
            if(iter->second>MAX)
            {
                MAX=iter->second;
                res=iter->first;
            }

        }
        return res;
    }

int main()
{
  string paragraph = "a.";
  vector<string> banned = {""};
  string result=mostCommonWord(paragraph, banned);
  cout<<result<<endl;
  return 0;
}
