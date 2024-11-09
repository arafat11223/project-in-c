#include<stdlib.h>
#include<string.h>

#define max_seats 30
#define max_name_length 50

struct booking
{
    int seatNo;
    char name[max_name_length];
    char source[max_name_length];
    char destination[max_name_length];
};
struct booking bookings[max_seats];
int bookedseats=0;
void bookseat()
{
    if(bookedseats>=max_seats)
    {
        printf("no seat available\n");
        return;
    }
    //struct booking newbooking;
    printf("Enter name :");
    scanf("%s",&bookings[bookedseats].name);

    printf("Enter seat number :");
    scanf("%d",&bookings[bookedseats].seatNo);

    printf("Enter source :");
    scanf("%s",&bookings[bookedseats].source);
    printf("Enter destination :");
    scanf("%s",&bookings[bookedseats].destination);

   // bookings[bookedseats++]=newbooking;
   bookedseats++;
    printf("Seat booked succssfully. ");

}

void viewresurvation()
{
    if(bookedseats==0)
    {
        printf("no resurvation made yet");
        return;
    }

    printf("All resurvation :\n");
    printf("Seat No.\tName\t\tsource\t\tdestination\n");
    printf("-----------------------------------------------------------\n");
   for(int i=0;i<bookedseats;i++)
   {

       printf("%d\t\t%s\t\t%s\t\t%s\n",bookings[i].seatNo,bookings[i].name,bookings[i].source,bookings[i].destination);
       printf("-----------------------------------------------------------\n");
   }
}

void Editresurvation()
{
    int seattoedit;
    printf("Enter seat number to edited :");
    scanf("%d",&seattoedit);
    int found=0;
    for(int i=0;i<bookedseats;i++)
    {
        if(bookings[i].seatNo == seattoedit)
        {
            printf("Enter new name :");
            scanf("%s",bookings[i].name);
            printf("Enter new source :");
            scanf("%s",bookings[i].source);
            printf("Enter new destination :");
            scanf("%s",bookings[i].destination);
            printf("Resurvation edited succssfully. ");
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("resurvation not found");

    }

}

void Printticket()
{
    int seatprint;
    printf("Enter seat number to print ticket :");
    scanf("%d",&seatprint);
    int found=0;
    for(int i=0;i<bookedseats;i++)
    {
        if(bookings[i].seatNo == seatprint)
        {
            printf("Ticket for Seat No. %d\n",bookings[i].seatNo);
            printf("Passenger name : %s\n",bookings[i].name);
            printf("Passenger source : %s\n",bookings[i].source);
            printf("Passenger destination : %s\n",bookings[i].destination);

            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("resurvation not found");

    }
}

int main()
{
    int choice ;

    printf("\n\tMini bus booking system\n");
    printf("-------------------------------------------------------\n\n");
    printf("[1] Book a seat\n");
    printf("[2] view resurvation\n");
    printf("[3] Edit a resurvation\n");
    printf("[4] Print a ticket\n");
    printf("[5] Exit\n  ");

    do{

        printf("\nEnter your choice\t: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                bookseat();
                break;
            case 2:
                viewresurvation();
                break;
            case 3:
                Editresurvation();
                break;
            case 4:
                Printticket();
                break;
            case 5:
                printf("Exiting...");
                break;
            default:
                printf("Invalid choice. please enter a valid option.");
        }
    }while(choice!=5);

    printf("Thank you! have a safe journey!");
    return 0;
    getch();
}


