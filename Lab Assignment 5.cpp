#include<iostream>
using namespace std;
#include<conio.h>

class student
{
	private:
        long long int PRN;
        char Name[20];
        char Class[8];
        char Branch[10];
        int Marks[10];
        float Percentage;
        char Grade[10];
        float Calculate();
        int n;
    public:
        void readmarks();
        void displaymarks();
};

float student :: Calculate()
{
	for(int i=0;i<n;i++)
	{
		if(Marks[i]<35)
		{
			cout<<"\n FAIL";
			Percentage=0;
			return Percentage;
		}
	}
    Percentage=0;
    for(int j=0;j<n;j++)
    {
    	Percentage+=Marks[j];
	}
    Percentage=(Percentage/n);
	return Percentage;
}

void student :: readmarks()
{
	cout<<"Enter the name: ";
	cin>>Name;
    cout<<"Enter the PRN: ";
	cin>>PRN;
    cout<<"Enter the class: ";
    cin>>Class;
    cout<<"Enter Branch: ";
    cin>>Branch;
    cout<<"\n Enter the total number of subjects: ";
    cin>>n;
    cout<<"Enter the marks(out of 100): "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"\tEnter mark "<<i+1<<":";
		cin>>Marks[i];
	}
}

void student :: displaymarks()
{
    cout<<"\n Name: "<<Name<<endl;
    cout<<"\n PRN: "<<PRN<<endl;
    cout<<"\n Class: "<<Class<<endl;
    cout<<"\n Branch: "<<Branch<<endl;
    cout<<"\n Percentage: "<<Calculate()<<"%"<<"\n";
    if(Percentage>=90)
    {
    	cout<<"\n Grade = A \n"<<endl;
	}
	if(Percentage<90 && Percentage>=80)
	{
		cout<<"\n Grade = B \n ";
	}
	if(Percentage<80 && Percentage>=70)
	{
		cout<<"\n Grade = C \n ";
	}
	if(Percentage<70 && Percentage>=50)
	{
		cout<<"\n Grade = D \n ";
	}
	if(Percentage<50 && Percentage>=35)
	{
		cout<<"\n Grade = E \n";
	}
	if(Percentage<35 && Percentage>0)
	{
		cout<<"\n Fail. \n";
	}
	else
	    cout<<"";
}

int main()
{
    student S[10];
    int num;
    cout<<"\n Enter the number of records you want to enter : ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
    	cout<<"\n Enter Student "<<i+1<<" details \n ";
    	S[i].readmarks();
	}
    for(int j=0;j<num;j++)
    {
    	cout<<"\n Student "<<j+1<<" details \n ";
    	S[j].displaymarks();
	}
    return 0;
}



