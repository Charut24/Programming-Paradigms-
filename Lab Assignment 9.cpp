#include<iostream>
using namespace std;

class Polygon
{
	protected:
		float height , width, area;
	public:
		virtual void Set_value() = 0;
		virtual void Area() = 0;
		~Polygon() {};
};

class Triangle : public Polygon
{
	public:
		Triangle()
		{
			height=0;
		    width=0;
		    area=0;
		}
		
		void Set_value()
		{
			cout<<"\n ................Area of triangle ...........\n ";
			cout<<"\n Enter height : ";
			cin>>height;
			cout<<"\n Enter width : ";
			cin>>width;
		}
		void Area(void)
		{
			area = (width*height)/2;
			cout<<"\n Area of Triangle: "<<area;
			cout<<"\n \n ";
		}
		~Triangle() {};
};

class Rectangle : public Polygon
{
	public:
		Rectangle()
		{
			height=0;
		    width=0;
		    area=0;
		}
		void Set_value()
		{
			cout<<"\n ................Area of rectangle ...........\n ";
			cout<<"\n Enter height : ";
			cin>>height;
			cout<<"\n Enter width : ";
			cin>>width;
		}
		void Area(void)
		{
			area = (width*height);
			cout<<"\n Area of Rectangle : "<<area;
			
		}
		~Rectangle() {};
};

main()
{
	Polygon *ptr;
	Triangle T;
	Rectangle R;
	ptr=&T;
	ptr -> Set_value();
	ptr -> Area();
	
	ptr=&R;
	ptr -> Set_value();
	ptr -> Area();
}
