#pragma once
class date {
private:
int year;
int month;
int day;

public:
date(int y, int m, int d);
date(); // default constructor
~date(); 
// getters should be here
int get_date_number();
int get_day_of_week();
void print_diagnostics();
bool is_a_leap_year(int year);

};