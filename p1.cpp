#include<iostream>
using namespace std;
class a
{
    private:
	    int x;
            int y;
 
    public:
	    a()
	    {
	     cout<<"enter x and y values:"<<endl;
             cin>>x;
	     cin>>y;
	    }
    public:
	    void print()
	    {
	        cout<<"x:"<<x<<endl;
		cout<<"y:"<<y<<endl;
	    }
	  friend void swap(a &obj);

};

void swap(a &obj)
{
      int x=obj.x;
      obj.x=obj.y;
      obj.y=x;
}
int main()
{
        a obj;
	cout<<"before swapping:"<<endl;
	obj.print();
	swap(obj);
	cout<<"after swapping:"<<endl;
	obj.print();
}
