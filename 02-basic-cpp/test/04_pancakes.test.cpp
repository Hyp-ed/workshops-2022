#include <string>

#include <04_pancakes.hpp>
#include <gtest/gtest.h>

namespace hyped::test {

TEST(PancakeTest, mostOfSingleElement)
{
  const workshop::PancakesEatenBy p{"Meina", 5};
  const std::vector<workshop::PancakesEatenBy> v = {p};
  const auto q                                   = workshop::mostPancakesEaten(v);
  ASSERT_EQ(p.name, q.name);
  ASSERT_EQ(p.num_pancakes_eaten, q.num_pancakes_eaten);
}

TEST(PancakeTest, mostOfTenElements)
{
  std::vector<workshop::PancakesEatenBy> v;
  for (int i = 0; i < 10; i++) {
    v.push_back({std::to_string(i), i});
  }
  const auto p = workshop::mostPancakesEaten(v);
  ASSERT_EQ(p.num_pancakes_eaten, 9);
  ASSERT_EQ(p.name, std::to_string(9));
}

TEST(PancakeTest, moreThanNNoInput)
{
  const std::vector<workshop::PancakesEatenBy> v;
  const auto u = workshop::moreThanNPancakesEaten(v, 0);
  ASSERT_TRUE(u.empty());
}

TEST(PancakeTest, moreThanNNoOutput)
{
  const std::vector<workshop::PancakesEatenBy> v = {{"Tim", 0}, {"Tom", 0}, {"Alex", 1}};
  const auto u                                   = workshop::moreThanNPancakesEaten(v, 1);
  ASSERT_TRUE(u.empty());
}

TEST(PancakeTest, moreThanNAll)
{
  const std::vector<workshop::PancakesEatenBy> v = {{"Tim", 1}, {"Tom", 1}, {"Alex", 1}};
  const auto u                                   = workshop::moreThanNPancakesEaten(v, 0);
  ASSERT_EQ(u.size(), v.size());
}

TEST(PancakeTest, moreThanNSomeOutput)
{
  const std::vector<workshop::PancakesEatenBy> v = {{"Tim", 0}, {"Tom", 0}, {"Alex", 1}};
  const auto u                                   = workshop::moreThanNPancakesEaten(v, 0);
  ASSERT_EQ(u.size(), 1);
  const auto p = u.at(0);
  ASSERT_EQ(p.name, "Alex");
  ASSERT_EQ(p.num_pancakes_eaten, 1);
}

TEST(PancakeTest, nMost)
{
  std::vector<workshop::PancakesEatenBy> v;
  for (int i = 0; i < 100; ++i) {
    v.push_back({std::to_string(i), i});
  }
  const auto u = workshop::nMostPancakesEaten(v, 10);
  for (int i = 90; i < 100; ++i) {
    bool found = false;
    for (const auto &x : u) {
      if ((x.name == std::to_string(i)) && (x.num_pancakes_eaten == i)) {
        found = true;
        break;
      }
    }
    ASSERT_TRUE(found);
  }
}

}  // namespace hyped::test
