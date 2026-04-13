#include <stdio.h>

int main(){
	
	int choice,choice_2;
	
	printf("Press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n");
	
	printf("enter your choice :-");
	scanf("%d",&choice);
	
	switch (choice){
		case 1:
		printf("press 1 for internet");
		printf("press 2 for top-up recharge");
		printf("press 3 for special recharge");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice_2){
			case 1:
			printf("you have sucessfully done recharge\n");
			break;
			case 2:
			printf("you have sucessfully done top-up recharge\n");
			break;
			case 3:
			printf("you have sucessfully done special recharge\n");
			break;
			default:
				printf("invalid choice\n");
				break;
		}
		break;
		
		case 2:
			printf("internet ke liye 1 dabaye\n");
		    printf("top-up recharge ke liye 2 dabaye\n");
		    printf("special recharge ke liye 3 dabaye\n");
		    printf("aapki pasand likhiye");
		    scanf("%d",&choice);
		    switch(choice_2){
		    	case 1:
		    		printf("aapne safaltapurvk recharge kr liya h\n");
		    		break;
		    		case 2:
		    		printf("aapne safaltapurvk top-up kr liya h\n");
		    		break;
		    		case 3:
		    		printf("aapne safaltapurvk special recharge kr liya h\n");
		    		break;
		    		default:
		    		printf("amany pasand\n");
		    		break;
			
	}
	
	case 3:
		    printf("internet mate 1 dabavo\n");
		    printf("top-up recharge mate 2 dabavo\n");
		    printf("special recharge mate 3 dabavo\n");
		    printf("tamari pasand lakho\n");
		    scanf("%d",&choice);
		    switch(choice_2){
		    	case 1:
		    		printf("tame safaltapurvk recharge kyru che\n");
		    		break;
		    		case 2:
		    		printf("tame safaltapurvk top-up recharge kyru che\n");
		    		case 3:
		    		printf("tame safaltapurvk special recharge kyru che\n");
		    		break;
		    		default:
		    		printf("amany pasand\n");
		    		break;
		    	}
			
	}
	
	
}