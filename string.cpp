#include<iostream>
#include<conio.h>
long int total=0;
using namespace std;
class S
{
    private:
        char a[20];
    public:
        S()
        {
            cout<<"Enter string :";
            cin>>a;
            cout<<"\nYour string is : "<<a<<endl;
            getch();
            system("CLS");
        }
        void Getlength()
        {
            int i;
            for( i=0;a[i]!='\0';i++);
            cout<<"\nLength of string is: "<<i;
            getch();
        system("CLS");
        }
        void Reverse()
        {
            int i,k,j,temp;
            for(j=0;a[j]!='\0';j++)
            {

            }
            j=j-1;
            for(i=0;i<j;i++)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                j--;
            }
            cout<<"\nReverse of string is:"<<a;
            cout<<"\n";
            getch();
        system("CLS");
        }
        void pelindrom()
        {
            int i,j,k=0;
            char rev[20];
            for(j=0;a[j]!='\0';j++)
            {}
            j=j-1;
            for(i=j;i>=0;i--)
            {
             rev[k]=a[i];
             k++;
            }
            k=0;
            i=0;
            while(a[i]!='\0')
            {
                if(rev[i]!=a[i])
                {
                    cout<<"\nString is not palindrom\n";
                    k++;
                    break;
                }
                i++;
            }
            if(k!=1)
                cout<<"\nString is palindrom\n";
            getch();
            system("CLS");
        }
        void findduplicate()
        {
            cout<<endl;
            int i;
            long int h=0,x;
            for(i=0;a[i]!='\0';i++)
            {
                x=1;
                x=x<<a[i]-97;
                if((x&h)>0)
                {
                    cout<<a[i]<<endl;
                }
                h=x|h;
            }
            getch();
            system("CLS");
        }
        void permutation(int k)
        {
            static int s[20]={0};
            static char r[20];
            int i;
            if(a[k]=='\0')
            {
                r[k]='\0';
                cout<<r<<" ";
                total++;
            }
            else{
                for(i=0;a[i]!='\0';i++)
                {
                    if(s[i]==0)
                    {
                        r[k]=a[i];
                        s[i]=1;
                        permutation(k+1);
                        s[i]=0;
                    }
                }
            }
        }
};
int main()
{
    int n;
    S str;
    do{
    cout<<"String Operations      \n";
    cout<<"1.Get Length \n";
    cout<<"2.Reverse String \n";
    cout<<"3.Duplicate in string \n";
    cout<<"4.String are palindrome or not \n";
    cout<<"5.permutation \n";
    cout<<"6. Exit \n";
    cout<<"Choose from the following list\n";
        cin>>n;
        switch(n)
        {
        case 1:
            str.Getlength();
            break;
        case 2:
            str.Reverse();
            break;
        case 3:
            str.findduplicate();
            break;
        case 4:
            str.pelindrom();
            break;
        case 6:
            exit(0);
        case 5:
            total=0;
            str.permutation(0);
            cout<<"\n total permutation= "<<total;
            getch();
            system("CLS");
            break;
        default:
            cout<<"Enter valid Option\n";
        }
    }while(1);
    return 0;
}
