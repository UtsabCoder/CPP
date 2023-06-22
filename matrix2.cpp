#include<iostream>
using namespace std;

class Matrix
{
    int r,c;
    int m[3][3];
public:
    void mat_input();
    void mat_display();
    void mat_add(Matrix , Matrix );
    void mat_sub(Matrix ,Matrix );
    void mat_mul(Matrix ,Matrix );
};
void Matrix::mat_input()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
    }
}
void Matrix::mat_display()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Matrix::mat_add(Matrix k,Matrix n)
{
   int i,j;
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j]=k.m[i][j]+n.m[i][j];
        }
    }
}

void Matrix::mat_sub(Matrix k,Matrix n)
{
   int i,j;
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j]=k.m[i][j]-n.m[i][j];
        }
    }
}

void Matrix::mat_mul(Matrix k,Matrix n)
{
    int i,j,l;
    Matrix p;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p.m[i][j]=0;
            for(l=0;l<3;l++)
            {
                p.m[i][j]+=k.m[i][l]*n.m[l][j];
            }
        }
    }
}
int main()
{
    Matrix m,n,sum,sub,mul;
    cout<<"Enter first matrix:-\n";
    m.mat_input();
    cout<<"Enter second matrix:-\n";
    n.mat_input();
    cout<<"Input::\n";
    cout<<"First matrix:-\n";
    m.mat_display();
    cout<<"Second matrix:-\n";
    n.mat_display();
    sum.mat_add(m,n);
    cout<<"Sum of two matrices::\n";
    sum.mat_display();
    sub.mat_sub(m,n);
    cout<<"Subtraction of two matrices::\n";
    sub.mat_display();
    mul.mat_mul(m,n);
    cout<<"Multiplication of two matrices::\n";
    mul.mat_display();
    return 0;
}











