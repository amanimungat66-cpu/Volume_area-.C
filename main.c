//C program for calculation
/*
 Name: Amani Munga Tunje
 Reg:CT200/G/26225/25
 Discription:To calculate volume &surface area
 */

#include <stdio.h>
#include <math.h>//For evaluation of math

int main() {
    //variable duclaration
    const float pi= 3.14159;
    double height;
    double radius;
    double volume;
    double surfacearea;
    
    //prompt user to enter height
    printf("\nThe cylinder height");
    scanf("%lf",&height);
    
    //prompt user to enter radius
    printf("\nThe cylinder radius");
    scanf("%lf",&radius);
    
    //mathematical expresion
    volume=(pi*radius*radius*height);
    
    surfacearea=( 2*pi*radius*radius+2*pi*radius*height);
    
    //Output to be display
    printf("\nvolume:%lf",volume);
    printf("\nsurfacearea:%lf",surfacearea);
    return 0;
}