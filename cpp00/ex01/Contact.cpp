#include "Contact.hpp"

void Contact::set_f_name(std::string first_name)
{
    this->first_name = first_name;
}

void Contact::set_l_name(std::string last_name)
{
    this->last_name = last_name;
}

void Contact::set_n_name(std::string nick_name)
{
    this->nick_name = nick_name;
}

void Contact::set_p_num(std::string phone_number)
{
    this->phone_number = phone_number;
}

void Contact::set_d_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}


std::string Contact::get_f_name()
{
    return (first_name);
}

std::string Contact::get_l_name()
{
    return (last_name);
}

std::string Contact::get_n_name()
{
    return (nick_name);
}

std::string Contact::get_p_num()
{
    return (phone_number);
}

std::string Contact::get_d_secret()
{
    return (darkest_secret);
}

