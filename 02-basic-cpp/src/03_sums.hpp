#pragma once

#include <vector>

namespace hyped::workshop {

double sum(const int l, const double *a);

double sum(const std::vector<double> v);

double absoluteSum(const std::vector<double> v);

unsigned countNegatives(const std::vector<double> v);

}  // namespace hyped::workshop
