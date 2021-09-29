#pragma once

#include <string>

namespace hyped::workshop {

enum Grade { kInvalid = -1 };

Grade scoreToGrade(const int score);

Grade stringToGrade(const std::string str);

std::string gradeToString(const Grade grade);

}  // namespace hyped::workshop
