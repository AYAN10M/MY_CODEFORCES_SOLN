#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int n;
    scanf("%d", &n);
 
    if (n == 2)
    {
        printf("1");
        return 0;
    }
    
 
    int count = 0;
 
    // storing for smallest and largest value index respectively
    int x = 0, y = 0;
    int tallest = 0, smallest = 999;
 
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > tallest)
        {
            tallest = arr[i];
            x = i;
        }
        if (arr[i] <= smallest)
        {
            smallest = arr[i];
            y = i;
        }
    }
 
    while (x != 0 && y != n - 1)
    {
        if (x != 0)
        {
            int temp = arr[x - 1];
            arr[x - 1] = arr[x];
            arr[x] = temp;
            count++;
            x--;
        }
 
        if (y != n - 1)
        {
            int temp = arr[y + 1];
            arr[y + 1] = arr[y];
            arr[y] = temp;
            count++;
            y++;
        }
    }
 
    printf("%d", count);
    return 0;
}