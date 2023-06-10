//Duranne B. Duran
//Lecture 13 Assignment

#include <stdio.h>
#include <math.h>

struct line{
    struct point{
        float x;
        float y;
    }point1, point2;
    float slope;
    float midX;
    float midY;
    float distance;
};

//slope function
float solveSlope(struct line line1){
    //formula for slope
    float slope = (line1.point1.y - line1.point2.y)/(line1.point1.x - line1.point2.x);
    return slope;
}

//x of midpoint 
float solveMidpointX(struct line line1){
    //formula
    float midX = (line1.point1.x + line1.point2.x) / 2;
    return midX;
}

//y of midpoint
float solveMidpointY(struct line line1){
    //formula
    float midY = (line1.point1.y + line1.point2.y) / 2;
    return midY;
}

//distance
float solveDistance(struct line line1){
    //getting the difference and squares first
    float a = (line1.point1.x - line1.point2.x) * (line1.point1.x - line1.point2.x);
    float b = (line1.point1.y - line1.point2.y) * (line1.point1.y - line1.point2.y);
    //taking the square root of the sum of the squares
    float dist = sqrt(a+b);
    return dist;
}

//y=mx+b
void getSlopeInterceptForm(struct line line1) {
    //assigning the slope value
    float slope = line1.slope;
    //getting b or the intercept
    float intercept = line1.point1.y - slope * line1.point1.x;
    printf("\ny = %fx + (%f)\n", slope, intercept);
}

int main(){
    struct line line;
    //get points for line 1
    printf("Enter x and y for line1: ");
    scanf("%f %f", &line.point1.x, &line.point1.y);
    //get points for line 2
    printf("Enter x and y for line2: ");
    scanf("%f %f", &line.point2.x, &line.point2.y);

    //call slope function
    line.slope = solveSlope(line);
    printf("Slope: %f", line.slope); //print slope

    //call midpoint functions
    line.midX = solveMidpointX(line);
    line.midY = solveMidpointY(line);
    printf("\nMidpoint: (%f, %f)", line.midX, line.midY); //print midpoint

    //call distance function
    line.distance = solveDistance(line);
    printf("\nDistance between 2 points: %f", line.distance); //print distance

    //call slope-int form function
    getSlopeInterceptForm(line);
    return 0;

}