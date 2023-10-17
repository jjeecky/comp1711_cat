#include <stdio.h>
/*
int main() {
    int mark ;
    
    printf("Enter your marks = ");
    scanf("%d",&mark);
    printf("The mark to be checked is: %d\n", mark);
    if (mark >= 0 && mark <= 100)
    {
        if(mark == 0)
    {
        printf("mark is Zero\n");
    }
    else if (mark < 40)
    {
        printf("fail\n");
    }
    else if (mark < 38)
    {
        printf("complete fail\n");
    }
    else
    {
        printf("pass\n");
    }

    }
else
{
    printf("Number must be between 0 and 100.");
}
    printf("Exit\n");
    return 0;
}

*/
/*
int main() {
    int a=1;
    
    switch (a)
    {
        case 0: printf("Value is 0"); break;
        
        case 1: printf("Value is 1"); break;
        
        case 2: printf("Value is 2"); break;
    }
    
    return 0;
}
*/
int main(){
    int num ;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num > 0){
        printf("Positive."); 
        }
    else if (num < 0){
        printf("Negative");
        }
    else{
        printf("Zero."); 
        }
        
    return 0;
    }
    
