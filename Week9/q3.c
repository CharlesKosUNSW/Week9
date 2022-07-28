//Charles Kos (z5160675)
//27.07.2022

// STUDENTS IGNORE THIS (it lets Visual Studio run scanf() without an error)
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <math.h>

#define NUM_DIM 2
#define MAX_POINTS 100 

//Typedefs
typedef struct point Point;

struct point {
    double x;
    double y;
};

//Prototypes
double distA(double p[NUM_DIM], double q[NUM_DIM]);
double distS(Point p, Point q);
int readPoints(Point points[], int maxPoints);
void printPoints(Point points[], int numPoints);

//'main'
void q3(void) {

    Point points[MAX_POINTS];
    int numPoints = readPoints(points, MAX_POINTS);
    printPoints(points, numPoints);


}

//Calculates the distance between two points with x and y coords stored in an array for each
double distA(double p[NUM_DIM], double q[NUM_DIM]) {

    // dist = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    return sqrt(pow(p[0] - q[0], 2) + pow(p[1] - q[1], 2));

}

//This time the distances are stored in a struct
double distS(Point p, Point q) {

    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));

}

//Recall that if we have an array of ints called int num[10] and sizeof(int) = 4 bytes
//Then num[0] is at byte 0, num[1] is at byte 4 and so on
//Arrays of structs work the same
//Say that sizeof(Point) = 16 and we have Point points[]
//points[0] is at byte, points[1] is at byte 16 and so on

int readPoints(Point points[], int maxPoints) {

    // How do we ensure that scanf will read in 2 values? write %lf twice
    // How do we give the address of points[i].x to scanf()?
    int i = 0;
    while (i < maxPoints && scanf("%lf %lf", &(points[i].x), &(points[i].y)) == 2) {

        i = i + 1;
    }
    return i;
}

void printPoints(Point points[], int numPoints) {
    int i = 0;
    while (i < numPoints) {
        printf("(%.1lf,%.1lf)", points[i].x, points[i].y);
        i = i + 1;
    }
    printf("\n");

}