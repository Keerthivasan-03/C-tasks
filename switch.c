#include<stdio.h>
main()
{
	//printing the items
	printf("1.Burger,Rs 159 \n2.Falooda,Rs 100\n3.Veg puffs,Rs 69 \n4.French fries,Rs 199 \n5.Sandwich,Rs 149\n");
	
	//entering the choice
	int choice;
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	//switch conditions
	switch(choice)
	{
		case 1:
			printf("Food item-Burger\nPrice-Rs 159");
			break;
		case 2:
			printf("Food item-Falooda\nPrice-Rs 100");
			break;
		case 3:
			printf("Food item-Veg puffs\nPrice-Rs 69");
			break;
        case 4:
        	printf("Food item-French fries\nPrice-Rs 199");
        	break;
        case 5:
        	printf("Food item-Sandwich\nPrice-Rs 149");
        	break;
        default:
        	printf("Please enter the right choice");
	}
}
