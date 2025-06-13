//Implementation of single inheritance
#include<iostream>
using namespace std;
class Number 
{
    int no;
    public:
        void setData()
        {
            cout<<"\nEnter no:";
            cin>>no;
        }
        void display()
        {
            cout<<"\nNo:"<<no;
        }
        int getData()
        {
            return no;
        }      
};
class ExNumber:public Number
{
    public:
    void table();
    int oddeven()
    {
        return getData() % 2;
    }
};
void ExNumber::table()
{
    int i=1,n=getData();
    cout<<"\nTable\n";
    while(i<=10)
    {
        cout<<" "<<n*i;
        i++;
    }
}
int main()
{
    ExNumber p;
    p.setData();
    p.display();
    p.table();
    ExNumber q;
    q.setData();
    q.display();
    if(q.oddeven())
        cout<<"\nOdd";
    else
        cout<<"\nEven";
    return 0;
}