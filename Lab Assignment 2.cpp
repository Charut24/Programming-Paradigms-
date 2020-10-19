//  Write a C++ program to perform complex number operations using structure and functions.

#include <iostream>
using namespace std;

void add();
void subtract();
void multiply();
void divide();

struct complex
{
    float real;
    float imag;
};

struct complex n1,n2,result;             // n1 and n2 for real and imaginary part , n is for result

int main()
{
	int choice;
	char ch;
	
	do
	{
		cout<<"\n select from the following: ";
		cout<<"\n 1. ADD.";
		cout<<"\n 2. SUBTRACT. ";
		cout<<"\n 3. MULTIPLY. ";
		cout<<"\n 4. DIVIDE. ";
		cout<<"\n Enter your choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				add();
				break;
			
			case 2:
				subtract();
				break;
			
			case 3:
				multiply();
				break;
				
			case 4:
				divide();
				break;
			
			default:
				cout<<"\n WRONG CHOICE";
	
		}cout<<"\n Type 'y' to run this again: \n ";
        fflush(stdin);
        cin>>ch;
	}while(ch=='y');
	fflush(stdin);
	return 0;
}

void add()
{
	cout << "\n \t For 1st complex number\n \t" << endl;
    cout << "\n Enter real and imaginary parts respectively:" << endl;
    cin >> n1.real >> n1.imag;
    cout << endl << "\n \tFor 2nd complex number\n \t" << endl;
    cout << "\n Enter real and imaginary parts respectively:" << endl;
    cin >> n2.real >> n2.imag;
    
    cout<<"\n Entered Values : \n";
    cout<<"\t";
    if(n1.imag<0)
    {
    	cout<<n1.real<<n1.imag<<"i"<<"\n";
	}
	else
	{
		cout<<n1.real<<"+"<<n1.imag<<"i"<<"\n";
	}
    cout<<"\t";
    if(n2.imag<0)
    {
    	cout<<n2.real<<n2.imag<<"i"<<"\n";
	}
	else
	{
		cout<<n2.real<<"+"<<n2.imag<<"i"<<"\n";
	}
    
	result.real = n1.real+n2.real;
    result.imag = n1.imag+n2.imag;
    
    if(result.imag<0)
    {
    	cout<<"\n Sum: "<<result.real<<result.imag<<"i";
	}
	else
	{
		cout<<"\n Sum: "<<result.real<<"+"<<result.imag<<"i";
	}
    
}

void subtract()
{
	cout << "\n \t For 1st complex number\n \t" << endl;
    cout << "\n Enter real and imaginary parts respectively:" << endl;
    cin >> n1.real >> n1.imag;
    cout << endl << "\n \tFor 2nd complex number\n \t" << endl;
    cout << "\n Enter real and imaginary parts respectively:" << endl;
    cin >> n2.real >> n2.imag;
    
    cout<<"\n Entered Values : \n";
    cout<<"\t";
    if(n1.imag<0)
    {
    	cout<<n1.real<<n1.imag<<"i"<<"\n";
	}
	else
	{
		cout<<n1.real<<"+"<<n1.imag<<"i"<<"\n";
	}
    cout<<"\t";
    if(n2.imag<0)
    {
    	cout<<n2.real<<n2.imag<<"i"<<"\n";
	}
	else
	{
		cout<<n2.real<<"+"<<n2.imag<<"i"<<"\n";
	}
    
    result.real = n1.real-n2.real;
    result.imag = n1.imag-n2.imag;
    if(result.imag<0)
    {
    	cout<<"\n Subtract: "<<result.real<<result.imag<<"i";
	}
	else
	{
		cout<<"\n Subtract: "<<result.real<<"+"<<result.imag<<"i";
	}
}

void multiply()
{
	cout << "\n \t For 1st complex number\n \t" << endl;
    cout << "\n Enter real and imaginary parts respectively:" << endl;
    cin >> n1.real >> n1.imag;
    cout << endl << "\n \tFor 2nd complex number\n \t" << endl;
    cout << "\n Enter real and imaginary parts respectively:" << endl;
    cin >> n2.real >> n2.imag;
    
    cout<<"\n Entered Values : \n";
    cout<<"\t";
    if(n1.imag<0)
    {
    	cout<<n1.real<<n1.imag<<"i"<<"\n";
	}
	else
	{
		cout<<n1.real<<"+"<<n1.imag<<"i"<<"\n";
	}
    cout<<"\t";
    if(n2.imag<0)
    {
    	cout<<n2.real<<n2.imag<<"i"<<"\n";
	}
	else
	{
		cout<<n2.real<<"+"<<n2.imag<<"i"<<"\n";
	}
    
    result.real = (n1.real*n2.real)-(n1.imag*n2.imag);  
    result.imag = (n1.real*n2.imag) + (n1.imag*n2.real);
    if(result.imag<0)
    {
    	cout<<"\n Multiply: "<<result.real<<result.imag<<"i";
	}
	else
	{
		cout<<"\n Multiply: "<<result.real<<"+"<<result.imag<<"i";
	}
}

void divide()
{
	cout << "\n \t For 1st complex number\n \t" << endl;
    cout << "\n Enter real and imaginary parts respectively:" << endl;
    cin >> n1.real >> n1.imag;
    cout << endl << "\n \tFor 2nd complex number\n \t" << endl;
    cout << "\n Enter real and imaginary parts respectively:" << endl;
    cin >> n2.real >> n2.imag;
    
    cout<<"\n Entered Values : \n";
    cout<<"\t";
    if(n1.imag<0)
    {
    	cout<<n1.real<<n1.imag<<"i"<<"\n";
	}
	else
	{
		cout<<n1.real<<"+"<<n1.imag<<"i"<<"\n";
	}
    cout<<"\t";
    if(n2.imag<0)
    {
    	cout<<n2.real<<n2.imag<<"i"<<"\n";
	}
	else
	{
		cout<<n2.real<<"+"<<n2.imag<<"i"<<"\n";
	}
	
    if(n2.real==0 || n2.imag==0)
    {
    	cout<<"\n DIVISION NOT POSSIBLE.";
	}
	else
	{
	    result.real = n1.real/n2.real;
        result.imag = n1.imag/n2.imag;
        if(result.imag<0)
    {
    	cout<<"\n Division: "<<result.real<<result.imag<<"i";
	}
	else
	{
		cout<<"\n Division: "<<result.real<<"+"<<result.imag<<"i";
	}
    }
}
