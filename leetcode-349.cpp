#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us;
        vector<int> vec;
        //if(!nums1.empty()||!nums2.empty())
        //    return vec;
        int flag=0;
        int n=nums1.size();
        int m=nums2.size();
        //cout<<n<<m<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                    {
                      us.insert(nums1[i]);
                      flag++;
                    }

            }
        }
        //cout<<flag<<endl;
        //for(auto iter=us.begin();iter!=us.end();iter++)
        //{
          //cout<<*iter<<endl;
        //}
        copy(us.begin(),us.end(),back_inserter(vec));
        return vec;
    }


int main()
{
  vector<int> vec1={1,2,2,1};
  vector<int> vec2={2,2};
  vector<int> vec3=intersection(vec1,vec2);
  for(auto iter=vec3.begin();iter!=vec3.end();iter++)
  {
    cout<<*iter<<endl;
  }
  return 0;
}
