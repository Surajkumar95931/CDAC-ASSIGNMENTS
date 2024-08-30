#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{

    ptrDate->day = 1;
    ptrDate->month = 1;
    ptrDate->year = 2000;
}

void printDate(struct Date *ptrDate)
{

    // printf("Date: %d/%d/%d\n", ptrDate->day, ptrDate->month, ptrDate->year);
    printf("day is %d\n", ptrDate->day);
    printf("month is %d\n", ptrDate->month);
    printf("year is %d\n", ptrDate->year);
}

void acceptDate(struct Date *ptrDate)
{

    printf("Enter the day: ");
    scanf("%d", &ptrDate->day);

    printf("Enter the month: ");
    scanf("%d", &ptrDate->month);

    printf("Enter the year: ");
    scanf("%d", &ptrDate->year);
}

int main()
{
    struct Date d1;
    int choice;

    do
    {
        printf("\nMenu:\n");
        printf("1. Initialize Date\n");
        printf("2. Accept Date from Console\n");
        printf("3. Print Date on Console\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            initDate(&d1);
            break;
        case 2:
            acceptDate(&d1);
            break;
        case 3:
            printDate(&d1);
            break;
        case 4:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
