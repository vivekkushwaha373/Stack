#include<iostream>
using namespace std;
class Paranthesis
{
string s;
int arr[100];
int top;
public:
Paranthesis()
{
    s="[{()}]";
    top=-1;
    for(int i=0;i<s.size();i++)
    {
    if(s[i]=='(' || s[i]=='[' || s[i]=='{')
    {
          push(s[i]);
    }
    }
}
push(int v)
{
    top++;
arr[top]=v;
}
pop()
{
    top--;
}
checkparenthesis()
{

 for(int i=0;i<s.size();i++)
 {
        if(s[i]==')' && arr[top]=='(')
        pop();
        if(s[i]=='}' && arr[top]=='{')
        pop();
        if(s[i]==']' && arr[top]=='[')
        pop();
        // else if(s[i]==')'||s[i]=='}' ||s[i]==']' && top==-1)
        // return 0;
 }

if(top==-1)
return 1;
else
return 0;
 }

};
int main()
{
Paranthesis s1;
if(s1.checkparenthesis())
cout<<"true";
else
cout<<"False";
    return 0;
}