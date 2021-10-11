#pragma once

#include <string>

namespace hyped::workshop {

enum Grade { kInvalid, kA1, kA2, kA3, kB, kC, kD, kF };

Grade scoreToGrade(const int score);

Grade stringToGrade(const std::string str);

std::string gradeToString(const Grade grade);

}  // namespace hyped::workshop
