#include<iostream>
using namespace std;
class overloading
{
	int real,img;
	public:
		void get_data()
		{
			cout<<"\n Enter the real part of your complex number:\n";
			cin>>real;
			cout<<"\n Enter the imaginary part of your complex number:\n";
			cin>>img;
		}
		void operator ++()
		{
			real++;
			img++;
			cout<<"\n The complex number after increment is :\n",display();
		}
		void display()
		{
			if(img<0)
			{
				cout<<real<<img<<"i";
			}
			else
			{
				cout<<real<<"+"<<img<<" i";
			}
		}
		void operator ++(int)
		{
			++real;
			++img;
			cout<<"\n The complex number after increment is :",display();
		
		}
		friend overloading operator +(overloading &t,overloading &k);
		void operator<(overloading t);

};
overloading operator +(overloading &t,overloading &k)
{
	
	overloading c3;
	c3.real=t.real+k.real;
	c3.img=t.img+k.img;
	cout<<"\n After adding the resultant complex number is:\n";
	if(c3.img<0)
	{
		cout<<c3.real<<c3.img<<"i";
	}
	else
	{
		cout<<c3.real<<"+"<<c3.img<<" i";
	}
}
inline void overloading::operator<(overloading t)
{
	if(real>t.real)
	{
		cout<<"\n Complex number 1 is greater than complex number 2\n";
	}
	else if (real==t.real)
	{
		if(img>t.img)
		{
			cout<<"\n Complex number 1 is greater than complex number 2\n";
		}
		else
		{
			cout<<"\n Complex number 2 is greater than complex number 1\n";
		}
}
	else
	{
		cout<<"\n Complex number 2 is greater than complex number 1\n";
		}	
		
}	
int main()
{
	overloading c,c1,c2;
	int choice,flag=1;
	while(flag==1)
	{
	    cout<<"\n 1. To apply prefix increment operator on an object using member function.\n";
	    cout<<"\n 2. To apply postfix increment operator on an object using friend function. \n";
    	cout<<"\n 3. To add two objects using friend function. \n";
    	cout<<"\n 4. To compare two objects using member function. \n";
    	cout<<"Enter your choice\n";
	    cin>>choice;
	    switch(choice)
	    {
		    case 1:
			{
				c.get_data();
				cout<<"\n The complex number before increment is:\n",c.display();
				++c;
				break;
			}
		    case 2:
		    {
			    c.get_data();
			    cout<<"\n The complex number before increment is:\n",c.display();
			    c++;
			    break;
			}
		    case 3:
		    {
			    cout<<"\n For complex number 1:\n",c1.get_data();
			    cout<<"\n Complex number 1 is:\n",c1.display();
			    cout<<"\n For complex number 2:\n",c2.get_data();
			    cout<<"\n Complex number 2 is:\n",c2.display();
			    c1+c2;
			    break;

				}
		    case 4:
		    {
			    cout<<"\n For complex number 1:\n",c1.get_data();
			    cout<<"\n Complex number 1 is:\n",c1.display();
			    cout<<"\n For complex number 2:\n",c2.get_data();
			    cout<<"\n Complex number 2 is:\n",c2.display();
			    c1.operator<(c2);
		   }				
	}
	
	cout<<"\n Do you want to run the programme again ,if yes enter:1 else enter:2\n";
	cin>>flag;
}
}

