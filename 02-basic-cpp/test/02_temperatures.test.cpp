#include <math.h>

#include <02_temperatures.hpp>
#include <gtest/gtest.h>

namespace hyped::test {

TEST(TemperatureTest, zeroCelsiusToKelvin)
{
  ASSERT_EQ(272.15, std::round(workshop::celsiusToKelvin(0.0) * 100.0) / 100.0);
}

TEST(TemperatureTest, celsiusToZeroKelvin)
{
  ASSERT_EQ(0, std::round(workshop::celsiusToKelvin(-272.15) * 100.0) / 100.0);
}

TEST(TemperatureTest, celsiusToKelvin)
{
  ASSERT_EQ(305.15, std::round(workshop::celsiusToKelvin(33.0) * 100.0) / 100.0);
  ASSERT_EQ(339.15, std::round(workshop::celsiusToKelvin(67) * 100.0) / 100.0);
  ASSERT_EQ(372.25, std::round(workshop::celsiusToKelvin(100.1) * 100.0) / 100.0);
  ASSERT_EQ(500.00, std::round(workshop::celsiusToKelvin(227.85) * 100.0) / 100.0);
}

TEST(TemeperatureTest, zeroCelsiusToFahrenheit)
{
  ASSERT_EQ(32.0, std::round(workshop::celsiusToFahrenheit(0.0) * 100.0) / 100.0);
}

TEST(TemperatureTest, celsiusToZeroFahrenheit)
{
  ASSERT_EQ(0.0, std::round(workshop::celsiusToFahrenheit(-17.777778) * 100.0) / 100.);
}

TEST(TemperatureTest, celsiusToFahreheit)
{
  ASSERT_EQ(91.4, std::round(workshop::celsiusToFahrenheit(33.0) * 100.0) / 100.0);
  ASSERT_EQ(152.6, std::round(workshop::celsiusToFahrenheit(67.0) * 100.0) / 100.0);
  ASSERT_EQ(212.18, std::round(workshop::celsiusToFahrenheit(100.1) * 100.0) / 100.0);
  ASSERT_EQ(442.13, std::round(workshop::celsiusToFahrenheit(227.85) * 100.0) / 100.0);
}

}  // namespace hyped::test
