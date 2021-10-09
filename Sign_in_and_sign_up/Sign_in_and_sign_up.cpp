#include<iostream>

class variable {
private:
    char* saved_password= new char[NULL];

    std::string password;

    std::string name;



public:
    int log;
    
    void sign_in();
    void sign_up();
    void loading();
    void Welcome();
};
void variable::Welcome() {
REPEAT: std::cout << "Enter your name" <<std::endl;
    std::cin >> name;
    std::cout << name << "!"<<std::endl;
    std::cout << "Type 1 to login or type 2 to Signup:"<<std::endl;
    std::cin >> log;
    if (log == 1) {
        sign_in();
    }
    if (log == 2) {
        sign_up();
    }
    else {
        std::cout << "You typed wrong "<<std::endl;
        goto REPEAT;
    
    }

}
void variable::sign_in() {
    std::cout << "Enter your password sir:" << std::endl;;
    std::cin >> password; 
    if (password == saved_password) {
        system("cls");
        std::cout << "WELCOME TO HOME SIR";
    }
    else {
        system("cls");
        std::cout << "Wrong Password, Signup and come back later"<<std::endl;
        std::cout << std::endl;
        std::cout << "              Sign up                   " << std::endl;
        sign_up();

    }
}
void variable::sign_up() {
 std::cout << "Enter your new password" << std::endl;
    std::cin >> saved_password;
        std::cout << "your password are being saved"<<std::endl;
        std::cout << std::endl;
        std::cout<<"              Sign in                    " << std::endl;
        sign_in();
      
    }
        void variable::loading() {
            int i = 0;
            while (i != EOF) {
                std::cin.get();
            }
        }
        



int main() {
    variable v;

   
  v.Welcome();
  v.loading();
}

 


