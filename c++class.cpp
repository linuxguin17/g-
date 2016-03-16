#include<iostream>
using namespace std;

class prac{
	public:
	         string name;
	         public:
	          void makestring()
	         {
	         	this->name=name;
	         	    }
	         	    public:
	         	     void show()
	         	     {
	         	     	cout<<this->name;
	         	     }
	  };
	  int main()
	  {
	  	prac m;
	  	m.name = "Leslie";
	  	m.show();
	  	if(m.name == m.name)
	  		cout<<"Yes";
	  		else if(m.name!=m.name){
	  			cout<<"No";
	  		}
	  	}