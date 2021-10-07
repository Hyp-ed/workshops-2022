#include <cmath>

#include <02_temperatures.hpp>
#include <gtest/gtest.h>

namespace hyped::test {

TEST(TemperaturesTest, zeroCelsiusToKelvin)
{
  ASSERT_EQ(273.15, std::round(workshop::celsiusToKelvin(0.0) * 100.0) / 100.0);
}

TEST(TemperaturesTest, celsiusToZeroKelvin)
{
  ASSERT_EQ(0, std::round(workshop::celsiusToKelvin(-273.15) * 100.0) / 100.0);
}

TEST(TemperaturesTest, celsiusToKelvin)
{
  ASSERT_EQ(306.15, std::round(workshop::celsiusToKelvin(33.0) * 100.0) / 100.0);
  ASSERT_EQ(340.15, std::round(workshop::celsiusToKelvin(67) * 100.0) / 100.0);
  ASSERT_EQ(373.25, std::round(workshop::celsiusToKelvin(100.1) * 100.0) / 100.0);
  ASSERT_EQ(501.00, std::round(workshop::celsiusToKelvin(227.85) * 100.0) / 100.0);
}

TEST(TemperaturesTest, zeroCelsiusToFahrenheit)
{
  ASSERT_EQ(32.0, std::round(workshop::celsiusToFahrenheit(0.0) * 100.0) / 100.0);
}

TEST(TemperaturesTest, celsiusToZeroFahrenheit)
{
  ASSERT_EQ(0.0, std::round(workshop::celsiusToFahrenheit(-17.777778) * 100.0) / 100.);
}

TEST(TemperaturesTest, celsiusToFahreheit)
{
  ASSERT_EQ(91.4, std::round(workshop::celsiusToFahrenheit(33.0) * 100.0) / 100.0);
  ASSERT_EQ(152.6, std::round(workshop::celsiusToFahrenheit(67.0) * 100.0) / 100.0);
  ASSERT_EQ(212.18, std::round(workshop::celsiusToFahrenheit(100.1) * 100.0) / 100.0);
  ASSERT_EQ(442.13, std::round(workshop::celsiusToFahrenheit(227.85) * 100.0) / 100.0);
}

}  // namespace hyped::test
