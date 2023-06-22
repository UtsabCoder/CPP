#include<iostream>
#include<fstream>
using namespace std;

class File
{
    char ch;
public:
    void create_file(string );
    void display_file(string );
    string update_file(string );
};

void File::create_file(string fn)
{
    ofstream fout;
    fout.open(fn);
    if(fout.fail()==0)
    {
        cout<<"Write something in the file::\n";
        cin.get();
        while((ch=cin.get())!='\n')
        {
            fout<<ch;
        }
        fout.close();
        cout<<"File creation successful!\n";
    }
    else
    {
        cout<<"Error while creating file!!\n";
    }
}

string File::update_file(string fn)
{
    string nf;
    bool flag=false;
    cout<<"Enter updated file name:- ";
    cin>>nf;
    ofstream fout;
    ifstream fin;
    fout.open(nf);
    fin.open(fn);
    if(fout.fail() || fin.fail())
    {
        cout<<"Error while opening Updated File!\n";
        return fn;
    }
    else
    {
        fin.get(ch);
        if(ch!=' ')
        {
            flag=true;
            fout<<char(toupper(ch));
            fin.get(ch);
        }
        while(fin)
        {
            if(ch==' ')
            {
                if(flag==true)
                {
                    fout<<ch;
                }
                while(ch==' ')
                {
                    fin.get(ch);
                }
                flag=true;
                fout<<char(toupper(ch));
                fin.get(ch);
            }
            else
            {
                fout<<ch;
                fin.get(ch);
            }
        }
        fout.close();
        fin.close();
        return nf;
    }
}

void File::display_file(string fn)
{
    ifstream fin;
    fin.open(fn);
    if(fin.fail()==0)
    {
        fin.get(ch);
        while(fin)
        {
            cout<<ch;
            fin.get(ch);
        }
        fin.close();
        cout<<endl;
    }
    else
    {
        cout<<"Error while reading from the file!!\n";
    }
}

int main()
{
    File f1;
    string fn;
    cout<<"Enter your file name:- ";
    cin>>fn;
    f1.create_file(fn);
    cout<<"The contents of the file("<<fn<<")::\n";
    f1.display_file(fn);
    fn=f1.update_file(fn);
    cout<<"Content of updated file("<<fn<<")::\n";
    f1.display_file(fn);
    cout<<endl;
    return 0;
}















