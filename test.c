#include "stdio.h"
#include "stdlib.h"
#include <string.h>

int mian()
{
     char *data;
     data = getenv("QUERY_STRING");
     puts(data);
     printf("Hello cgi!");

     return 0;
}