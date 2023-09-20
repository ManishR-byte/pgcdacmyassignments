#include<stdio.h>

int main(){
     int number, cube = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    
    for (int i = 0; i < 3; i++) {
        cube *= number;
    }
    
    printf("Cube of %d is", number);
    
    return 0;
}