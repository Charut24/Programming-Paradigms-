#include<iostream>
using namespace std;

class Complex 
{
    int real,imag;
    public:
        Complex()                    // default constructor
		{
            cout<<"\n DEFAULT CONSTRUCTOR\n ";
        }

        Complex(int r_no)              //for equal values
		{
            real=r_no;
            imag=r_no;
            cout<<"\nCONSTRUCTOR WITH 1 PARAMETER";
            if(r_no>0)
				cout<<"\n THE FIRST NUMBER : "<<r_no<<"+"<<r_no<<" i";
			else
			    cout<<"\n THE FIRST NUMBER : "<<r_no<<r_no<<"i.";
        }

        Complex(int r_no,int i_no)              // for different values
		{
            real=r_no;
            imag=i_no;
            cout<<"\nCONSTRUCTOR WITH 2 PARAMETERS ";
            if(i_no>0)
			    cout<<"\n THE SECOND NUMBER : "<<r_no<<"+"<<i_no<<"i.";
			else
			    cout<<"\n THE SECOND NUMBER : "<<r_no<<i_no<<"i.";
        }

        void display() 
		{
			if(imag>0)
                cout<<"\n The Sum is  = "<<real<<"+"<<imag<<"i.";
            else
                cout<<"\n The Sum is  = "<<real<<imag<<"i.";
        }

    friend Complex summation(Complex,Complex);
};

Complex summation(Complex a1,Complex b1) 
{
    Complex ch;
    ch.real=a1.real+b1.real;
    ch.imag=a1.imag+b1.imag;
    return ch;
}

int main() 
{
    int a,b,c;
    
    Complex c1;
    cout<<"\nFor the equal value: ";
    cin>>a;
    Complex c2(a);
    cout<<"\n\n For different values: ";
    cout<<"\nEnter real part: ";
    cin>>b;
    cout<<"\nEnter imaginary part: ";
    cin>>c;
    
    Complex c3(b,c);
    
    Complex c4=summation(c2,c3);
    c4.display();
    cout<<"\n";
    return 0;
}
