#include<iostream>
using namespace std;
class a
{
    private:
	    int x;
    public:
	    a operator--()
	    {
	      a temp;
	      temp.x=--x;
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
       a ob1,ob2;
       cout<<"enter object1 data"<<endl;
       ob1.setdata();
       cout<<"before preincrement,object 1 and object 2 data"<<endl;
       ob1.print();
       ob2.print();
       ob2=--ob1;
       cout<<"after preincrement, object1 and object 2 data"<<endl;
       ob1.print();
       ob2.print();
}
