#include<iostream>
using namespace std;
class a
{
  private:
	  int x;
  public:
	  void setdata()
          {
            cin>>x;
	  }
	  void print()
          {
            cout<<x<<endl;
	  }
  public:
	  friend a operator--(a &ob1,int);
};

a operator--(a &ob1,int b)
{
     a temp;
     temp.x=ob1.x--;
     return temp;
}
int main()
{
      a ob1,ob2;
      cout<<"enter object 1 data :"<<endl;
      ob1.setdata();
      cout<<"before post increment,object 1 data :"<<endl;
      ob1.print();
      cout<<"before post increment,object 2 data :"<<endl;
      ob2.print();
      ob2=ob1--;
      cout<<"after post increment, object 1 data :"<<endl;
      ob1.print();
      cout<<"after post increment, object 2 data :"<<endl;
      ob2.print();
}
