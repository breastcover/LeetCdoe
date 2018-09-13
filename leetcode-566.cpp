#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
       vector<vector<int>> res;
       if(nums.empty())
           return res;
       vector<int> vec;
       for(auto row:nums)
       {
           for(auto col:row)
               {
                 vec.push_back(col);
                 cout<<col<<" ";
               }
               cout<<endl;
       }

       if(vec.size()==r*c)
       {
           for(int i=0;i<r;i++)
           {
               cout<<1<<endl;
               vector<int> tmp;
               cout<<2<<endl;
               for(int j=0;j<c;j++)
               {
                 tmp.push_back(vec[i*c+j]);
               }
               cout<<3<<endl;
               cout<<"tmp.size:"<<tmp.size()<<endl;
               for(int j=0;j<tmp.size();j++)
               {
                 cout<<"tmp:"<<tmp[j]<<endl;
               }
               res.push_back(tmp);
           }
           return res;
       }
       else
       {
         return nums;
         cout<<"false"<<endl;
       }

   }


int main()
{
  vector<vector<int>> nums={{1,2},{3,4}};
  vector<vector<int>> res=matrixReshape(nums,1,4);
  for(auto row:res)
  {
    for(auto col:row)
      cout<<col<<endl;
  }
  return 0;
}
