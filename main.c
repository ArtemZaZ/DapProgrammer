#include "target.h"

int main()
{
  cpu_setup();
  clock_setup();
  gpio_setup();
  while(1);
}
