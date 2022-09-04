#include<stdio.h>
#include<windows.h>
#include<conio.h>

int menu();
int new_traveler();
int see();
int edit();
int view_list();
int flight_select();
int close();

int i,j,k;
int choice,One_or_round,flight,pay,method,country;
int T_day,T_month,T_year;
int R_day,R_month,R_year;

struct traveler{
  
  	char name[20];
    char id_no[15];
	int age;
    char address[40];
    double phone;
   
};
	
struct children{
  
  	char child_name[20];
	int child_age;
   
};  

void delay(int j){
    int i,k;
    for(i=0;i<j;i++){
    	 k=i;
	}  
}   

int close(){
	
	printf("\033[0;36m");
	printf("\n\n\n\t\a\a  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");
	printf("\n\t\a\a  <<<    This Program  Created By Imesh    >>> ");
	printf("\n\t\a\a  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n\n\n");
	printf("\033[0m");
	return 0;
	
}

int menu(struct traveler tra[],struct children child[],int n,int a){
	
    int choice;
    system("cls"); 
    printf("\n\n\n\n\t\t\t\t\033[0;33m\xB1\xB9\xB2 \xB2\xB9\xB1\033[0;36m SKY TRAVELERS ( MENU ) \033[0;33m\xB1\xB9\xB2 \xB2\xB9\xB1");
    printf("\n\n\n\n\t\t\t\033[0;37m1.Update information of Travelers\n\n\t\t\t2.Check the details of Travelers\n\n\t\t\t3.View Traveler's list\n\n\t\t\t4.Exit\n\n\n\t\t\t\t\033[0;36m Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:edit(tra,child,n,a);
        break;
       	case 2:see(tra,child,n,a);
       	break;
        case 3:view_list(tra,child,n,a);
        break;
        case 4:close();
        break;
		default:main(tra,child,n,a);

	}
	
	return 0;
}

int new_traveler(){
	  
	int n,a,i,p,q;
    system("cls");
    system("color A"); 
    printf("\033[0;37m");
    printf("\n\n\t\t\t\xB2\xB9\xB2 \xB2\xB9\xB2 Fill the Application \xB1\xB9\xB2 \xB2\xB9\xB1");
    printf("\033[0;32m");
    printf("\n\n  >>> How many Adults : ");
    scanf("%d",&n);
	struct traveler tra[n];	
	
	printf("\n  >>> How many Children : ");
	scanf("%d",&a);
	struct children child[a];

    printf("\n  >>> 1. One way \n      2. Round \n\n    Enter your choice : ");
    scanf("%d",&One_or_round);
    
    printf("\n  >>> Select Country \n\n\t1.America \n\t2.England \n\t3.Maldives\n\t4.Malaysia\n\t5.Thailand\n\t6.Germany\n\t7.Ireland\n\n    Enter your choice : ");
    scanf("%d",&country); 
    if((country>=1)&&(country<=7)){
	}
	else {
	printf("\n Your choise is Invalid");
	 for(i=0;i<=9;i++)
		        {
		            delay(100000000);
		            printf(".");
		        }
	new_traveler();	        
	}
    
    printf("\n  >>> Enter Traval Date ( Please Follow this Format (dd/mm/yyyy) ) : ");
    scanf("%d/%d/%d",&T_day,&T_month,&T_year);
    
    if(One_or_round==2){
    	printf("\n  >>> Enter Return Date ( Please Follow this Format (dd/mm/yyyy) ) : ");
    	scanf("%d/%d/%d",&R_day,&R_month,&R_year);
	}
	
	else if(One_or_round!=1)
		new_traveler();
		
	flight_select();
	
	printf("\033[0;32m");		
    for(i=0;i<n;i++){
    	printf("\n\n\033[0;36m  ===========================");	
    	printf("\n  >>> Enter Traveler %d Details ",i+1);
    	printf("\n  -----------------------------\033[0;32m");
    		
	    printf("\n\n  Enter the name         : ");
	    scanf(" %s",&tra[i].name);
	    
	    printf("  Enter ID number        : ");
	    scanf(" %s",&tra[i].id_no);
	    
	    printf("  Enter the address      : ");
	    scanf(" %s",&tra[i].address);
	    
	    printf("  Enter the age          : ");
	    scanf(" %d",&tra[i].age);
	    
	    printf("  Enter the phone number : ");
	    scanf("%d",&tra[i].phone);
	}
	
	for(i=0;i<a;i++){
	    printf("\n\n\033[0;33m  =============================");
    	printf("\n  >>> Enter Children %d Details ",i+1);
    	printf("\n  -----------------------------\033[0;32m");
    	
	    printf("\n\n  Enter the name   : ");
	    scanf(" %s",&child[i].child_name);
	    
	    printf("  Enter the age    : ");
	    scanf(" %d",&child[i].child_age);
	}
	
	printf("\n\n  >>> Payment\n\n\tyour payment is : ");
	if(flight==1){
		pay=(33000*n)+(18000*a);
		printf("%d",pay);
	}
	else if(flight==2){
		pay=(35000*n)+(20000*a);
		printf("%d",pay);
	}
	else if(flight==3){
		pay=(33000*n)+(18000*a);
		printf("%d",pay);
	}
	else if(flight==4){
		pay=(35000*n)+(20000*a);
		printf("%d",pay);
	}
	else if(flight==5){
		pay=(30000*n)+(16000*a);
		printf("%d",pay);
	}
	else if(flight==6){
		pay=(35000*n)+(20000*a);
		printf("%d",pay);
	}
	else printf("\n\n  Wrong Input \n");
	
	printf("\n\n  >>> Payment Method \n\n");
    printf("\t1. Book Now(Debit/Credit  card) \n\t2. Pay Later\n\n\tEnter your choice :  ");
    scanf("%d",&method);
		
    printf("\n\n  Ticket is Booked successfully!");
    
    if(One_or_round==2){
    	printf("\n\n\a  --------------------------------------------------");
		printf("\a  Please proceed return amount when you are back..! ");
		printf("\a  --------------------------------------------------");
	}
    printf("\033[1;35m");
    printf("\a\n\n\t--------------------------------------------------\n");
    printf("\tEnter 1 to Main Menu Or Enter Any Number to Exit : ");
	scanf("%d",&k);
	
	switch(k)
    {
        case 1:main(tra,child,n,a);
        break;
		default:close();
	}  

}

