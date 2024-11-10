#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);


int main(int argc, const char * argv[]) {

    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    printf("a:%d + b:%d = %d\n",a,b,add(a,b));
    printf("a:%d - b:%d = %d\n",a,b,sub(a,b));
    printf("a:%d * b:%d = %d\n",a,b,mul(a,b));
    
    return 0;
}

int add(int a, int b)
{
    int tot=0;
    tot = a+b;
    return tot;
    
}
int sub(int a, int b)
{
    int tot=0;
    tot = a-b;
    return tot;
}
int mul(int a, int b)
{
    int tot=0;
    tot = a*b;
    return tot;
}
