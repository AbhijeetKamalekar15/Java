//multilevel inheritance 
//use of constructors
//method overiding
#include<iostream>
using namespace std;
class A
{
    protected:
        int a;
    public:
        A()
        {
            a=0;
        }
        ~A(){}
        void set()
        {
            cout<<"\nA a:";
            cin>>a;
        }
        void display()
        {
            cout<<"\nA a:"<<a;
        }
};
class B:public A
{
    protected:
        int b;
    public:
        B():A()
        {
            b=0;
        }
        ~B(){}
        void set()
        {
            A::set();
            cout<<"\nB b:";
            cin>>b;
        }
        void display()
        {
            A::display();
            cout<<"\nB b:"<<b;
        }
};
//Throughout class hierrarchi if a method with same prototype but behaviour is different then
// it is called as  overridding of methods
class C:public B
{
    protected:
        int c;
    public:
        C():B()
        {
            c=0;
        }
        ~C(){}
        void set()
        {
            //cout<<"\nC c:";
            //cin>>c;
            B:set();
            c=a+b;
        }
        void display()
        {
            cout<<"\nC c:"<<c;
        }
};
int main()
{
    C objc;
    objc.set();
    objc.display();
    
    return 0;
}