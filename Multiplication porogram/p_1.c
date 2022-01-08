// a program to calculate  distance for given speed and time
#include <stdio.h>
int main()
{
    int distance, time, speed;
    printf("Enter the value of speed and time");
    scanf("%d%d",&speed,&time);
    distance = speed * time;

    printf("distance=%d\n",distance);
}