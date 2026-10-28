#include <stdio.h>
int main (){
printf(" Today I Will Be Trying to find The Largest Number among Three Numbers.\n");
int a,b,c;
printf("Enter the first number:");
scanf("%d" ,&a);
printf("Enter the Second number:");
scanf("%d" ,&b);
printf("Enter the Third number:");
scanf("%d" ,&c);
if(a>=b && a>=c){
    printf("a is the Largest NUmber");
}
else if(b>=a && b>=c){

    printf("b is the Largest NUmber");
}
else{
    printf("c is the Largest NUmber");
}
return 0;
}

