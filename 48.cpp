//Implemenation of class matrix
#include<iostream>
using namespace std;
class Matrix
{
    int x[3][3];
    public:
        Matrix();
        Matrix(Matrix &);
        ~Matrix(){}
        void set();
        void display();
        Matrix add(Matrix &);
        Matrix sub(Matrix &);
        Matrix mul(Matrix &);
        Matrix transpose();

};
Matrix::Matrix()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            x[i][j]=0;
    }
}
Matrix::Matrix(Matrix &t)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            x[i][j]=t.x[i][j];
    }
}
void Matrix::set()
{
    int i,j;
    cout<<"\nData:";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cin>>x[i][j];
    }
}
void Matrix::display()
{
    cout<<"\nMatrix\n";
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<" "<<x[i][j];
        cout<<"\n";
    }
}
Matrix Matrix::add(Matrix &t)
{
    int i,j;
    Matrix p;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        p.x[i][j]=x[i][j]+t.x[i][j];
    }
    return p;
}
Matrix Matrix::sub(Matrix &t)
{
    int i,j;
    Matrix p;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        p.x[i][j]=x[i][j]-t.x[i][j];
    }
    return p;
}
Matrix Matrix::mul(Matrix &t)
{
    int i,j,k;
    Matrix p;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p.x[i][j]=0;
            for(k=0;k<3;k++)
                p.x[i][j]+=(x[i][k]*t.x[k][j]);
        }
    }
    return p;
}
Matrix Matrix::transpose()
{
    int i,j;
    Matrix t;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            t.x[i][j]=x[j][i];
    }
    return t;
}
int main()
{
    Matrix a,b,c;
    a.set();
    b.set();
    c=a.mul(b);
    a.display();
    b.display();
    c.display();
    return 0;
}
