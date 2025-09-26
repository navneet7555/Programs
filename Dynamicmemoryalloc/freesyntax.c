#include<stdio.h>
#include<stdlib.h>
float main(){
    float *ptr;
    ptr= (float*) calloc(5,sizeof(float));
    for(int i=0; i<5; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);
    ptr=(float *) malloc(2*sizeof(float));
    for(int i=0; i<2; i++){
        printf("%d", ptr[i]);
    }
    
    return 0;
}