int flight_select(){
	
	printf("\n\n  >>> Select Flight \n ");
    
 	printf("\n__________________________________________________________________________________________________________________");
	printf("\n\t Flight 1\t\t   |\t\tFlight 2\t\t  |\t\tFlight 3\t\t  |\n-----------------------------------|--------------------------------------|---------------------------------------|\n Name    - AIRBUS10\t\t   |\tName    - SKYLANKA\t\t  |\tName    - AWdXXX10\t\t  |\n luggage - 30Kg\t\t\t   |\tluggage - 35Kg\t\t\t  |\tluggage - 30Kg\t\t\t  |\n Time    - 02:00AM\t\t   |\tTime    - 03:30AM\t\t  |\tTime    - 04:45AM\t\t  |\n price   - One person - LKR.33000  |\tprice   - One person - LKR.35000  |\tprice   - One person - LKR.33000  |\n\t   One Child  - LKR.18000  |\t\t  One Child  - LKR.20000  |\t\t  One Child  - LKR.18000  |");
	printf("\n___________________________________|______________________________________|_______________________________________|");
	printf("\n\t Flight 4\t\t   |\t\tFlight 5\t\t  |\t\tFlight 6\t\t  |\n-----------------------------------|--------------------------------------|---------------------------------------|\n Name    - AIRTOWER\t\t   |\tName    - WXT90001\t\t  |\tName    - SKYBUS01\t\t  |\n luggage - 35Kg\t\t\t   |\tluggage - 30Kg\t\t\t  |\tluggage - 35Kg\t\t\t  |\n Time    - 03:30AM\t\t   |\tTime    - 02:30AM\t\t  |\tTime    - 03:00AM\t\t  |\n price   - One person - LKR.35000  |\tprice   - One person - LKR.30000  |\tprice   - One person - LKR.35000  |\n\t   One Child  - LKR.20000  |\t\t  One Child  - LKR.16000  |\t\t  One Child  - LKR.20000  |");
	printf("\n___________________________________|______________________________________|_______________________________________|");
	printf("\n\n\t Which Flight you select (Enter Flight Number) : ");
	scanf("%d",&flight);	
	
}
    
