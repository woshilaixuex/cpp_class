#include <iostream>
#include <string>

enum class Gender { Male, Female, Unknown };

class Date {
public:
    Date(int year = 2000, int month = 1, int day = 1)
        : year(year), month(month), day(day) {
        std::cout << "Date object created: " << year << "-" << month << "-" << day << std::endl;
    }

    Date(const Date &other)
        : year(other.year), month(other.month), day(other.day) {
        std::cout << "Date object copied" << std::endl;
    }

    ~Date() {
        std::cout << "Date object destroyed: " << year << "-" << month << "-" << day << std::endl;
    }

    inline int getYear() const { return year; }
    inline int getMonth() const { return month; }
    inline int getDay() const { return day; }

    void setDate(int newYear, int newMonth, int newDay) {
        year = newYear;
        month = newMonth;
        day = newDay;
    }

private:
    int year, month, day;
};

class Member {
public:
    Member(const std::string &id = "",const std::string &memberId = "", Gender gender = Gender::Unknown, Date *birthday = new Date())
        : ID(id),memberID(memberId), gender(gender), birthday(birthday) {}
    Member(const Member &other)
        : memberID(other.memberID), gender(other.gender) {
        birthday = new Date(*other.birthday);
        std::cout << "Member copied" << std::endl;
    }
    ~Member() {
        delete birthday; 
    }

    void setMemberID(const std::string &id) { memberID = id; }

    inline std::string getID() const { return this->ID; }
    inline std::string getMemberID() const { return this->memberID; }
    inline std::string getGender() const {
       return (this->gender == Gender::Male ? "Male" :
               gender == Gender::Female ? "Female" : "Unknown"); 
    }
    inline Date getBirthday() const { return *birthday; }

    void displayMemberInfo() const {
        std::cout << "ID: " << this->ID << "\n"
                  << "Member ID: " << this->memberID << "\n"
                  << "Gender: " << this->getGender() << "\n"
                  << "Birthday: " << birthday->getYear() << "-" << birthday->getMonth() << "-" << birthday->getDay() << std::endl;
    }

private:
    std::string ID;
    std::string memberID; 
    Gender gender;
    Date *birthday; 
};

int main() {
    Date *birthDate = new Date(2024, 10, 15);
    
    Member member("1234566","m12345", Gender::Male, birthDate);

    member.displayMemberInfo();
    
    return 0;
}
