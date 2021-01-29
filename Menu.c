#include <stdio.h>
main()
{
	//1. menu
	printf("pick a number from 1 to 5:");
	//2. Reading choices
	int choice=0;
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		case 1:
			printf("You picked Sandwich\nPrice Rs 149");
			break;
		case 2:
		    printf("You picked Pizza\nPrice Rs 239");
		    break;
		case 3:
		    printf("You picked Pasta\nPrice Rs 179");
		    break;
		case 4:
		    printf("You picked French fries\nPrice Rs 99");
		    break;
		case 5:
		    printf("You picked Burger\nPrice Rs 129");
		    break;
		default: printf("Invalid choice");	
	}
}
