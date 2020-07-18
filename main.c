//More messing around with strings
// Easiest way to just initialize a string is by using pointers.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 30

char *p_name;
char *p_name2;

char name2[MAX];

int main(void)
{
    FILE *fp;
    fp = fopen("kamfile5.txt","w");
    if(fp!=NULL)
    {
        fputs("\n\n",fp);
        fputs("fopen OK\n\n",fp);
    }
    else
    {
        fprintf(stderr,"Error opening file %s",fp);
        exit(1);
    }

    //set pointer1 to point to following literal string
    p_name = "Karen Mathes is great at C!";
    printf("\nThis is test1: \n");
    printf("%s\n\n",p_name);
    fprintf(fp,"\nThis is test1: \n");
    fprintf(fp,"%s\n\n",p_name);

    //set pointer2 to point to start of character array named name2
    //p_name2 = &name2[0];	  // OR use following statement since an array name without
    //   brackets [], equals the address of the first element
    //   of the said array
    p_name2 = name2;
    strcpy(name2,"Tom Mathes wants to kill Chase");
    // or use the following instead of strcpy
    //p_name2 = "tom mathes wants to kill Chase";
    printf("\nThis is test2: \n");
    printf("%s\n\n",p_name2);
    fprintf(fp,"\nThis is test2: \n");
    fprintf(fp,"%s\n\n",p_name2);


    return 0;
}
