//constructor function definition outside the class
#include<iostream>
#define M 5
using namespace std;

class Array
{
    int x[M];
    public:
        Array();
        Array(int);
        Array(Array &);
        ~Array(){}
        void set();
        void display();
        int total();

};
Array::Array()
{
    for(int i=0;i<M;i++)
        x[i]=0;
}
Array::Array(int p)
{
    for(int i=0;i<M;i++)
        x[i]=p;
}
Array::Array(Array &p)
{
    for(int i=0;i<M;i++)
        x[i]=p.x[i];
}
void Array::set()
{
    cout<<"\nData:\n";
    for(int i=0;i<M;i++)
        cin>>x[i];
}
void Array::display()
{
    cout<<"\nData\n";
    for(int i=0;i<M;i++)
        cout<<" "<<x[i];
}
int Array::total()
{
    int tot=0;
    for(int i=0;i<M;i++)
        tot+=x[i];
    return tot;
}
int main()
{
    Array p;  //default
    p.display();
    p.set();
    p.display();
    cout<<"\nTotal:"<<p.total();
    Array q(p); //copy
    q.display();
}
