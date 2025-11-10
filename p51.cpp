#include<iostream>
using namespace std;
class a
{
   private:
	 int x;
   public:
	 friend a operator--(a &ob);
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
a operator--(a &ob)
{
   a temp;
   temp.x=--ob.x;
   return temp;
}
int main()
{
   a ob1,ob2;
   cout<<"enter object 1 data"<<endl;
   ob1.setdata();
   cout<<"before preincrement,object 1 and object 2 data"<<endl;
   ob1.print();
   ob2.print();
   ob2=--ob1;
   cout<<"after preincrement,object 1 and object 2 data"<<endl;
   ob1.print();
   ob2.print();
}
