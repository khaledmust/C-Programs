#include <stdio.h>
#include <math.h>

int main (void)
{
    FILE *sinetxt;
    sinetxt = fopen("C:\\Users\\Khaled\\Documents\\sineplot.txt", "w"); //Creating and writing a txt file

    int values = 0;
    printf("Please enter the no of values you want: \n");
    scanf("%d", &values);
    double sine[values];
    for (float i = 0; i <= values; i += 0.1)
    {
        printf("The sine for %f is %lf\n", i, sin(i));
        fprintf(sinetxt, "%lf\n", sin(i));
    }

    return 0;
}