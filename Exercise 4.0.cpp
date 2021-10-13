#include<iostream>
using namespace std;

class Animal {
protected:
	int age;  string name;
	int age2; string name2;
public:

	Animal(int a, string ch) {
		age = a;
		name = ch;
	}
	Animal(int a2, string ch2) {
		age2 = a2;
		name2 = ch2;
	}
};

class Cat : public Animal {
public:
	void CatDetail()
	{
		cout << "The name of the cat is : " << name;
		cout << " and her age is : " << age;
	}
	Cat();
	};

	class Dog : public Animal {
	public:
		void DogDetail()
		{
			cout << "The name of the dog is : " << name2;
			cout << " and her age is : " << age2;
		}
		Dog();
		};

		int main() {
			int x = 10;
			string y = "Puppy";
			Animal a(x,y);
			Cat c;
			c.CatDetail();
			Dog d;
			d.DogDetail();
		}