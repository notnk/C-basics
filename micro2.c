#include <stdio.h>
int i=0;
int id_chk;
struct rail
{
	int  id,day,month,year,hour,min,seat_no;
	char train[50],name[50],status;
}r[10];

add()
{
	printf("\n\n============== +Add Records+ ===============\n\n");
	for(i=0;i<=9;i++)
	{
		printf("\nEnter Ticket id : ");
		scanf("%d",&r[i].id);
		printf("\nEnter Customer's name : ");
		fflush(stdin);
		scanf("%s",&r[i].name);
		printf("\nEnter Train name : ");
		fflush(stdin);
		scanf("%s",&r[i].train);
		printf("\nEnter Seat Number : ");
		scanf("%d",&r[i].seat_no);
		printf("\nEnter date (dd/mm/yy) :");
		scanf("%d %d %d",&r[i].day,&r[i].month,&r[i].year);
		printf("\nEnter depature time (hour/minute) : ");
		scanf("%d %d",&r[i].hour,&r[i].min);
		printf("\nEnter Confirmation Status (y/n) : ");
		fflush(stdin);
		scanf("%c",&r[i].status);
	}
	printf("\n\n==========================================\n\n");

}

details()
{
	printf("\nEnter ticket Id :\n");
	scanf("%d",&id_chk);
	printf("\n\n================== Customers Record ================== \n\n");
	for(i=0;i<=9;i++)
	{
		if(id_chk==r[i].id)
		{
			printf("\nTicket id : %d",r[i].id);
			printf("\nName : %s",r[i].train);
			printf("\nTrain name : %s",r[i].name);
			printf("\nSeat number : %d",r[i].seat_no);
			printf("\nDate (dd/mm/yy) : %d / %d / %d",r[i].day,r[i].month,r[i].year);
			printf("\nDepature time (hour/minute) : %d : %d",r[i].hour,r[i].min);
			if(r[i].status=='Y' || r[i].status=='y')
				printf("\nConfirmation Status : Confirmed");
			else
				printf("\nConfirmation Status : Waiting");
		}
	}
	printf("\n\n");
	
}

status()
{
	printf("\nEnter ticket Id :\n");
	scanf("%d",&id_chk);
	printf("\n\n================== Customers Record ================== \n\n");
	for(i=0;i<=9;i++)
	{
		if(id_chk==r[i].id)
		{
			if(r[i].status=='Y' || r[i].status=='y')
			{
				printf("\nName : %s",r[i].train);
				printf("\nSeat Number : %d",r[i].seat_no);
				printf("\nConfirmation Status : Confirmed");
			}
			else
				printf("\nConfirmation Status : Waiting");
		}
	}
	printf("\n\n");
	
}


int main()
{
	int i,ch;
	printf("==================Welcome to railway sevices================= \n\n");
	while(1)
	{
		printf("1.Add Details : \n");
		printf("2.Ticket number id (Check details): \n");
		printf("3.Ticket number (Check Status): \n");
		printf("4.Exit : \n ");
		printf("\nEnter ur choice : \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				details();
				break;
			case 3:
				status();
				break;
			case 4:
					break;
			default:
				printf("Invalid option");
				break;
		}
	}
	return 0;
}
