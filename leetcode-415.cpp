#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string addStrings(string num1, string num2) {
       int n=num1.size()-1,m=num2.size()-1;
       string res="";
       int carry=0;
       while(n>=0||m>=0||carry)
       {
           int sum=0;
           if(n>=0)
           {
               sum+=(num1[n]-'0');
               n--;
               cout<<sum<<endl;
           }
           if(m>=0)
           {
               sum+=(num2[m]-'0');
               m--;
               cout<<sum<<endl;
           }
           sum+=carry;

           carry=sum/10;
           res=to_string(sum%10)+res;
           sum=0;
       }

       return res;
   }

int main()
{
  string s1="123";
  string s2="456";
  string res=addStrings(s1,s2);
  cout<<res<<endl;
  return 0;
}
