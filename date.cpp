#include "date.hpp"
#include <iostream>
using namespace std;

date::date(int y, int m, int d) {
year = y;
month= m;
day = d;
}

bool is_a_leap_year(int y){
  if (y % 4 == 0)
  return true;
}

date::date () {

}

date::~date () {

}

int date::get_date_number() {
return 0;

}

int date:: get_day_of_week() {
return 0;

}

void date::print_diagnostics() {
  cout << "Values:  Year: " << year << "Month " << month << "day " << day <<"." << endl;

}