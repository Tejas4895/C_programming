#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    fprintf(stdout,"In %s file, at %d line ", __FILE__, __LINE__);
    fprintf(stdout, "\n\n");
return EXIT_SUCCESS;

}
