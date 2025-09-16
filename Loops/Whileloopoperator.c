#include<stdio.h>
int main(){
    int x=4,y,z;
    y=--x;
    z=x--;
    printf("\n%d %d %d", x,y,z);
}

// #include<stdio.h>
// int main(){
//     int x=4, y=3, z;
//     z=x---y;
//     printf("\n%d %d  %d", x,y,z);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=10;
//     while(i==20){
//         printf("A computer buff!");
//     }
// }

// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         x--;
//         y++;
//         if(x==y){
//             continue;
//         }else{
//             printf("\n%d %d", x,y);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x=4,y=0,z;
//     while(x>=0){
//         if(x==y){
//             break;
//         }else{
//             printf("\n%d %d", x,y);
//             x--;
//             y++;
//         }
//     }
//     return 0;
// }