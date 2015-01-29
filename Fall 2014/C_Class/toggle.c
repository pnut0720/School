#include <stdio.h>
main()
{
 int light_switch = 0;
 light_switch = !light_switch;
 printf("%d\n", light_switch);
 light_switch = !light_switch;
 printf("%d\n", light_switch);
 light_switch = (light_switch + 1) & 1;
 printf("%d\n", light_switch);
 light_switch = (light_switch + 1) & 1;
 printf("%d\n", light_switch);
}
