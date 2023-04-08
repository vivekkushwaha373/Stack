#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<char>x;
stack<char>y;
int i=0;
string s1="ab#c";
string s2="ad#c";
while(s1[i]!='\0')
{
  if(s1[i]!='#')
  x.push(s1[i]);
  else
  x.pop();
  i++;
}
i=0;
while(s2[i]!='\0')
{
  if(s2[i]!='#')
  y.push(s2[i]);
  else
  y.pop();
  i++;
}
if(x==y)
cout<<"same string";
else
cout<<"string is not same";
return 0;
}