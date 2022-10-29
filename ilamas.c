#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(void)
{
    int startPop, endPop, currPop;
    int years = 0;
    // Starting Population
    do
    {
        printf("Starting Population: ");
        scanf("%i", &startPop);
    } while (startPop <= 0);

    // End Population
    do
    {
        printf("End Population: ");
        scanf("%i", &endPop);
    } while (endPop < startPop);
    
    currPop = startPop;
    while (currPop < endPop)
    {
        currPop += floor((currPop/3) - (currPop/4));
        years++;
    }
    printf("Years to reach population of %i from %i is %i", endPop, startPop, years);
}