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
	    friend ostream &operator <<(ostream &out,a &ob1);
	    
};

            ostream & operator<<(ostream &out,a &ob1)
	    {
	       out<<"value of x:"<<endl;
	       out<<ob1.x<<endl;
	       return out;
	    }
int main()
{
     a ob1;
     cout<<"enter data:"<<endl;
     ob1.setdata();
     cout<<ob1;

 
}
