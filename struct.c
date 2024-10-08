#include <stdio.h>
#include <string.h>
struct player{
    char name[10];
    int age;
};
    

int main(){
    struct player player1;
    struct player player2;

    strcpy(player1.name,"nikesh");
    player1.age= 20;

    strcpy(player2.name,"arjun");
    player2.age= 23;

    printf("%s\n", player1.name);
    printf("%d\n",player1.age);

    printf("%s\n", player2.name);
    printf("%d\n",player2.age);

    return 0;

}