#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    Employee() : name(""), streetAddress(""), city(""), postalCode("") {}
    Employee(string n, string sa, string c, string pc)
        : name(n), streetAddress(sa), city(c), postalCode(pc) {}
    void setName(string newName) {
        name = newName;
    }
    string getName() const {
        return name;
    }
    void setStreetAddress(string sa) {
        streetAddress = sa;
    }
    string getStreetAddress() const {
        return streetAddress;
    }
    void setCity(string c) {
        city = c;
    }
    string getCity() const {
        return city;
    }
    void setPostalCode(string pc) {
        postalCode = pc;
    }

    string getPostalCode() const {
        return postalCode;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Street Address: " << streetAddress << endl;
        cout << "City: " << city << endl;
        cout << "Postal Code: " << postalCode << endl;
    }
private:
    string name;
    string streetAddress;
    string city;
    string postalCode;
};

int main() {
    Employee emp1("name", "streetAddress", "city", "postalCode");
    emp1.display();
    emp1.setName("Jane Doe");
    emp1.setStreetAddress("New Street 101");
    emp1.setCity("New City");
    emp1.setPostalCode("67890");
    emp1.display();
    return 0;
}
