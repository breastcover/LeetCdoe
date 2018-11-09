#include <iostream>
#include <vector>
using namespace std;

bool isMonotonic(vector<int>& A) {
       int d=0,c=0;
       for(int i=1;i<A.size();i++)
       {
           if(A[i]>=A[i-1])
               d++;
           if(A[i]<=A[i-1])
               c++;
       }
       cout<<"d:"<<d<<endl;
       cout<<"c:"<<c<<endl;
       if(d==A.size()-1||c==A.size()-1)
           return true;
       return false;
   }


int main()
{
  vector<int> vec={6,5,4,4};
  bool res=isMonotonic(vec);
  return 0;
}
