#include<iostream>
class scanner{
 public:


	 std::string item_name = "chocolate";
	 int price = 5000;


	 
	double total;

	void scan(int itemcode)
	{
		if (itemcode==100) {

			std::cout <<"Item name is:"<<item_name << std::endl;
			std::cout <<"Price is------------------"<<price<< "Kyat" << std::endl;
			static int quantity;
			quantity = 1;

			


				total = quantity*price;

				std::cout << "Total------------------" << total << std::endl;
				int input;
				Start:std::cout << "if you want more just type the amount that you want" << std::endl;
				std::cin >> input;
				quantity = input;
				std::cout << "now you have" << quantity << "chocolate "<<std::endl;
				int amount;
				amount = quantity * price;
				std::cout << "and total is:" << amount << std::endl;
				goto Start;
		}    
		else {
			std::cout << "You Typed wrong";
		}


	}
};

int main()
{

	int code;
    std::cout << "Enter the code:";
	std::cin>> code;

	scanner pieces;


	pieces.scan(code);
	
}
