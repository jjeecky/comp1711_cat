#include <stdio.h>

int main()
{
    int radius;
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);

    int area = 3.14 * radius * radius;
    printf("The area is %d", area);

    return 0;
}