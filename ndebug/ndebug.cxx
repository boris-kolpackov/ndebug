#include <cassert> // As included by other headers.

#undef NDEBUG
#include <cassert>

static int x = 1;

bool
f ()
{
  x = 0;
  return true;
}

int
main ()
{
  assert (f ());
  return x;
}
