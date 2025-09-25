#include<stdio.h>
struct address{
    int houseNo;
    char block[5];
    char city[50];
    char state[100];
};
void adres(struct address add){
    printf("%d, %s, %s, %s", add.houseNo, add.block, add.city, add.state);
}
int main(){
    struct address adds[5];
    printf("Enter info for person 1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%s", adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter info for person 2: ");
    scanf("%d", &adds[1].houseNo);
    scanf("%s", adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter info for person 2: ");
    scanf("%d", &adds[2].houseNo);
    scanf("%s", adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter info for person 3: ");
    scanf("%d", &adds[3].houseNo);
    scanf("%s", adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter info for person 4: ");
    scanf("%d", &adds[4].houseNo);
    scanf("%s", adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    adres(adds[0]);
    adres(adds[1]);
    adres(adds[2]);
    adres(adds[3]);
    adres(adds[4]);

    return 0;
}