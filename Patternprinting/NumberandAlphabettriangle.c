// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2==1){
//                 printf("%d",j);
//             }
//             else{
//                 printf("%c",j+64);
//             }
//         }
        
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        // int a=1;
        for(int j=1; j<=n+1-i; j++){
            if(i%2==1){
                printf("%d ", j);
            }else{
                printf("%c ",j+64);
                // a++;
            }
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int m=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(m==0){
                printf("%d", j);
            }else{
                printf("%c", j+64);
            }
        }
        if(m==0){
            m=1;
        }else{
            m=0;
        }
        printf("\n");
    }
    return 0;
}