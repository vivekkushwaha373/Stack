#include<iostream>
#include<stack>
using namespace std;
void evaluate(char arr[])
{
stack<int>x;
int count=0;
for(int i=0;arr[i]!='\0';i++)
{
    if(arr[i]=='(')
   { 
    count++;
    x.push(count);
    cout<<count<<" ";
   }
   else if(arr[i]==')')
   {
    
     cout<<x.top()<<" ";
     x.pop();
    
   }
}

}
int main()
{
    char arr[]= "(((()(";
    evaluate(arr);

    return 0;
}