int see(struct traveler tra[],struct children child[],int n,int a){

	system("cls");
    system("color B"); 
	
	printf("\n\n\t\xB5\xB5  DETAILS OF TRAVELERS  \xB5\xB5");
	printf("\n\n\n\n  >>> Adults\t  : %d",n);
	printf("\n  >>> Children    : %d",a);
	if(One_or_round==1){
		 printf("\n  >>> One way or Round : One way");
	}
	else printf("\n  >>> One way or Round : Round");
   
    printf("\n  >>> Country     : ");
    if(country==1){printf("America");}
	else if(country==2){printf("England");}
	else if(country==3){printf("Maldives");}
	else if(country==4){printf("Malaysia");}
	else if(country==5){printf("Thailand");}
	else if(country==6){printf("Germany");}
	else if(country==7){printf("Ireland");}
   
    printf("\n  >>> Traval Date : %d/%d/%d",T_day,T_month,T_year);
    
    if(One_or_round==2){
    	printf("\n  >>> Return Date : %d/%d/%d",R_day,R_month,R_year);
	}
	
	printf("\n  >>> Flight name :");
	
	if(flight==1)
		printf(" AIRBUS10 ");
	else if (flight==2)
		printf(" SKYLANKA ");
	else if (flight==3)
		printf(" AWdXXX10 ");
	else if (flight==4)
		printf(" AIRTOWER ");
	else if (flight==5)
		printf(" WXT90001 ");
	else if (flight==6)
		printf(" SKYBUS01 ");
	
	printf("\n  >>> Payment     : %d",pay);	
	
	printf("\n  >>> Payment is  :");	
	if(method==1)
		printf(" paid ");	
	
	else if(method==2)
		printf(" Not paid ");
					
	for(i=0;i<n;i++){	
    	printf("\n\n  >>> Traveler %d Details ",i+1);
    	printf("\n  ------------------------");	
	    printf("\n  Name      : %s",tra[i].name);
	    printf("\n  ID number : %s",tra[i].id_no); 
	    printf("\n  Address   : %s",tra[i].address);
	    printf("\n  Age       : %d",tra[i].age);
	 	printf("\n  Tel.      : %d",tra[i].phone);
	}
	
	for(i=0;i<a;i++){
		
    	printf("\n\n  >>> Children %d Details ",i+1);
    	printf("\n  ------------------------");	
	    printf("\n  Name    : %s",child[i].child_name);
		printf("\n  Age     : %d",child[i].child_age);   
	}
	printf("\033[1;35m");
    printf("\n\n\n\n\n\t\t Enter 1 to go to the menu Or \n\t\t Enter 2 to go to the main menu Or\n\t\t\t Press any number to exit  : ");
    scanf("%d",&k);
   	switch(k)
    {
        case 1:menu(tra,child,n,a);
        break;
        case 2:main(tra,child,n,a);
        break;
		default:close();
	}   
        
}

int view_list(struct traveler tra[],struct children child[],int n,int a){
	
	system("cls");
    system("color E");
    
   	printf("\n\n\t\t\t\xB2\xB2  TRAVELER LIST  \xB2\xB2");
   	printf("\n\t\t\t=====================  ");
	printf("\n\n\n\n Adults\t Children\t Country\t Flight\t\tPayment\t\tPaid/Unpaid\n\n");
	printf("   %d\t   %d\t\t ",n,a);
	if(country==1){printf("America\t");}
	else if(country==2){printf("England\t");}
	else if(country==3){printf("Maldives\t");}
	else if(country==4){printf("Malaysia\t");}
	else if(country==5){printf("Thailand\t");}
	else if(country==6){printf("Germany\t");}
	else if(country==7){printf("Ireland\t");}
	
	if(flight==1)
		printf(" AIRBUS10 ");
	else if (flight==2)
		printf(" SKYLANKA ");
	else if (flight==3)
		printf(" AWdXXX10 ");
	else if (flight==4)
		printf(" AIRTOWER ");
	else if (flight==5)
		printf(" WXT90001 ");
	else if (flight==6)
		printf(" SKYBUS01 ");
	
	printf("\t%d",pay);
	
	if(method==1)
		printf("\t\tpaid ");	
	else if(method==2)
		printf("\t\tNot paid ");
	
	printf("\033[0;32m");	
	printf("\n\n\n\n\n\t\t Enter 1 to go to the menu Or \n\t\t Enter 2 to go to the main menu Or\n\t\t\t Press any number to exit  : ");
    scanf("%d",&k);
  	switch(k)
    {
        case 1:menu(tra,child,n,a);
        break;
        case 2:main(tra,child,n,a);
        break;
		default:close();
	} 
	  
return 0;  
   		
}
          
