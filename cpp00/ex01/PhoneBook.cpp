#include "PhoneBook.hpp"

void PhoneBook::add_contact()
{
    
}



int main(int ac, char **av)
{
    std::string cmd;

    std::cout << "Enter one of the following commands:\n";
    std::cout << "1 - ADD\n2 - SEARCH\n3 - EXIT" << std::endl;
    while (getline(std::cin, cmd))
    {
        if (!cmd.compare("ADD"))
        {
            std::cout << "ADD\n";
        }
        if (!cmd.compare("SEARCH"))
        {
            std::cout << "SEARCH\n";
        }
        if (!cmd.compare("EXIT"))
        {
            std::cout << "EXIT\n";
        }
    }
}