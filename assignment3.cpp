#include<iostream>
using namespace std;
class shape
{
public:
    double l,h,area;
	virtual void get_data()
    {
    	cout<<"Enter 2 values : ";
    	cin>>l>>h;
    	cout<<"\n";
    }
    virtual void display_area()
    {
    	cout<<"Area is : "<<l+h<<"\n";
    }

};
class triangle : public shape
{
public:
   void display_area()
   {
   area=0.5*l*h;
   cout<<"Area is : "<<area<<"\n";
   }
};
class rectangle : public shape
{
public:
    void display_area()
    {
    area=l*h;
    cout<<"Area is: "<<area<<"\n";
    }
};

class square : public shape
{
public:
	void get_data()
	{
		cout<<"Enter length : ";
		cin >> l;
	}

	void display_area()
	{
		area = l * l;
		cout<<"Area is : "<<area<<"\n";
	}

};
int main()
{
   triangle t;
   rectangle r;
	shape *ptr=NULL;
	square s;

   int sw=0;
   while(sw!=4)
   {	
   	cout<<"Select\n1. Area of Triangle\n2. Area of Rectangle\n3. Area of Square \n4. Exit\n";
   		cin>>sw;
   		switch(sw)
   		{
  			case 1:
			ptr = &t;
  			ptr->get_data();
  			ptr->display_area();
  			break;

  			case 2:
			ptr = &r;
  			ptr->get_data();
  			ptr->display_area();
  			break;

  			case 3:
			ptr = &s;
			ptr->get_data();
			ptr->display_area();
			break;
			case 4:

  			cout<<"Exit...\n";
  			break;
  			default:
  			cout<<"Invalid selection\n";
  			break;
   		}
   }
    return 0;
}
