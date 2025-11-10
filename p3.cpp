#include<iostream>
using namespace std;
class a
{
    private:
	    int x;
    public:
	a operator*(a &obj1)
        {
	    a temp;
	    temp.x=x*obj1.x;
	    return temp;
	}
	a operator/(a &obj1)
        {
	    a temp;
	    temp.x=x/obj1.x;
	    return temp;
	}
    public:
	void setdata()
	{
	   cin>>x;
	}
	void display()
	{
	    cout<<"x value:"<<x<<endl;
	}
};
int main()
{
        a ob1,ob2,ob3,ob4;
	cout<<"enter object 1 value:"<<endl;
	ob1.setdata();
	cout<<"enter object 2 value:"<<endl;
	ob2.setdata();
	cout<<"enter object 4 value:"<<endl;
	ob4.setdata();
	ob3=ob1*ob2/ob4;
	ob3.display();
	
}
