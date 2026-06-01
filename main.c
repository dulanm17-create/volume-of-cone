#include <stdio.h>
#include <math.h>

int main()
{
    float volume,radius,height;

    printf("calculate the volume of a cone\n");
    printf("-------------------------------\n");

    printf("Enter radius of cone:");
    scanf("%f",&radius);
    printf("Enter height of cone:");
    scanf("%f",&height);

    volume= M_PI*radius*radius*height/3;

    printf("Volume:%.2f",volume);



    return 0;
}
