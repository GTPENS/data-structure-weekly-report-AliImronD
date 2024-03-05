#include <iostream>
#include <string>
#include <ctime>

//Nama: Ali Imron Dimyati
//NRP: 5223600003

struct date {
  int day, month, year;
};

bool isLeapYear(int year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

date nextDate(date d) {
  int daysInMonth[] = {31, isLeapYear(d.year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  d.day++;
  if (d.day > daysInMonth[d.month - 1]) {
    d.day = 1;
    d.month++;
    if (d.month > 12) {
      d.month = 1;
      d.year++;
    }
  }
  return d;
}

int main() {
  date today = {time(0) % 100, time(0) % 10000 / 100, time(0) % 10000000 / 10000};
  date tomorrow = nextDate(today);

  std::cout << "Today: " << today.day << "/" << today.month << "/" << today.year << std::endl;
  std::cout << "Tomorrow: " << tomorrow.day << "/" << tomorrow.month << "/" << tomorrow.year << std::endl;

  if (today.month == 12 && today.day == 31) {
    std::cout << "Today is the last day of the year!" << std::endl;
  }

  if (today.month == 2 && today.day == 29 && isLeapYear(today.year)) {
    std::cout << "Today is the last day of February in a leap year!" << std::endl;
  }

  return 0;
}
