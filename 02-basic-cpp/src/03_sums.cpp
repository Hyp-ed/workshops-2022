#include "03_sums.hpp"

#include <cmath>

namespace hyped::workshop {

double sum(const int l, const double *a)
{
  double sum = 0;
  for (int i = 0; i < l; ++i)
    sum += a[i];
  return sum;
}

double sum(const std::vector<double> v)
{
  double sum = 0;
  for (const double &i : v)
    sum += i;
  return sum;
}

double absoluteSum(const std::vector<double> v)
{
  double sum = 0;
  for (const double &i : v)
    sum += abs(i);
  return sum;
}

unsigned countNegatives(const std::vector<double> v)
{
  unsigned count = 0;
  for (const double &i : v)
    count += i < 0;
  return count;
}

}  // namespace hyped::workshop
