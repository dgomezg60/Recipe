#include <iostream>
#include <string>
#include "backend/Domain/UserDTO.h"

int main(){
    User user;
    std::cout<<"Email: \n";
    std::cin>>user.email;
    std::cout<<"Password: \n";
    std::cin>>user.password;
    user.disp();
    return 0;
}