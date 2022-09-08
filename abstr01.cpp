#include<iostream>

using namespace std;

class a{
	
	public:
		
		virtual void aba()=0;
};

class b : public a{
	
	public:
		
		void aba(){
			cout<<"Hello";
		}
};

main(){
	b obj;
	
	obj.aba();
}
