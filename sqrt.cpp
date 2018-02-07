#include <cmath>
#include <stdexcept>

double square_root(double x) {
  if (x < 0.0) {
    throw std::runtime_error("square root of anegative number is not real.");
  }
  return std::sqrt(x);
}
