/*
  MIT License

  Copyright (c) 2017 Thibault DUPUIS

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/
#include "celestia.h"

namespace {

// Mathematical constants
constexpr double kPI = 3.14159265358979323846;
constexpr double kEulerNumber = 2.71828182845904523536;

// Physical constants
constexpr double kGravitation = 6.67259e-11;
constexpr double kGravityAcceleration = 9.80665;

constexpr unsigned int kSpeedLight = 299792458;
constexpr unsigned int kStandardAtmosphere = 101325;

// Astronomical constants
constexpr unsigned int kAstronomicalUnit = 149597870;
constexpr double kLightYear = 9.460530e12;

constexpr unsigned int kRadiusSun = 696000;
constexpr double kMassSun = 1.9891e30;

constexpr double kRadiusEarth = 6378.137;
constexpr double kMassEarth = 5.9737e24;

// Spaceflight constants
constexpr double kGravitationalEarth = 3.986004418e14;

}
