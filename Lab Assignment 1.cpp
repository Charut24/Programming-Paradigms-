#include<iostream>
using namespace std;

#include<math.h>
#include<string.h>

void decimal_conversion(int base,int n);
void binary_conversion(int base,int n);
void octal_conversion(int base,int n);
void hex_conversion(int base,char hexa[]);
main()
{
    char c;
    do
    {
        int base,option,n;
        char hexa[10];
        cout<<"Choose your desired operation: ";
		cout<<"\n1.Decimal to Binary, Octal, and Hexadecimal. ";
		cout<<"\n2.Binary to Decimal, Octal, and Hexadecimal. ";
		cout<<"\n3.Octal to Decimal, Binary, and Hexadecimal. ";
		cout<<"\n4.Hexadecimal to Binary, Decimal, and Octal\n";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"Enter the number which you wish to convert (only whole numbers):";
            cin>>n;
            cout<<"Binary:";
            decimal_conversion(2,n);
            cout<<"\nOctal:";
            decimal_conversion(8,n);
            cout<<"\nHexadecimal:";
            decimal_conversion(16,n);
            break;
        case 2:
            cout<<"Enter the number which you wish to convert (only whole numbers):";
            scanf("%d",&n);
            cout<<"Decimal:";
            binary_conversion(10,n);
            cout<<"\nOctal:";
            binary_conversion(8,n);
            cout<<"\nHexadecimal:";
            binary_conversion(16,n);
            break;
        case 3:
            cout<<"Enter the number which you wish to convert (only whole numbers):";
            scanf("%d",&n);
            cout<<"Binary:";
            octal_conversion(2,n);
            cout<<"\nDecimal:";
            octal_conversion(10,n);
            cout<<"\nHexadecimal:";
            octal_conversion(16,n);
            break;
        case 4:
            cout<<"Enter the number which you wish to convert (only whole numbers):";
            fflush(stdin);
            gets(hexa);
            cout<<"Decimal:";
            fflush(stdin);
            hex_conversion(10,hexa);
            cout<<"\nBinary:";
            fflush(stdin);
            hex_conversion(2,hexa);
            cout<<"\nOctal:";
            fflush(stdin);
            hex_conversion(8,hexa);
            break;
        default:
            cout<<"\nWrong choice!";
        }
        cout<<"\nWould you like to perform the operation again?(y/n)";
        fflush(stdin);
        cin>>c;
    }
    while(c=='y');
}
void decimal_conversion(int base,int n)
{
    int rem=n%base;
    if(n==0)
        return;
    decimal_conversion(base,n/base);
    if(rem<10)
    {
        cout<<rem;
    }
    else
    {
        fflush(stdin);
        cout<<(char)(rem+55);
    }
}
void binary_conversion(int base,int n)
{
    int rem,ans=0,i=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        ans+=(rem*pow(2,i));
        i++;
    }
    if(base==10)
    {
        cout<<ans;
    }
    else
    {
        decimal_conversion(base,ans);
    }
}
void octal_conversion(int base,int n)
{
    int ans=0,rem,i=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        ans+=rem*pow(8,i);
        i++;
    }
    if(base==10)
    {
        cout<<ans;
    }
    else
    {
        decimal_conversion(base,ans);
    }
}
void hex_conversion(int base,char hexa[])
{
    long long ans=0;
    int i,value;
    int len=strlen(hexa);
    len--;
    for(i=0; hexa[i]!='\0'; i++)
    {
        if(hexa[i]>='0' && hexa[i]<='9')
        {
            fflush(stdin);
            value=(int)(hexa[i]-48);
        }
        else if (hexa[i]>='A' && hexa[i]<='F')
        {
            fflush(stdin);
            value=(int)(hexa[i]-55);
        }
        ans=ans+(value*pow(16,len));
        len--;
    }
    if(base==10)
        cout<<(int)(ans);
    else
        decimal_conversion(base,ans);
}
