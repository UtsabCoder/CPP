#include<iostream>
using namespace std;

class Matrix
{
    int r,c;
    int m[3][3];
public:
    void mat_input();
    void mat_display();
    Matrix mat_add(Matrix );
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

Matrix Matrix::mat_add(Matrix n)
{
   int i,j;
   Matrix k;
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            k.m[i][j]=m[i][j]+n.m[i][j];
        }
    }
    return k;
}

int main()
{
    Matrix m,n,s;
    cout<<"Enter first matrix:-\n";
    m.mat_input();
    cout<<"Enter second matrix:-\n";
    n.mat_input();
    cout<<"Input::\n";
    cout<<"First matrix:-\n";
    m.mat_display();
    cout<<"Second matrix:-\n";
    n.mat_display();
    s=m.mat_add(n);
    cout<<"Sum of two matrices::\n";
    s.mat_display();
    return 0;
}










