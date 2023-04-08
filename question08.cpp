#include<iostream>
using namespace std;
int main()
{
char s[]="aaAbbc";
char z[32];
int i=0;
int k=0;
int count=1;
// cout<<s.size();
while(s[i]!='\0')
{
    if(s[i]==s[i+1]||s[i]==s[i+1]+32 || s[i]==s[i+1]-32)
    {
        count++;
    }
    else 
    {
    //   if(count>1)
      z[k]=count+48;
      k++;
      if(s[i]>=65 && s[i]<=90)
      z[k]=s[i]+32;
      else
      {
        z[k]=s[i];
      }
      count=1;
      k++;
    }
   i++;
}
z[k]='\0';
k=0;
while(z[k]!='\0')
{
    cout<<z[k];
    k++;
}
return 0;
}