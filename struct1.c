#include <stdio.h>

// STRUCTURE DECLARATION

struct studentResult
{
    int no, eng, guj, maths, total, percent;
};

int main()
{
    struct studentResult stu[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter %d student name\n", i + 1);
        printf("enter english marks: ");
        scanf("%d", &stu[i].eng);
        printf("enter gujarati marks: ");
        scanf("%d", &stu[i].guj);
        printf("enter maths marks: ");
        scanf("%d", &stu[i].maths);

        stu[i].total = stu[i].eng + stu[i].guj + stu[i].maths;
        stu[i].percent = stu[i].total / 3;
    }

    printf("\nNo.\tEng\tGuj\tMaths\tTotal\tPercentage\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", i+1, stu[i].eng, stu[i].guj, stu[i].maths, stu[i].total, stu[i].percent);
    }
    return 0;
}