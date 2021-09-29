#include <array>
#include <string>

#include <05_better_grades.hpp>
#include <gtest/gtest.h>

namespace hyped::test {

TEST(BetterGradesTest, basicCases)
{
  ASSERT_EQ(workshop::stringToGrade("A1"), workshop::scoreToGrade(100));
  ASSERT_EQ(workshop::stringToGrade("A1"), workshop::scoreToGrade(95));
  ASSERT_EQ(workshop::stringToGrade("A1"), workshop::scoreToGrade(90));
  ASSERT_EQ(workshop::stringToGrade("A2"), workshop::scoreToGrade(85));
  ASSERT_EQ(workshop::stringToGrade("A2"), workshop::scoreToGrade(80));
  ASSERT_EQ(workshop::stringToGrade("A3"), workshop::scoreToGrade(75));
  ASSERT_EQ(workshop::stringToGrade("A3"), workshop::scoreToGrade(70));
  ASSERT_EQ(workshop::stringToGrade("B"), workshop::scoreToGrade(65));
  ASSERT_EQ(workshop::stringToGrade("B"), workshop::scoreToGrade(60));
  ASSERT_EQ(workshop::stringToGrade("C"), workshop::scoreToGrade(55));
  ASSERT_EQ(workshop::stringToGrade("C"), workshop::scoreToGrade(50));
  ASSERT_EQ(workshop::stringToGrade("D"), workshop::scoreToGrade(45));
  ASSERT_EQ(workshop::stringToGrade("D"), workshop::scoreToGrade(40));
  ASSERT_EQ(workshop::stringToGrade("F"), workshop::scoreToGrade(35));
  ASSERT_EQ(workshop::stringToGrade("F"), workshop::scoreToGrade(30));
  ASSERT_EQ(workshop::stringToGrade("F"), workshop::scoreToGrade(25));
  ASSERT_EQ(workshop::stringToGrade("F"), workshop::scoreToGrade(20));
  ASSERT_EQ(workshop::stringToGrade("F"), workshop::scoreToGrade(15));
  ASSERT_EQ(workshop::stringToGrade("F"), workshop::scoreToGrade(10));
  ASSERT_EQ(workshop::stringToGrade("F"), workshop::scoreToGrade(5));
  ASSERT_EQ(workshop::stringToGrade("F"), workshop::scoreToGrade(0));
}

TEST(BetterGradesTest, conversion)
{
  const std::array<std::string, 8> all_grade_strings = {"A1", "A2", "A3", "B", "C", "D", "F", ""};

  for (const auto &x : all_grade_strings) {
    for (const auto &y : all_grade_strings) {
      if (x != y) { ASSERT_NE(workshop::stringToGrade(x), workshop::stringToGrade(y)); }
    }
  }
}

}  // namespace hyped::test
