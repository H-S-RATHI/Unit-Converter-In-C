#include <stdio.h> 

int main() {
    char start, again;

    float inchestometers = 0.0254;
    float poundtokgs = 0.45359237;
    float kmstomiles = 0.62137119;
    float inchestofoot = 0.08333333;
    float cmstoinches = 0.39370079;
    float unit, solution;

    printf("\n\n\t\t\t\tWelcome to the Unit converter\n\n");
    printf("\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t To Start the calculator, Press 'S' Key->");
    scanf(" %c", &start);

    while (start == 's' || start == 'S') {
        printf("\n\n\t\t\t\t1. Inches     To-> Meter\n\t\t\t\t2. Pound      To-> Kilogram\n\t\t\t\t3. Inches     To-> Foot\n\t\t\t\t4. Kilometer  To-> Miles\n\t\t\t\t5. Centimeter To-> Inches");
        printf("\n\n\t\t\tEnter your Choice->");
        int input;
        scanf("%d", &input);

        switch (input) {
            case 1:
                printf("\n\t\t\tYou Chose Inch To Meter\n\n ");
                printf("\t\t\tEnter the value in terms of Inch unit->");
                scanf("%f", &unit);

                solution = unit * inchestometers;
                printf("\t\t\t%f Inches is equal to %f Meters", unit, solution);
                break;

            case 2:
                printf("\t\t\tYou Chose Pound To Kilogram \n\n ");
                printf("\t\t\tEnter the value in terms of Pounds unit->");
                scanf("%f", &unit);

                solution = unit * poundtokgs;
                printf("\t\t\t%f Pounds is equal to %f Kilograms", unit, solution);
                break;

            case 3:
                printf("\t\t\tYou Chose Inches to Foot\n\n ");
                printf("\t\t\tEnter the value in terms of Inch unit->");
                scanf("%f", &unit);

                solution = unit * inchestofoot;
                printf("\t\t\t%f Inches is equal to %f Feet", unit, solution);
                break;

            case 4:
                printf("\t\t\tYou Chose Kms To Miles\n\n ");
                printf("\t\t\tEnter the value in terms of Kilometers unit->");
                scanf("%f", &unit);

                solution = unit * kmstomiles;
                printf("\t\t\t%f Kilometers is equal to %f Miles", unit, solution);
                break;

            case 5:
                printf("\t\t\tYou Chose Cms To Inches\n\n ");
                printf("\t\t\tEnter the value in terms of Centimeters unit->");
                scanf("%f", &unit);

                solution = unit * cmstoinches;
                printf("\t\t\t%f Centimeters is equal to %f Inches", unit, solution);
                break;

            default:
                printf("\n\t\t\tYou have chosen an invalid option\n\n");
        }

        printf("\n\n\t\t\tDo you want to use the Calculator Again [Y/N]->");
        scanf(" %c", &again);

        if (again == 'n' || again == 'N') {
            break;
        }
    }

    return 0;
}
