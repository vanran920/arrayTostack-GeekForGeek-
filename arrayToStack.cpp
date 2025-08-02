#include<bits/stdc++.h>
using namespace std;

class MyStack {
        private :
            int arr[1000];
            int top;
        public :
            MyStack() {
                 top = -1;
            }
            
            void push(int);
            int  pop(void);
};

void MyStack::push(int val)
{
    if(top<999)
    {
        top++;
        arr[top] = val;
    }
}

int MyStack::pop()
{
    if(top == -1)
    {
        return -1;
    }
    int val = arr[top];
    top--;
    return val;
}



int main()
{
    MyStack s ;
    vector<int> result;
    int ele;
    while(cin>>ele)
    {
        if(ele == 1)
        {
            int x;
            cin>>x;
            s.push(x);
        }
        else if(ele == 2)
        {
            result.push_back(s.pop());
        }
        else
        {
            break;
        }
    }
    for(int v : result )
    {
        cout<<v<<" ";
    }
}