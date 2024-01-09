#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook{
    Contact Phone_Book[8];

    public :
        void add_contact();
        void search_contact();
        void exit();
};

#endif