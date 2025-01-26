//C program to print all negative elements in array
#include <stdio.h>
int main (){
int num[10],i=0;
while(i<10){
    printf("enter a number");
    scanf("%d",&num[i]);
    i++;
}
i=0;
while(i<10){
    if(num[i]<0)
        printf("%d \t",num[i]);
    i++;
}
return 0;
}
