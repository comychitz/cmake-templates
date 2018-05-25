#include <iostream>
#include <common/Incrementer.h>

int main(int argc, const char *argv[])
{
  Incrementer i;
  i.inc();
  std::cout << i.val() << " Hello, world!" << std::endl;

  return 0;
}
