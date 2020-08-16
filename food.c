#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {int num;
 printf("Enter any number from 1 to 5\n");
 scanf("%d",&num);
 switch(num)
 {
 	case 1:
 		printf("Food item in number 1 is: Pizza\n");
 		printf("Pizza's price is Rs.239");
 		break;
 	case 2:
	    printf("Food item in number 2 is: Burger\n");
	    printf("Burger's price is Rs.129");
		break;
	case 3:
	    printf("Food item in number 3 is: Pasta\n");
	    printf("Pasta's price is Rs.179");
		break;
	case 4:
		printf("Food item in number 4 is: French Fries\n");
		printf("French Fries price is Rs.99");
		break;
	case 5:
		printf("Food item in number 5 is: Sandwhich\n");
		printf("Sandwich's price is Rs.149");
		break;
	default : printf("Invalid number entered");				
 }
	return 0;
}
