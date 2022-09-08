#include<iostream>

using namespace std;

class mathematical{
	
	public:
		
		virtual void calculate()=0;
};

class pop : public mathematical{
	
	public:
		int a;
		
		void calculate(){
			
			cout<<"Area of a Circle :"<<endl;
			a = 3.14*10*2;
			cout<<"Circle : "<<a<<endl<<endl;
			
			cout<<"Area of a Trianglr :"<<endl;
			a = 14*10/2;
			cout<<"Trianglr : "<<a<<endl<<endl;
			
			cout<<"Area of a Rectangle :"<<endl;
			a = 14*10;
			cout<<"Rectangle : "<<a<<endl<<endl;
		}
		
};

main(){
	
	pop obj;
	
	obj.calculate();
}
