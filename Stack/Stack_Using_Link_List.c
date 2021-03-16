#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int Data;
    struct Stack *Next;
};
struct Stack *Top  = 0;
void  PUSH()
{
    int Value = 0;

    struct Stack *New ;

    New = (struct Stack*)malloc(sizeof(struct Stack));


    printf("Enter Data For NewNode: ");
    scanf("%d",&Value);

    if(Top == NULL)
    {
        printf("\n Stack Is Full..\n");
    }
    else
    {
        New ->Data = Value;
        New -> Next = Top;

        Top = New;

    }
}
void POP()
{
     struct Stack *Temp;
     Temp = Top;
    if(Top == NULL)
    {
        printf("Stack Is Empty..");
    }
    else
    {
        Temp = Top;
        Top = Top -> Next;
        Temp -> Next = NULL;
        free(Temp);
        printf("Top of Element Is Remove..");
    }
}
void PEEK()
{
    if(Top == NULL)
    {
        printf("Stack Is Empty..");
    }
    else
    {
        printf("\n Top Value Is : %d",Top -> Data);
    }
}
void DISPALY()
{
    int i = 0;
    struct Stack *Temp;
    if(Top == NULL)
    {
        printf("Stack Is Empty..");
    }
    else
    {
        Temp = Top;
        while(Temp != NULL)
        {
            printf("%d\n",Temp -> Data);
            Temp = Temp -> Next;

        }
    }
}
int main()
{
    int  Ch = 0;

    while(1)
    {
        printf("\n 1.PUSH");
        printf("\n 2.POP");
        printf("\n 3.PEEK");
        printf("\n 4.DISPALY");
        printf("\n 5.Exit");

        printf("\n\n Enter Your Choice :");
        scanf("%d",&Ch);

        switch(Ch)
        {
        case 1:
            PUSH();
            _getch();
            system("cls");
            break;
        case 2:
            POP();
            _getch();
            system("cls");
            break;
        case 3:
            PEEK();
            _getch();
            system("cls");
            break;
         case 4:
            DISPALY();
            _getch();
            system("cls");
            break;
         case 5:
             goto dwn;
             exit(0);
             break;
        default:
            printf("\n Invalid Choice \n\n");
            _getch();
            system("cls");
            break;
        }
    }
    dwn:
    system("cls");
    printf("\n\t Thank You !!");

    printf("\n\n Press Any Key For Exit ");
     _getch();

}

