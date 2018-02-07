#include <cstdio>
#include <stdexcept>

extern double square_root(double);

int main()
{
  try { square_root(-1); }
  catch (const std::exception& e)
  {
    printf("Caught an exception\n");
  }
}
