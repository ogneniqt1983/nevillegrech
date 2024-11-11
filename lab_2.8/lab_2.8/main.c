#include <stdio.h>
#include <math.h>
double zeta(double reps, double power){
    double sum=0;
    double denominator=1;
    for (int i=1; i<(reps+1); i++) {
        denominator=pow((double)i, power);
        sum=sum+ (1/denominator);
    }
    
    return sum;
}


int main(int argc, const char * argv[]) {
    double reps;
    double power;
    double sum;
    printf("Enter a power:\n");
    scanf("%lf",&power);
    printf("Enter reps:\n");
    scanf("%lf",&reps);
    sum = zeta(reps,power);
    printf("The sum is %.4lf",sum);
    

    return 0;
}
