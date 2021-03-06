#pragma once
#include <algorithm>

namespace hyped::workshop {

struct Person {
  std::string name;
  unsigned age;
};

void sortByAge(std::vector<Person> &persons);

}  // namespace hyped::workshop
