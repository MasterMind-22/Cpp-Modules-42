#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
    std::string     first_name;
    std::string     last_name;
    std::string     nick_name;
    std::string     phone_number;
    std::string     darkest_secret;
    public:
        void set_f_name(std::string first_name);
        void set_l_name(std::string last_name);
        void set_n_name(std::string nick_name);
        void set_p_num(std::string phone_number);
        void set_d_secret(std::string darkest_secret);
        
        std::string get_f_name();
        std::string get_l_name();
        std::string get_n_name();
        std::string get_p_num();
        std::string get_d_secret();
};

#endif