int edit(struct traveler tra[],struct children child[],int n,int a){

	system("cls");	
	int k;
	system("COLOR 2");	
			
												
			printf("\n\n\t\t\t\t\t\tTHESE CAN BE ONLY UPDATE!");
			printf("\n\n\n\t\t\t==============================\n\t\t\t1.One way or Round\n\t\t\t2.Country\n\t\t\t3.Travel Date\n\t\t\t4.Flight\n\t\t\t==============================\n\n\t\t\t5.Go to the Menu\n\t\t\t6.ENTER ANY NUMBER EXIT\n\n\t\t\t\tEnter your choise : ");
			scanf("%d",&k);
			
			switch(k){
							
			case 1:
				printf("\n\n\nPREVIOUS SELECTION : %d",One_or_round);
				printf("\n\n  >>> 1.One way \n      2.Round \n\n\t ENTER UPDATE Selection : ");
				scanf("%d",&One_or_round);
				if(One_or_round==2){
    				printf("\n  >>> Return Date ( Please Follow this Format (dd/mm/yyyy) ): ");
    				scanf("%d/%d/%d",&R_day,&R_month,&R_year);
    			}
    			printf("\n\nUPDATE IS SUCCESS ");
		        for(i=0;i<=9;i++)
		        {
		            delay(100000000);
		            printf(".");
		        }
			
				edit(tra,child,n,a);	
				break;	
							
			case 2:
				printf("PREVIOUS SELECTION : ");
				if(country==1){printf("America\t");}
				else if(country==2){printf("England\t");}
				else if(country==3){printf("Maldives\t");}
				else if(country==4){printf("Malaysia\t");}
				else if(country==5){printf("Thailand\t");}
				else if(country==6){printf("Germany\t");}
				else if(country==7){printf("Ireland\t");}
				
    			printf("\n\n  >>> Select Country \n\n\t1.America \n\t2.England \n\t3.Maldives\n\t4.Malaysia\n\t5.Thailand\n\t6.Germany\n\t7.Ireland\n\n    Enter your choice ( Enter country Name ) : ");
				printf("\n\n\tENTER UPDATE Country : ");
				scanf(" %d",&country);
					printf("\n\nUPDATE IS SUCCESS ");
		        for(i=0;i<=9;i++)
		        {
		            delay(100000000);
		            printf(".");
		        }
		        edit(tra,child,n,a);
				break;
							
			case 3:
				printf("\n\n\nPREVIOUS SELECTION : %d/%d/%d",T_day,T_month,T_year);
				printf("\n\n\tENTER UPDATE Traval Date ( Please Follow this Format (dd/mm/yyyy) ) : ");
    			scanf("%d/%d/%d",&T_day,&T_month,&T_year);
    				printf("\n\nUPDATE IS SUCCESS ");
		        for(i=0;i<=9;i++)
		        {
		            delay(100000000);
		            printf(".");
		        }
		        edit(tra,child,n,a);
				break;
							
			case 4:
				printf("\n\n\n PREVIOUS Flight : ");
				
				if(flight==1)
					printf(" AIRBUS10 ");
				else if (flight==2)
					printf(" SKYLANKA ");
				else if (flight==3)
					printf(" AWdXXX10 ");
				else if (flight==4)
					printf(" AIRTOWER ");
				else if (flight==5)
					printf(" WXT90001 ");
				else if (flight==6)
					printf(" SKYBUS01 ");
				
				flight_select();	

				printf("\n\n  >>> Your Payment is Updated : ");
				if(flight==1){
					pay=(33000*n)+(18000*a);
					printf("%d",pay);
				}
				else if(flight==2){
					pay=(35000*n)+(20000*a);
					printf("%d",pay);
				}
				else if(flight==3){
					pay=(33000*n)+(18000*a);
					printf("%d",pay);
				}
				else if(flight==4){
					pay=(35000*n)+(20000*a);
					printf("%d",pay);
				}
				else if(flight==5){
					pay=(30000*n)+(16000*a);
					printf("%d",pay);
				}
				else if(flight==6){
					pay=(35000*n)+(20000*a);
					printf("%d",pay);
				}
				printf("\n\nUPDATE IS SUCCESS ");
		        for(i=0;i<=9;i++)
		        {
		            delay(100000000);
		            printf(".");
		        }
		        edit(tra,child,n,a);
				break;
				
			case 5: menu(tra,child,n,a);
			break;
			default: close();				
			}		
	
return 0;
					
}
    
