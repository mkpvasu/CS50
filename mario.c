#include<stdio.h>
#include<stdbool.h>

int get_size(void);
void print_block(int size);

int main(void)
{
    // Get the size of block
    int n = get_size();
    
    // Print block
    print_block(n);
}

int get_size(void)
{
    int size;
    do
    {
        printf("Give the size of the block: ");
        scanf("%i", &size);
    } 
    while (size < 1);
    return size;
}

void print_block(int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}