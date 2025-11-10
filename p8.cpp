#include<iostream>
using namespace std;
class a
{
   private:
         int x;
   public:
	friend istream &operator>>(istream &in, a &ob4); 
   public:
	void print()
        {
	 cout<<x<<endl;
	}
};
          istream &operator>>(istream &in, a &ob4)
	  {
            in>>ob4.x;
	  }	  
int main()
{
       a ob4;
       cout<<"enter data"<<endl;
       cin>>ob4;
       cout<<"display data"<<endl;
       ob4.print();
}	
