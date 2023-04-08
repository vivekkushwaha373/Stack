#include<iostream>
#include<stack>
using namespace std;
class mystack
{
stack<int>s1;
stack<int>s2;
int min;
public:
mystack()
{
    min=0;
}
push(int v)
{
s1.push(v);
if(s2.empty())
{
    s2.push(v);
    min=v;
}
else
{
    if(s2.top()<v)
    {
      s2.push(min);
    }
    else
    {
      min=v;
      s2.push(min);
    }
}
}
size()
{
    cout<<"size of s1: "<<s1.size()<<endl;
    cout<<"size of s2: "<<s2.size()<<endl;
}
pop()
{
 if(s1.empty())   
 {
  cout<<" Element Cannot be popped"<<endl;
 }
 else
 {
 s1.pop();
 s2.pop();
 if(!s2.empty())
 min=s2.top();
 else
 min=-1;
   
 }
}
min_element()
{
    cout<<endl;// return s2.top();
    return min;
}
};
int main()
{
    mystack x;
    x.push(18);
    x.push(19);
    x.push(29);
    x.push(15);
    x.push(16);
    // cout<<x.min_element();
    x.pop();
    cout<<x.min_element();
    x.pop();
    cout<<x.min_element();
    x.pop();
    cout<<x.min_element();
    x.pop();
    cout<<x.min_element();
    x.pop();
    cout<<x.min_element();
    x.pop();
    cout<<x.min_element();
    
   
    
    return 0;
}