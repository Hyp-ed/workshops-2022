#include "02_temperatures.hpp"

namespace hyped::workshop {

double celsiusToKelvin(const double celsius)
{
  return celsius + 273.15;
}

double celsiusToFahrenheit(const double celsius)
{
  return celsius * 9 / 5 + 32;
}

}  // namespace hyped::workshop
