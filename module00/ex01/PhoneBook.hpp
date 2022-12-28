#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook {
    public:
    PhoneBook();
    ~PhoneBook(void);
    void    new_contact(int i);
    private:
    Contact contact[8];
};

#endif