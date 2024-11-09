#include<stdio.h>
#include<conio.h>

int main()
{
    int code ,quantity;
    double price,amount,total_amount=0,cash,change;
    char add_another;

    do{
        system("cls");
        printf("==================\n");
        printf("pizza box menu\n");
        printf("==================\n\n");
        printf("[1] BBQ Meaty Machine Pizza\t\t price = 350.00  \n");
        printf("[2] Meaty Onion Pizza\t\t\t price = 320.00  \n");
        printf("[3] Sausage Carnival Pizza\t\t price = 350.00  \n");
        printf("[4] Tender Beef Pizza\t\t\t price = 370.00  \n");
        printf("[5] Mac & Cheese Pizza\t\t\t price = 400.00  \n  ");
        //printf("Name : %s \t Address : %s \n",cName,cAddress);
        printf("\nEnter code\t: ");
        scanf("%d",&code);
        printf("\nEnter quantity\t: ");
        scanf("%d",&quantity);

        switch(code)
        {
            case 1: price = 350.00;
            break;
            case 2: price = 320.00;
            break;
            case 3: price = 350.00;
            break;
            case 4: price = 370.00;
            break;
            case 5: price = 400.00;
            break;

        }
        amount = price * quantity;
        printf("\nAmount\t\t: %.2lf", amount);
        total_amount=total_amount + amount;
        printf("\nTotal amount\t: %.2lf", total_amount);
        printf("\nAdd another order?(y/n)");
        
        add_another = getche();



    }while(add_another=='Y' || add_another=='y');

    do{
        printf("\ncash\t: ");
        scanf("%lf",&cash);
    }while(cash<total_amount);


    change=cash-total_amount;
    printf("\nchange\t: %.2lf",change);
    printf("\n\nThank you! Come again!");

}
