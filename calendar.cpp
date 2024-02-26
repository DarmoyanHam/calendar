#include <iostream>
#include <string>

enum week {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

struct Date {
    int day;
    int month;
    week day_of_week;
    int year;
};

void print(Date date)
{
    std::string names[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    std::cout << names[date.day_of_week - 1] << std::endl;
    std::cout << date.day << "." << date.month << "." << date.year << std::endl;
}

int main()
{
    Date date{7, 11, Monday, 2023};
    print(date);

    return 0;
}