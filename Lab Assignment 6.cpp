#include<iostream>
using namespace std;
#include<string.h>
#include<iomanip>

int count=0;
class Shopping_list
{
	private:
		char Product_name[15][50];
		int Code[50];
		float Price[50];
		int qty[15];
	public:
		void Item_List();
		void Sum_display();
		void Remove_item();
		void display();
};

void Shopping_list :: Item_List()
{
		cout<<"\n Enter the product name: ";
		fflush(stdin);
		for(int i=0;i<15;i++)
		{
			if(i==count)
			    cin>>Product_name[count];
		}
		cout<<"\n Enter the item code: ";
		cin>>Code[count];
		cout<<"\n Enter the Price: ";
		cin>>Price[count];
		cout<<"\n Quantity: ";
		cin>>qty[count];
		count++;
	
}
void Shopping_list :: Sum_display()
{
	int i=0;
	float sum=0;
	for(i=0;i<count;i++)
	{
		sum+= Price[i] * qty[i];
	}
	cout<<"\n Total Price: "<<sum<<endl;
}
void Shopping_list :: Remove_item()
{
	int n_code,i=0,j=0,ch=0;
	cout<<"\n Enter the product code you want to remove : ";
	cin>>n_code;
	for(i=0;i<count;i++)
	{
		if(Code[i]==n_code)
		{
			while(i<count)
	        	{
	        		Product_name[i][i]=Product_name[i+1][i+1];
					Code[i]=Code[i+1];
			        Price[i]=Price[i+1];
			        qty[i]=qty[i+1];
	        		i++;
				}
				j++;
				ch++;
		}
    }
	if(ch==0)
	    {
	    	printf("\nNot found!");
		}
	if(j!=0)
	{
        count--;
	}	    
}
void Shopping_list :: display()
{
	int i=0;
	cout<<"\n"<<setw(8)<<" Code "<<setw(20)<<" Product Name "<<setw(15)<<" Price "<<setw(10)<<" Quantity "<<"\n";
	for(i=0;i<count;i++)
	{
		cout<<"\n"<<setw(8)<<Code[i]<<setw(20)<<Product_name[i]<<setw(15)<<Price[i]<<setw(10)<<qty[i]<<"\n";
	}
	Sum_display();
}

int main()
{
	Shopping_list s;
	int choice,ch;
	do
	{
		cout<<"\n Select from following choices: ";
	    cout<<"\n 1. Add Items.";
		cout<<"\n 2. Sum .";
		cout<<"\n 3. Remove.";
		cout<<"\n 4. Display.";
		cout<<"\n Enter Choice: ";
		cin>>choice;
		switch(choice)
		{
		    case 1:
			    s.Item_List();
				break;
			case 2:
	        	s.Sum_display();
				break;
			case 3:
		    	s.Remove_item();
		    	break;
		    case 4:
		    	s.display();
		    	break;
			default:
			    cout<<"\n WRONG CHOICE.";
	   }cout<<"\n Type 1 to run again and 0 to exit.";
	   cout<<"\n Enter: ";
	   cin>>ch;
	}while(ch!=0);
	return 0;
}
