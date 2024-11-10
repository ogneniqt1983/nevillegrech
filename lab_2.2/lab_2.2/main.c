
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float weight;
    int value;
    printf("Enter your weight in pounds: \n");
    scanf("%f", &weight);
    value = 1770.0 * weight * 14.5;
    printf ("Your weight in platinum costs $%x. \n", value);

    return 0;
}
/*
    1: Your weight in platinum costs $4234725.00.
    2: Your weight in platinum costs $4234725.00.
    3: Your weight in platinum costs $4234725.0000.
    4: Your weight in platinum costs $4234725. Removes the decimal part of the double
    5: Gives a negative answer
    6: Your weight in platinum costs $20116745.
    6: Your weight in platinum costs $409de5.
 */
