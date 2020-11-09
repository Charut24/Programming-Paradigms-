#include<iostream>
using namespace std;
#include<iomanip>

int count=0;
int count1 = 0;

class Item
{
	protected:
		char Product_Name[15][50];
		float Price[15];
	public:
		virtual void Get_Data() = 0;
		virtual void Display_Data() = 0;
};
class Sales
{
	protected:
		float Total_sales, sale[100];
		void Get_sales()
		{
			cout<<"\n Enter Sales for three months: ";
			for(int i=0;i<3;i++)
			{
				cin>>sale[i];
			}
		}
		void Display()
		{
			cout<<"\n Total Sales: ";
			for(int i=0;i<3;i++)
			{
				Total_sales = Total_sales + sale[i];
			}
			cout<<Total_sales;
		}
		
};

class hwitem : public Item , protected Sales
{
	private:
		int qty[50], i, n;
	public:
		void Get_Data()
		{
			cout<<"\n ************************* Hardware Items ************************* \n ";
			cout<<"\n Enter the total number of Hardware items: ";
			cin>>n;
			for(int j=0;j<n;j++)
			{
				cout<<"\n Enter "<<j+1<<" Product name: ";
			    fflush(stdin);
		        for(int i=0;i<15;i++)
		        {
			        if(i==count)
			            cin>>Product_Name[count];
	        	}
			    cout<<"\n Enter Price: ";
			    cin>>Price[count];
			    cout<<"\n Enter Quantity: ";
			    cin>>qty[count];
			    count++;
			    cout<<"\n ";
			}
			Get_sales();
		}
		
		void Display_Data()
		{
			cout<<"\n ******************************   HARDWARE ITEMS   ****************************** \n ";
			cout<<"\n"<<setw(20)<<" Product Name "<<setw(15)<<" Price "<<setw(15)<<" Quantity "<<setw(15)<<" Amount "<<"\n";
			for(i=0;i<count;i++)
			{
				cout<<"\n"<<setw(20)<<Product_Name[i]<<setw(15)<<Price[i]<<setw(15)<<qty[i]<<setw(15)<<(Price[i]*qty[i])<<"\n";
			}
			Display();
		}
};

class switem : public Item , protected Sales
{
	private:
		int qty[50], i, n;
	public:
		void Get_Data()
		{
			cout<<"\n ************************* Software Items ************************* \n ";
			cout<<"\n Enter the total number of Software items: ";
			cin>>n;
			for(int j=0;j<n;j++)
			{
				cout<<"\n Enter "<<j+1<<" Product name: ";
			    fflush(stdin);
		        for(i=0;i<15;i++)
		        {
			        if(i==count1)
			            cin>>Product_Name[count1];
	        	}
			    cout<<"\n Enter Price: ";
			    cin>>Price[count1];
			    cout<<"\n Enter Quantity: ";
			    cin>>qty[count1];
			    count1++;
			    cout<<"\n \n ";
			}
			Get_sales();
		}
		void Display_Data()
		{
			cout<<"\n ******************************   SOFTWARE ITEMS   ****************************** \n ";
			cout<<"\n"<<setw(20)<<" Product Name "<<setw(15)<<" Price "<<setw(15)<<" Quantity "<<setw(10)<<" Amount "<<"\n";
			for(i=0;i<count;i++)
			{
				cout<<"\n"<<setw(20)<<Product_Name[i]<<setw(15)<<Price[i]<<setw(15)<<qty[i]<<setw(10)<<(Price[i]*qty[i])<<"\n";
			}
			Display();
		}
};

main()
{
	Item *I;
	hwitem h;
	switem s;
	int choice, y=1 ;
	while(y==1)
	{
		cout<<"\n Select from following choices: ";
		cout<<"\n 1. Hardware Items. ";
		cout<<"\n 2. Software Items. ";
		cout<<"\n Enter choice: ";
		cin>>(choice);
		switch(choice)
		{
			case 1:
				I=&h;
				I->Get_Data();
				I->Display_Data();
				break;
			
			case 2:
			    I=&s;
			    I->Get_Data();
			    I->Display_Data();
				break;
			
			default:
				cout<<"\n WRONG CHOICE. ";
		}cout<<"\n Enter 1 to continue and 0 to exit. ";
		cout<<"\n Enter: ";
		cin>>y;
	}
	return 0;
}
