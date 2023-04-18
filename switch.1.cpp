#include<stdio.h>

main()
{
	int a,b,n; 
	printf("enter value of a=");
	scanf("%d",&a);
	printf("enter value of b=");
	scanf("%d",&b);

    printf(" 1 january");
    printf("\n 2 february");
    printf("\n 3 march");
    printf("\n 4 april");
    printf("\n 5 may");
    printf("\n 6 june");
    printf("\n 7 july");
    printf("\n 8 aguset");
    printf("\n 9 september");
    printf("\n 10 octomber");
    printf("\n 11 november");
    printf("\n 12 december");
    printf("\n chose eny number of above=");
    scanf("%d",&n);
    switch(n)
    {
    	case 1:
    		printf("value of january=");
    		break;
    		
    	case 2:
			printf("value of february=");
    	    break;
    	
    	case 3:
    		printf("value of march=");
    	    break;
    	
    	case 4:
    	    printf("value of april=");
    	    break;
    	
    	case 5:
    		printf("value of may=");
    	    break;
    	
    	case 6:
    		printf("value of june=");
    	    break;
    	
    	case 7:
    	     printf("value of july=");
    	    break;
    	
    	case 8:
    		printf("value of augest=");
    	    break;
    	
    	case 9:
    	    printf("value of september=");
    	    break;
    	
    	case 10:
    		printf("value of octomber=");
    	    break;
    	
    	case 11:
    		printf("value of november=");
    	    break;
    	
    	case 12:
    		printf("value of december=");
    	    break;
    	
    	default :
    		printf("plz enter valid choice");
    	    
       }
    	
    	
}








