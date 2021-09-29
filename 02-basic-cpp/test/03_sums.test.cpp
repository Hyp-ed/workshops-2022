#include <03_sums.hpp>
#include <gtest/gtest.h>

namespace hyped::test {

TEST(SumTest, handlesEmpty)
{
  const std::vector<double> v;
  ASSERT_EQ(0, workshop::sum(0, nullptr));
  ASSERT_EQ(0, workshop::sum(v));
  ASSERT_EQ(0, workshop::absoluteSum(v));
  ASSERT_EQ(0, workshop::countNegatives(v));
}

TEST(SumTest, handlesAllNonNegative)
{
  const double a[5]           = {1, 2, 4, 8, 16};
  const std::vector<double> v = {1, 2, 4, 8, 16};
  ASSERT_EQ(31, workshop::sum(5, a));
  ASSERT_EQ(31, workshop::sum(v));
  ASSERT_EQ(31, workshop::absoluteSum(v));
  ASSERT_EQ(0, workshop::countNegatives(v));
}

TEST(SumTest, handlesAllNegative)
{
  const double a[5]           = {-1, -2, -4, -8, -16};
  const std::vector<double> v = {-1, -2, -4, -8, -16};
  ASSERT_EQ(-31, workshop::sum(5, a));
  ASSERT_EQ(-31, workshop::sum(v));
  ASSERT_EQ(31, workshop::absoluteSum(v));
  ASSERT_EQ(5, workshop::countNegatives(v));
}

TEST(SumTest, handlesMixedSigns)
{
  const double a[5]           = {-1, -2, -4, -8, 16};
  const std::vector<double> v = {-1, -2, -4, -8, 16};
  ASSERT_EQ(1, workshop::sum(5, a));
  ASSERT_EQ(1, workshop::sum(v));
  ASSERT_EQ(31, workshop::absoluteSum(v));
  ASSERT_EQ(4, workshop::countNegatives(v));
}

}  // namespace hyped::test
