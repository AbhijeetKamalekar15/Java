//Class to implement stack
#include<iostream>
#define M 5
using namespace std;
class Stack
{
    int top;
    int arr[M];
    public:
        Stack()
        {
            top=-1;
        }
        ~Stack(){}
        void push(int);
        int pop();
        int isEmpty();
        int isFull();
        void display();
        void menu();
};
int Stack::isEmpty()
{
    return (top==-1);
}
int Stack::isFull()
{
    return (top==M-1);
}
void Stack::push(int d)
{
    top++;
    arr[top]=d;
}
int Stack::pop()
{
    return arr[top--];
}
void Stack::display()
{
    if(isEmpty())
        cout<<"\nStack Empty";
    else
    {
        cout<<"\nStack:\n";
        for(int i=top;i>=0;i--)
            cout<<" "<<arr[i];
    }
}
void Stack::menu()
{
    int opt,d;
    while(1)
    {
        cout<<"\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption:";
        cin>>opt;
        if(opt>3)
            break;
        switch(opt)
        {
            case 1:
                if(isFull())
                    cout<<"\nOverflow";
                else
                {
                    cout<<"\nData:";
                    cin>>d;
                    push(d);
                }
                break;
            case 2:
                if(isEmpty())
                    cout<<"\nUnderflow";
                else
                    cout<<"\nData:"<<pop();
                break;
            case 3:
                display();
        }
    }
}
int main()
{
    Stack p;
    p.menu();
    return 0;
}