#include<iostream>

using namespace std;

class a{
	
	protected:
	
		virtual void demo()=0;
};

class b : public a{
	
	void demo(){
		cout<<"demo 1"<<endl;
	}
	
};

class c : public b{
	
	public:
		
		void demo(){
			cout<<"demo 2"<<endl;
		}
};

main(){
	
	c obj;
	
	obj.demo();	
}
