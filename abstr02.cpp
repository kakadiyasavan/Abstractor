#include <iostream>

#include <string>

using namespace std;

class parent {

    public:

    virtual void getData (){}

    virtual void putData (){}


};

class child : public parent {

    public :

    int age;
    string name;

    void getData (){

        cout << "Enter child info : \n\n";

        cout << "Enter Child Age : ";
        cin >> age;

        cout << "Enter Child Name : ";
        cin >> name;


    }

    void putData (){

        cout << "\n\nchild info : \n\n";

        cout << "Enter Child Age : " << age<<endl;

        cout << "Enter Child Name : " << name<<endl;


    }

};

main(int argc, char const *argv[])
{
    parent *p;
    child c;

    p = &c;

    

    p->getData();
    p->putData();
}
