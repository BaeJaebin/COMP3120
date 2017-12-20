#include <stdio.h>
#define FNAME "Demo.txt"

int main()
{
FILE *fp = 0;


fopen(FNAME,"w");
if(fp)
{






printf("fileopen\n");
fclose(fp);
}
else
{




printf("filenotopen");
}
return 0;
}
