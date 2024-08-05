#include <iostream>
#include "AddressBook.h"

int main() {
    AddressBook addressBook;

    addressBook.addPerson(std::make_shared<Student>("Ivan Ivanov", "+123456789", "Computer Science"));
    addressBook.addPerson(std::make_shared<Teacher>("Petr Petrov", "+987654321", "Mathematics"));
    addressBook.addPerson(std::make_shared<Colleague>("Anna Sidorova", "+111223344", "Software Engineer"));

    std::cout << "Address Book:" << std::endl;
    addressBook.printAll();

    addressBook.saveToFile("address_book.txt");

    AddressBook loadedAddressBook;
    loadedAddressBook.loadFromFile("address_book.txt");

    std::cout << "\nLoaded Address Book:" << std::endl;
    loadedAddressBook.printAll();

    return 0;
}
