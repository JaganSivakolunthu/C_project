#include<iostream>
using namespace std;
class a
{
    private:
	    int x;
    public:
	a operator+(a &ob)
        {
          a temp;
	  temp.x=x+ob.x;
	  return temp;
	}
	a operator*(a &ob)
        {
           a temp;
	   temp.x=x*ob.x;
	   return temp;
	}
    public:
	void setdata()
        {
          cin>>x;
	}
	void print()
	{
           cout<<x<<endl;
	}
};
int main()
{
       a ob1,ob2,ob3,ob4;
       cout<<"enter object 1 data:"<<endl;
       ob1.setdata();
       cout<<"enter object 2 data:"<<endl;
       ob2.setdata();
       cout<<"enter object 4 data:"<<endl;
       ob4.setdata();
       ob3=(ob1+ob2)*ob4;
       cout<<"object 3 value:"<<endl;
       ob3.print();

}
