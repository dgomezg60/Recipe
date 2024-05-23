#include <string>
#include <iostream>

class User
{
public:
    std::string email;
    std::string password;
    
    void disp(){
        std::cout<< email<<std::endl;
        std::cout<< password<<std::endl;
    }
};