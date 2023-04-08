#include<iostream>
#include<stack>
using namespace std;
void reverse(stack<int> x)
{

    stack<int>s1;
    stack<int>s2;
    while(!x.empty())
    {
        if(s1.size()==0)
        {
            s1.push(x.top());
            x.pop();
        }
        else
        {
            if(x.top()>=s1.top())
            {
            s1.push(x.top());
            x.pop();
            }
            else
            {
                while(!s1.empty())
                {
                 
                  if(x.top()>=s1.top())
                  break;
                  s2.push(s1.top());
                  s1.pop();
                }
                s1.push(x.top());
                x.pop();
                while(!s2.empty())
                {
                 s1.push(s2.top());
                 s2.pop();
                }
            }
        }
    }
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}
int main()
{
    stack<int>given;
    given.push(1);
    given.push(3);
    given.push(5);
    given.push(9);
    given.push(2);
    reverse(given);
   
    return 0;
}