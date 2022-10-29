#include<stdio.h>
#include<string.h>

void draw(int h);

int main(void)
{
    int height;
    printf("Enter height: ");
    scanf("%i", &height);
    draw(height);
}

void draw(int h)
{
    if (h <= 0)
    {
        return;
    }

    draw(h - 1);

    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}