#include <stdio.h> 
#include<stdlib.h> 
 
int main(int argc, char** argv){ 
      int x ; 
      int y ; 
    if(argv[1]){ 
         x = atoi(argv[1]); 
    } 
    if(argv[2]){ 
         y = atoi(argv[2]); 
    } 
    else{ 
        return 0; 
    } 
    for(int i = 1; i <= y; i++){ 
        for(int j = 1; j <= x; j++){ 
            if(i == 1 && j == 1){ 
                printf("o"); 
            } 
            else if(i == 1 && j == x){ 
                printf("o"); 
            } 
            else if(i == y && j == 1){ 
                printf("o"); 
            } 
            else if (i == y && j == x) { 
                printf("o"); 
            } 
            else if(i == 1){ 
                printf("-"); 
            } 
            else if(i == y){ 
                printf("-"); 
            } 
            else if(j == 1){ 
                printf("|"); 
            } 
            else if( j == x){ 
                printf("|"); 
            } 
            else{ 
                printf(" "); 
            } 
        } 
        printf("\n"); 
    } 
}