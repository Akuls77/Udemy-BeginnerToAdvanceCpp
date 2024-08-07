#include <iostream>
using namespace std;

template <class T>
class stack
{
private:
    T *stk;
    int top;
    int size;
public:
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};

template <class T>
void stack<T> :: push(T x)
{
    if(top == size -1)
        cout<<"Stack is full";
    else
    {
        top++;
        stk[top]=x;
    }
}

template <class T>
T stack<T> :: pop()
{
    T x =0;
    if(top==-1)
        cout<<"Stack is empty";
    else
    {
        x=stk[top];
        top--;
    }
    return x;
}

int main()
{
    stack<int> s(10);
    s.push(10);
    s.push(15);
    s.push(40);
    s.pop();
    return 0;
}