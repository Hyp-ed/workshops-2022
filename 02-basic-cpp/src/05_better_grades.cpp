#include "05_better_grades.hpp"

namespace hyped::workshop {

Grade scoreToGrade(const int score)
{
  if (score >= 90) return kA1;
  if (score >= 80) return kA2;
  if (score >= 70) return kA3;
  if (score >= 60) return kB;
  if (score >= 50) return kC;
  if (score >= 40) return kD;
  return kF;
}

Grade stringToGrade(const std::string str)
{
  if (str == "A1") return kA1;
  if (str == "A2") return kA2;
  if (str == "A3") return kA3;
  if (str == "B") return kB;
  if (str == "C") return kC;
  if (str == "D") return kD;
  if (str == "F") return kF;
  return kInvalid;
}

std::string gradeToString(const Grade grade)
{
  switch (grade) {
    case kA1:
      return "A1";
    case kA2:
      return "A2";
    case kA3:
      return "A3";
    case kB:
      return "B";
    case kC:
      return "C";
    case kD:
      return "D";
    case kF:
      return "F";
    default:
      return "";
  }
}

}  // namespace hyped::workshop
