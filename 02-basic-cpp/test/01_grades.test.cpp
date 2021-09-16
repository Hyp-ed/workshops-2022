#include <01_grades.hpp>
#include <gtest/gtest.h>

namespace hyped::test {

TEST(GradesTest, noCongratulationsForEmpty)
{
  for (int i = 0; i < 100; i++) {
    ASSERT_EQ("", workshop::emptyOrCongratulations(i));
  }
}

TEST(GradesTest, congratulationsFor100)
{
  ASSERT_EQ("Congratulations!", workshop::emptyOrCongratulations(100));
}

TEST(GradeTest, letterGrades)
{
  ASSERT_EQ("A1", workshop::scoreToLetterGrade(100));
  ASSERT_EQ("A1", workshop::scoreToLetterGrade(95));
  ASSERT_EQ("A1", workshop::scoreToLetterGrade(90));
  ASSERT_EQ("A2", workshop::scoreToLetterGrade(85));
  ASSERT_EQ("A2", workshop::scoreToLetterGrade(80));
  ASSERT_EQ("A3", workshop::scoreToLetterGrade(75));
  ASSERT_EQ("A3", workshop::scoreToLetterGrade(70));
  ASSERT_EQ("B", workshop::scoreToLetterGrade(65));
  ASSERT_EQ("B", workshop::scoreToLetterGrade(60));
  ASSERT_EQ("C", workshop::scoreToLetterGrade(55));
  ASSERT_EQ("C", workshop::scoreToLetterGrade(50));
  ASSERT_EQ("D", workshop::scoreToLetterGrade(45));
  ASSERT_EQ("D", workshop::scoreToLetterGrade(40));
  ASSERT_EQ("F", workshop::scoreToLetterGrade(35));
  ASSERT_EQ("F", workshop::scoreToLetterGrade(30));
  ASSERT_EQ("F", workshop::scoreToLetterGrade(25));
  ASSERT_EQ("F", workshop::scoreToLetterGrade(20));
  ASSERT_EQ("F", workshop::scoreToLetterGrade(15));
  ASSERT_EQ("F", workshop::scoreToLetterGrade(10));
  ASSERT_EQ("F", workshop::scoreToLetterGrade(5));
  ASSERT_EQ("F", workshop::scoreToLetterGrade(0));
}

}  // namespace hyped::test
