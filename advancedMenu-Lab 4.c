// Michele Ferrer
// Dr.Steinberg
// COP3223-001
// advancedMenu- Lab 4
#include <stdio.h>

int main()
{

    int x =0; 
    int button = 0; 

do
{
    printf("Menu Options: \n");   
    printf("1) Blue: \n");
    printf("2) Green: \n");
    printf("3) red: \n");
    printf("4) yellow: \n");
    printf("5) exit: \n");
     printf("Please select a button: ");
    scanf("%d", &button); 
    
    if(button <1 || button > 5)
    {
        printf("please choose a button only between 1 - 5.\n"); 
    }
    
 switch(button)
 {
     case 1:
        printf("you chose the blue button.\n");
        break;
     case 2: 
         printf("you chose the green button.\n");
        break;
    case 3: 
         printf("you chose the red button.\n");
        break;
    case 4: 
         printf("you chose the yellow button.\n");
        break;
        
    case 5: 
        printf("exiting...\n");
        break;
 }
    printf("***************************\n");
       
} while(button != 5);

printf("Thanks for choosing a button :)\n");
	return 0;
}
