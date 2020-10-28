#include <iostream>
#include "date.hpp"
using namespace std;
int main() {
  date d(2000, 7, 10);

  d.print_diagnostics();

  std::cout << "Hello World!\n";
}