#include "01_grades.hpp"

namespace hyped::workshop {

std::string emptyOrCongratulations(const int score)
{
  if (score == 100) return "Congratulations!";
  return "";
}

std::string scoreToLetterGrade(const int score)
{
  if (score >= 90) return "A1";
  if (score >= 80) return "A2";
  if (score >= 70) return "A3";
  if (score >= 60) return "B";
  if (score >= 50) return "C";
  if (score >= 40) return "D";
  return "F";
}

}  // namespace hyped::workshop
