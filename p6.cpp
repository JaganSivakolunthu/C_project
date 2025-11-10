#include<iostream>
using namespace std;
class a
{
   private:
	   int x;
   public:
	   a operator--(int b)
	   {
	      a temp;
	      temp.x=x--;
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
       cout<<"enter object 1:"<<endl;
       ob1.setdata();
       cout<<"before post increment, object 1 data :"<<endl;
       ob1.print();
       cout<<"before post increment, object 2 data :"<<endl;
       ob2.print();
       ob2=ob1--;
       cout<<"after post increment, object 1 data :"<<endl;
       ob1.print();
       cout<<"after post increment, object 2 data :"<<endl;
       ob2.print();
       
}
