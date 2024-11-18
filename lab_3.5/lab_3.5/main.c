#include <stdio.h>
#define MAX 20

int main(int argc, const char * argv[]) {
    int num[21];
    int reps_in_num[101]={0};
    double median;
    
    int sum=0,counter=0,max_num=0;
    double mean;
    int mode=0;
    printf("Keep on entering integers(up to 100) to calculate the mean, mode, and median.\n");
    printf("Press any letter to stop\n");
    while (counter < MAX && scanf("%d", &num[counter]) == 1 && num[counter] <= 100)  {
            sum=sum+num[counter];
        reps_in_num[num[counter]]++;
        counter++;}
    mean=(double)sum/counter;
    for (int i=1; i<100; i++) {
        if (reps_in_num[i]>max_num) {
            max_num=reps_in_num[i];
            mode =i;}}
    for (int i=0; i<counter; i++) {
        for (int j=i+1; j<counter; j++) {
            if (num[i]>num[j]) {
                int temp = num[i];
                num[i]=num[j];
                num[j]=temp;}}}
    if (counter %2 == 0) {
        median = (double)((num[counter/2-1])+(double)(num[counter/2]))/2;}
    else
        median = num[counter/2];
    
    
    
    
    printf("The Mean is:%lf\n",mean);
    printf("The Mode is:%d\n",mode);
    printf("The Median is:%lf\n",median);
    
    
    
    
    
    return 0;
}
