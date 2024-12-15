// Use if..else statements to output some text depending on what time it is:

#include <stdio.h>

int main()
{
    int time;
    printf("enter time: ");
    scanf("%d", &time);
    if (time < 12)
    {
        printf("good Morning !! it's %d clock", time);
    }
    else
    {
        printf("good Night !! it's %d clock", time);
    }
    return 0;
}