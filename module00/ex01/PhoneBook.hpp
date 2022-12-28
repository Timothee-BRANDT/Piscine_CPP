#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook {
    public:
    PhoneBook();
    ~PhoneBook(void);
    void    new_contact(int i);
    void    search_contact(int j);
    private:
    Contact contact[8];
};

#endif