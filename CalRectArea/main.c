#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[]) {
    // Create Variables for data
    double    height =  atof(argv[1]);
    double     width =  atof(argv[2]);
    double      area;
    double perimeter;
    // Calculation for area and perimeter
    area      = width * height;
    perimeter = 2.0 * (height + width);

    // Displaying area and perimeters to console
    printf("[!] Width : %f - Height : %f - Args Count : %d\n[R] Area Is %f \n[R] Perimeter is %f",width,height,argc,area,perimeter);

    return 0;
}
