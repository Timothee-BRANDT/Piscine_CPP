#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    for (int i = 0; i < 8; i++) {
        this->contact[i].init_param();
    }
}

PhoneBook::~PhoneBook(void) {}

void    PhoneBook::new_contact(int i) {
    std::string info;
    std::cout << "Enter a firstname : ";
    std::cin >> info;
    this->contact[i].set_firstname(info);
    std::cout << "Enter a lastname : ";
    std::cin >> info;
    this->contact[i].set_lastname(info);
    std::cout << "Enter a nickname : ";
    std::cin >> info;
    this->contact[i].set_nickname(info);
    std::cout << "Enter a phone number : ";
    std::cin >> info;
    this->contact[i].set_phone(info);
    std::cout << "Enter a dark secret : ";
    std::cin >> info;
    this->contact[i].set_secret(info);
}

void    PhoneBook::search_contact(int j) {
    std::string str;
    for (int i = 1; i < j + 1; i++) {
        this->contact[i - 1].print_contact(i);
    }
    std::cout << '\n';
    std::cout << "Please type the index of the contact -> ";
    std::cin >> str;
    int index = atoi(&str[0]);
    if (index <= 0 || index > j)
        while (index <= 0 || index > j)
        {
            for (int i = 1; i < j + 1; i++) {
                this->contact[i - 1].print_contact(i);
            }
            std::cout << "Please type an index in the range from 0 to " << j << " -> " << std::endl;
            std::cin >> str;
            index = atoi(&str[0]);
        }
    if (!str.compare("1"))
        this->contact[0].print_info();
    if (!str.compare("2"))
        this->contact[1].print_info();
    if (!str.compare("3"))
        this->contact[2].print_info();
    if (!str.compare("4"))
        this->contact[3].print_info();
    if (!str.compare("5"))
        this->contact[4].print_info();
    if (!str.compare("6"))
        this->contact[5].print_info();
    if (!str.compare("7"))
        this->contact[6].print_info();
    if (!str.compare("8"))
        this->contact[7].print_info();

}