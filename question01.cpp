#include<bits/stdc++.h>
using namespace std;
class stac
{
int arr[100];
int top;

public:
stac()
{
    top=-1;
  
}
push(int v)
{
if(top==99)
cout<<"Stack is Full; No more element Can be pushed further"<<endl;
else
arr[++top]=v;
}
sizeofstack()
{
    cout<<"Size = "<<top+1<<endl;
}
 IsEmptyStack()
{
if(top==-1)
cout<<"Stack is Empty"<<endl;
else
cout<<"Stack is not Empty"<<endl;

}
MidElement()
{
int s=(top+1)/2;
for(s;s!=top;s++)
{
    arr[s]=arr[s+1];
}
top--;
//here top is reducing 4-->3-->2-->1
}
pop()
{
    if(top==-1)
    {
        cout<<"Stack is Empty;element cannot be popped"<<endl;
    }
    else
    {
        --top;
    }

}
PrintStack()
{
    while(top!=-1)
    {
        cout<<arr[top--]<<" ";
    }
    cout<<endl;
}
};
int main()
{
    stac s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(6);
    // s1.pop();
    // s1.push(10);
    s1.MidElement();
    s1.PrintStack();
    s1.pop();
    s1.IsEmptyStack();
    return 0;
}