int main(struct traveler tra[],struct children child[],int n,int a){
	
	char pass[10],password[4]="sky";
    int i=0,c,b,d,e;
    
    for (c=0;c<12;c++){
	
	system("cls");
		for (b=0;b<3;b++){
			printf("\n");	
		}
		                                              		
		for (b=0;b<c;b++){
		
			if(c==1||c==5||c==7||c==9){
			printf("\033[0;32m");	
			}
			else if(c==2||c==6||c==10){
			printf("\033[0;31m");
			}
			else if(c==3||c==7||c==11){
			printf("\033[0;37m");
			}
			else if(c==4||c==8||c==12){
			printf("\033[0;36m");
			}
				
			printf("\n");	
		}
		
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf("    \n\n                                                                       \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf(" \xB1\xB2                                                                      \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf(" \xB1\xB2\xB2            \xB2\xB2                                               \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf(" \xB1\xB2\xB2\xB2            \xB2\xB2                                           \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf(" \xB1\xB2\xB2\xB2\xB2            \xB2\xB2\xB2                                   \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf(" \xB1\xB2\xB2\xB2\xB2\xB2____________\xB2\xB2\xB2_______________                \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf("  \xB1\xB2\xB2\xB2\xB2\xB2\xB2  \xB2  \xB2  \xB2  \xB2\xB2\xB2\xB2  \xB2  \xB2  \xB2  \xB2\xB2\\       \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf("   \xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2}          \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf(" \xB1\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2)    \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf("    		   \xB2\xB2\xB2                      \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf("                  \xB2\xB2\xB2                   \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf("                 \xB2\xB2                        \n");
		for (b=0;b<c;b++){
			printf("\t");	
		}
		printf("                \xB2\xB2                         \n");
	
		delay(200000000);	
	}
    
    system("cls");
    system("color F");
    
    printf("\n\n\n\n\t\t\t\t\t\t\t");
    
	for(i=1;i<13;i++){

		for(j=1;j<30;j++){
				
			//s
		if (i==1&&j==2||i==1&&j==3||i==1&&j==4||i==1&&j==5||i==1&&j==6||i==1&&j==7||
			i==2&&j==1||i==2&&j==2||i==2&&j==3||i==2&&j==4||i==2&&j==5||i==2&&j==6||i==2&&j==7||i==2&&j==8||
			i==3&&j==1||i==3&&j==2||i==3&&j==7||i==3&&j==8||
			i==4&&j==1||i==4&&j==2||
			i==5&&j==1||i==5&&j==2||
			i==6&&j==1||i==6&&j==2||i==6&&j==3||i==6&&j==4||i==6&&j==5||i==6&&j==6||i==6&&j==7||
			i==7&&j==2||i==7&&j==3||i==7&&j==4||i==7&&j==5||i==7&&j==6||i==7&&j==7||i==7&&j==8||
			i==8&&j==7||i==8&&j==8||
			i==9&&j==7||i==9&&j==8||
			i==10&&j==1||i==10&&j==2||i==10&&j==7||i==10&&j==8||
			i==11&&j==1||i==11&&j==2||i==11&&j==3||i==11&&j==4||i==11&&j==5||i==11&&j==6||i==11&&j==7||i==11&&j==8||
			i==12&&j==2||i==12&&j==3||i==12&&j==4||i==12&&j==5||i==12&&j==6||i==12&&j==7||
			//k
			i==1&&j==11||i==1&&j==12||i==1&&j==17||i==1&&j==18||
			i==2&&j==11||i==2&&j==12||i==2&&j==16||i==2&&j==17||
			i==3&&j==11||i==3&&j==12||i==3&&j==15||i==3&&j==16||
			i==4&&j==11||i==4&&j==12||i==4&&j==14||i==4&&j==15||
			i==5&&j==11||i==5&&j==12||i==5&&j==13||i==5&&j==14||
			i==6&&j==11||i==6&&j==12||i==6&&j==13||
			i==7&&j==11||i==7&&j==12||i==7&&j==13||
			i==8&&j==11||i==8&&j==12||i==8&&j==13||i==8&&j==14||
			i==9&&j==11||i==9&&j==12||i==9&&j==14||i==9&&j==15||
			i==10&&j==11||i==10&&j==12||i==10&&j==15||i==10&&j==16||
			i==11&&j==11||i==11&&j==12||i==11&&j==16||i==11&&j==17||
			i==12&&j==11||i==12&&j==12||i==12&&j==17||i==12&&j==18||
			//y
			i==1&&j==20||i==1&&j==21||i==1&&j==28||i==1&&j==29||
			i==2&&j==21||i==2&&j==22||i==2&&j==27||i==2&&j==28||
			i==3&&j==21||i==3&&j==22||i==3&&j==27||i==3&&j==28||
			i==4&&j==22||i==4&&j==23||i==4&&j==26||i==4&&j==27||
			i==5&&j==22||i==5&&j==23||i==5&&j==26||i==5&&j==27||
			i==6&&j==23||i==6&&j==24||i==6&&j==25||i==6&&j==26||
			i==7&&j==24||i==7&&j==25||
			i==8&&j==24||i==8&&j==25||
			i==9&&j==24||i==9&&j==25||
			i==10&&j==24||i==10&&j==25||
			i==11&&j==24||i==11&&j==25||
			i==12&&j==24||i==12&&j==25
			){

			printf("\xB2\xB6");
			
			}			
	
		else
		printf("  ");	
		
		}
	delay(30000000);	
	printf("\n\t\t\t\t\t\t\t");	
	}

	printf("\n\n\n\n\t\t\t\t\t\t\t\t \033[0;35m   ==========================\n\t\t\t\t\t\t\t\t  \033[0;36m   WELCOME TO SKY TRAVELERS\n\t\t\t\t\t\t\t\t \033[0;35m   ==========================\n\n\n\n\t\t\t\t\t\t\033[0;33m1. Traveler Application ( Please Follow The Instructions for Enter Your Details )\n\n\t\t\t\t\t\t2. Details Of Travelers ( Staff Only )\n\n\n\t\t\t\t\t\t\t\033[0;36m Enter your choice : ");
	scanf(" %d",&j);
	
	switch(j)
    {
        case 1:new_traveler();
        break;
        case 2:system("cls");
    	system("color A");
		printf("\n\n\n\n\n\t\t\t\tEnter the Password to Login : ");
	    scanf("%s",pass);
	
	    if (strcmp(pass,password)==0){
		
		printf("\n\n\t\t  Password Match..!\n\n  Loading");
	        for(i=0;i<=6;i++)
	        {
	            delay(200000000);
	            printf(".");
	        }
	    
	   	menu(tra,child,n,a);
	   	return 0;
	    }
	    
	    else {  
			printf("\n\n Wrong password!!\a\a\a");
	       
	        printf("\n\n\n Enter 1 to Main menu and Press Any number to exit:");
	        scanf("%d",&k);
	            if (k==1)
	                main(tra,child,n,a);
	            else
	            	close();		
	        }
        break;
              
	default: close();
	
	}   
	
return 0;		
	
}
