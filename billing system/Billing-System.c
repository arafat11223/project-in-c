#include<stdio.h>
#include<string.h>
struct list
{
    int id,price;
    char itemName[20];
};
void display(struct list item[],int size,char cName[],char cAddress[])
{
    int total=0;
    printf("\n\n\n");
    printf("\t Hellow store \n");
    printf("\t-------------- \n");
    printf("\n");
    printf("Name : %s \t Address : %s \n",cName,cAddress);
    printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("Id : %d\t",item[i].id);
        printf("Name : %s\t",item[i].itemName);
        printf("Price : %d\t\n",item[i].price);
        printf("--------------------------------------------\n");
        total +=item[i].price;
    }
    printf("\t\tTotal : %d",total);
    printf("\n\n");
    printf("\t Thanks for visiting \n");
    printf("\n\n");

}


int main()
{

    printf("Hello........\n");
    char name[30];
    char address[30];
    int totalitems;
    printf("Enter your name \t");
    scanf("%s",&name);
    printf("Enter your address \t");
    scanf("%s",&address);
    printf("Enter totalitems \t");
    scanf("%d",&totalitems);
    printf("\n");
    struct list item[totalitems];
    for(int i=0;i<totalitems;i++)
    {
        item[i].id=(i+1);
        printf("Enter %d item name \t", i+1);
        scanf(" %s",&item[i].itemName);
        //gets(item[i].itemName);
        printf("Enter price \t");
        scanf("%d",&item[i].price);
    }
    display(item , totalitems,name,address);
    return 0;
}


