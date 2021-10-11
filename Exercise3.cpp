#include <iostream>
using namespace std;


class Mother {
public:

	string name;
     int  age;
	void Name() {
		name = "Daw Aye";
		age = 40;
		Daughter d;

		cout << "Daughter name is:" << d.d_name << std::endl;
		cout << "Daughter age is:" << d.d_age << std::endl;
	}
};

class Daughter: public Mother {
public:
string d_name; 

	int d_age;
	    void Name() {
     d_name = "AyeMya";
	 d_age = 20;

	}
};

int main()
{
	Mother* M = new Mother;
	M->Name();
	cout << "Mother name is:" << M->name << std::endl;
cout << "Mother age is:"<<M->age;
}
