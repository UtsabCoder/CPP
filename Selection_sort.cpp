#include<iostream>
using namespace std;
class Sortarr
{
    int *a,s;
public:
    Sortarr(int n)
    {
        int i;
        s=n;
        a=new int(s);
        cout<<"Enter the elements in the array::\n";
        for(i=0;i<s;i++)
        {
            cin>>a[i];
        }
    }
    void Sel_sort()
    {
        int i,j,k,tmp;
        for(i=s-1;i>=1;i--)
        {
            k=i;
            for(j=0;j<i;j++)
            {
                if(a[j]>=a[k])
                    k=j;
            }
            if(k!=i)
            {
               tmp=a[k];
               a[k]=a[i];
               a[i]=tmp;
            }
        }
    }
    void display()
    {
        int i;
        cout<<"The Array::\n";
        for(i=0;i<s;i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the size of the array:- ";
    cin>>n;
    Sortarr arr(n);
    cout<<"Before sorting\n";
    arr.display();
    cout<<"Before sorting\n";
    arr.Sel_sort();
    arr.display();
    return 0;
}
