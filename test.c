#include <stdio.h>
struct class
{
    int boys;
    int girls;
};

int sum(struct class cls){
    return cls.boys+cls.girls;
}

void main(){
    struct class clss;
    clss.boys=printf("Enter number of boys:");
    scanf("%d",&clss.boys);
    clss.girls=printf("enter number of boys:");
    scanf("%d",&clss.girls);
    printf("total student is:%d", sum(clss));

}
