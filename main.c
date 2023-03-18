#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

int main()
{
    printf("Welcome to Console AI the Chatbot for more infomation type 1\n");
    double responses = false, AIresponses = false;
    int choice = false;

    while (true)
    {
        printf("1) Hello!\n");
        printf("2) tell me a joke\n");
        printf("3) Is google.com up?\n");
        printf("4) Give me steps how to make a paper Airplane?\n");
        printf("5) Goodbye\n");
        printf("Enter Choice by typing a number: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\n🛈\nhi glad to see you hope your doing well ☺\n\n");
                responses += AIresponses;
                break;
            
            case 2:
                printf("why the dog stay in the shade?\n\nbecause he did not want to be a hot dog!\n\n");
                responses += AIresponses;
                break;
            
            case 3:
                printf("yes\n");
                responses += AIresponses;
                break;
            
            case 4:
                printf("Here Are the Steps: \n\n🛈\n");
                printf("1. Fold the paper in half horizontally.\n 2. Unfold the paper and fold each of the top corners into the center line.\n3. Fold the peak down to meet the edge of the previous fold.\n4. Fold the upper sides into the center line.\n5. Fold the top edge 1/2” away from you.\n6. Fold the plane in half towards you.\n\n");
                responses += AIresponses;
                break;
            
            case 5:
                printf("Bye!!!!\n");
                exit(0);
        }

    }
    

    return false;
}