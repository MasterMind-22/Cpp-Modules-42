#include "PhoneBook.hpp"

std::string get_data(std::string message, char c)
{
    std::string data;

    std::cout << message;
    getline(std::cin, data);
    if (!data.length())
        {
            std::cout << "Invalid Characters! Try Again." << std::endl;
            get_data(message, c);
        }
    else if (c == 'A')
    {
        for (size_t j = 0; j < data.length(); j++)
        {
            if (!((data[j] >= 'a' && data[j] <= 'z')
                || (data[j] >= 'A' && data[j] <= 'Z')))
                {
                    std::cout << "Invalid Characters! Try Again." << std::endl;
                    get_data(message, c);
                }
        }
        return (data);
    }
    else if (c == '0')
    {
        for (size_t j = 0; j < data.length(); j++)
        {
            if (!isnumber(data[j]))
            {
                std::cout << data;
                std::cout << "Invalid Characters! Try Again.1" << std::endl;
                get_data(message, c);
            }
        }
        return (data);
    }
    else if (c == '+')
        return (data);
    return (data);
}

void PhoneBook::add_contact()
{
    std::string data;
    Contact     contact;
    int         i;

    i = 0;
    data = get_data("First Name: ", 'A');
    contact.set_f_name(data);
    data = get_data("Last Name: ", 'A');
    contact.set_l_name(data);
    data = get_data("NickName: ", '+');
    contact.set_n_name(data);
    data = get_data("Phone Number: ", '0');
    contact.set_p_num(data);
    data = get_data("Darkest Secret: ", '+');
    contact.set_d_secret(data);

    std::cout << "\n\n------------------------------------------\n";
    std::cout << "firstname: " << contact.get_f_name() << std::endl;
    std::cout << "lastname: " << contact.get_l_name() << std::endl;
    std::cout << "nickname: " << contact.get_n_name() << std::endl;
    std::cout << "Phone Number: " << contact.get_p_num() << std::endl;
    std::cout << "Darkest Secret: " << contact.get_d_secret() << std::endl;
    
}



int main(void)
{
    std::string cmd;
    PhoneBook   PB;

    std::cout << "Enter one of the following commands:\n";
    std::cout << "1 - ADD\n2 - SEARCH\n3 - EXIT\n" << std::endl;
    while (getline(std::cin, cmd))
    {
        if (!cmd.compare("ADD"))
        {
            PB.add_contact();
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