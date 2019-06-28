#include <stdio.h>

void inputStudentInfo(int std_ids[], float std_marks[], int n);
void inputStudentInfo(int std_ids[], float std_marks[], int n);

int current = 0;
int find = 0;
int main(void)
{
    int choice = 0;
    int n;
    scanf("%d", &n);

    int std_ids[n];
    float std_marks[n];
    do
    {

        printf("\t\t\t =====================MENU=======================\n");
        printf("\t\t\t |1. Enter student IDs, student’s grades            \n");
        printf("\t\t\t |2. See all student IDs together with their grades \n");
        printf("\t\t\t |3. See highest grade and lowest grade             \n");
        printf("\t\t\t |4. Exit                                           \n");
        printf("\t\t\t ================================================\n");
        printf(" Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            inputStudentInfo(std_ids, std_marks, n);
            //inputStudentInfo(std_ids, std_marks, n);
            break;
        case 2:
            printfStudentInfo(std_ids, std_marks, n);
            break;
        case 3:
            findHighestAndLowestMarks(std_ids, std_marks, n);
            break;
            break;

        case 4:
            break;
        default:
            printf("Ban chon sai. Moi ban chon lai MENU!\n");
            break;
        }
    } while (choice != 4);
    return 0;
}

void inputStudentInfo(int std_ids[], float std_marks[], int n)
{
    int N;
    printf("How many students do you want to add inf: ");

    scanf("%d", &N);

    // for(i=0; i<N; i++)

    for (int i = current; i < current + N; i++)
    {

        printf("Student %d ID is: ", (i + 1));
        scanf("%d", &std_ids[i]);
        printf("Student %d mark is: ", (i + 1));
        scanf("%f", &std_marks[i]);
    }
    current = current + N;
}

void printfStudentInfo(int std_ids[], float std_marks[], int n)
{
    printf("---------------------------------\n");
    for (int i = 0; i < current; i++)
    {
        printf("Student %d ID is: %d\n", (i + 1), std_ids[i]);
        printf("Student %d mark is: %.1f\n", (i + 1), std_marks[i]);
        // printf("%10d %.1f\n", std_ids[i], std_marks[i]);
    }
}

void findHighestAndLowestMarks(int std_ids[], float std_marks[], int n)
{
    float max, min;
    max = std_marks[0];
    min = std_marks[0];
    for (int i = 0; i <current; i++)
    {

        if (std_marks[i] > max)
        {
            max = std_marks[i];
        }
        else if (min > std_marks[i])
        {
            min = std_marks[i];
        }
    }

        for (int j=0;j<current;j++){

            if (std_marks[j]==max )
            {
        printf("\nStudent with ID (%d) have highest max is %.1f", std_ids[j], max);
            }
            else if (std_marks[j]==min )
            {
        printf("\nStudent with ID (%d) have lowest max is %.1f", std_ids[j], min);
            }
        }
}