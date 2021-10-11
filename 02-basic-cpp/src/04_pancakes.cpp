#include "04_pancakes.hpp"

#include <algorithm>

namespace hyped::workshop {

static bool less(const PancakesEatenBy &a, const PancakesEatenBy &b)
{
  return a.num_pancakes_eaten < b.num_pancakes_eaten;
}

PancakesEatenBy mostPancakesEaten(const std::vector<PancakesEatenBy> all_pancakes_eaten)
{
  return *max_element(all_pancakes_eaten.begin(), all_pancakes_eaten.end(), less);
}

std::vector<PancakesEatenBy> moreThanNPancakesEaten(
  const std::vector<PancakesEatenBy> all_pancakes_eaten, const int n)
{
  std::vector<PancakesEatenBy> result;
  std::copy_if(all_pancakes_eaten.begin(), all_pancakes_eaten.end(), std::back_inserter(result),
               [&n](const PancakesEatenBy &item) { return item.num_pancakes_eaten > n; });
  return result;
}

std::vector<PancakesEatenBy> nMostPancakesEaten(
  const std::vector<PancakesEatenBy> all_pancakes_eaten, const int n)
{
  std::vector<PancakesEatenBy> result(all_pancakes_eaten.begin(), all_pancakes_eaten.end());
  std::nth_element(result.begin(), result.begin() + n, result.end(),
                   [](const PancakesEatenBy &a, const PancakesEatenBy &b) { return !less(a, b); });
  return std::vector(result.begin(), result.begin() + n);
}

}  // namespace hyped::workshop
