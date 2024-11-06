#include <stdio.h>

int main(void)

{
    int dogs;
    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    
    
    int cats;
    printf("How many cats do you have?\n");
    scanf("%d", &cats);
    printf("So you have %d dogs(s) and %d cats!\n", dogs,cats);
    printf("So you have %d animals!\n", cats+dogs);
    



    return 0;

}
