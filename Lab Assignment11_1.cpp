#include<iostream>
using namespace std;
#include<iomanip>

int count = 0;
int count1 = 0;
class Person
{
	protected:
		float Emp_ID[50] , Salary[100], Percentage[20], PRN[30];
		char Name[15][50], Department[15][50], Job[15][30];
	public:
		virtual void Get_data() = 0;
		virtual void Display() = 0;
};

class Employee : public Person
{
	public:
		int n;
		void Get_data()
		{
			cout<<"\n Enter the number of entries you want to enter: ";
			cin>>n;
			for(int j=0; j<n; j++)
			{
				cout<<"\n Enter the Name of Employee: ";
				fflush(stdin);
				for(int i=0; i<15; i++)
				{
					if(i==count)
					{
						cin>>Name[count];
					}
				}
				cout<<"\n Enter Employee ID : ";
				cin>>Emp_ID[j];
				cout<<"\n Enter the Job : ";
				for(int k=0;k<15;k++)
				{
					if(k==count)
					    cin>>Job[count];
				}
				cout<<"\n Enter Basic pay: ";
				cin>>Salary[j];
				count++;
			}
		}
		void Display()
		{
		    cout<<"\n ********************** EMPLOYEE DETAILS **************************\n ";
			for(int p=0;p<count;p++)
			{
				cout<<"\n Emp_ID\t : "<<Emp_ID[p];
				cout<<"\n Name \t : "<<Name[p];
				cout<<"\n Job \t : "<<Job[p];
				cout<<"\n Basic Pay\t : "<<Salary[p];
			}
    	}
};

class Student : public Person
{
	int num;
	public:
		void Get_data()
		{
			cout<<"\n Enter total number of entries : ";
			cin>>num;
			for(int i=0;i<num;i++)
			{
				cout<<"\n Enter Student name: ";
				fflush(stdin);
				for(int j=0;j<15;j++)
				{
					if(j==count1)
					    cin>>Name[count1];
				}
				cout<<"\n Enter PRN: ";
				cin>>PRN[i];
				cout<<"\n Enter Department: ";
				fflush(stdin);
				for(int k=0;k<15;k++)
				{
					if(k==count1)
					    cin>>Department[count1];
				}
				cout<<"\n Enter Percentage: ";
				cin>>Percentage[i];
				count1++;
			}
		}
		void Display()
		{
			cout<<"\n ************************ STUDENT DETAILS **************************\n";
			for(int p=0;p<count1;p++)
			{
				cout<<"\n PRN \t : "<<PRN[p];
				cout<<"\n Name \t : "<<Name[p];
				cout<<"\n Department \t : "<<Department[p];
				cout<<"\n Percentage \t : "<<Percentage[p];
			}
		}
};

main()
{
	int Y=1, choice;
	Person *P;
	Employee E;
	Student S;
	while(Y==1)
	{
		cout<<"\n Select from following: ";
		cout<<"\n 1. Employee details.\n ";
		cout<<"\n 2. Student details.\n ";
		cout<<"\n Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				P = &E;
				P->Get_data();
				P->Display();
				break;
			
			case 2:
				P = &S;
				P->Get_data();
				P->Display();
				break;
			
			default:
				cout<<"\n Wrong Choice. ";
		}
		cout<<"\n Enter 1 to continue and 0 to exit. \n";
		cout<<"\n Enter: ";
		cin>>Y;
	}
}


