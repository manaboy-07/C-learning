#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[10];
    char celeb[15];
    char noun[12];
    //get the color from the user
    printf("Enter a color: ");
    fgets(color,10,stdin);
    //get the celeb
    printf("Enter a celebrity: ");
    fgets(celeb,15,stdin);
    //get the noun
    printf("Enter a noun: ");
    fgets(noun,12,stdin);

    //final output
    printf("Roses are %s ", color);
    printf("%s  are blue ", noun);
    printf("I love %s and so do you too",celeb);


    return 0;
}
