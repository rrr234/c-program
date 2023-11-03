#include<stdio.h>
int main()
{
    char day; //M-monday; T-tuesday; W-wednesday; t; F; s; S;
    printf("enter day(1-7) :");
    scanf("%c", &day);
    
    switch(day){
    	case 'M' : printf("monday \n");
    	break;
    	case 'T' : printf("tuesday \n");
    	break;
    	case 'W' : printf("wednesday \n");
    	break;
    	case 't' : printf("thrusday \n");
    	break;
    	case 'F': printf("friday \n");
    	break;
    	case 's' : printf("saturday \n");
    break;
    	case 'S' : printf("sunday \n");
    	break;
        default : printf("not a valid day! \n");
	}
	return 0;
}
