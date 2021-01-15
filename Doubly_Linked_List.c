#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
    struct Node *Prev;

}*Head , *Newnode , *Tail;

void Create_NewNode()
{
     Newnode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter Data OF Node :");
        scanf("%d",&value);

        Newnode -> Data = value;
        Newnode -> Next = NULL;
        Newnode -> Prev = NULL;

}
void Create(int N)
{
    int i = 1 , value;

    while( i <= N)
    {
         Create_NewNode();

        if(Head == NULL)
        {
            Head = Newnode;
            Tail = Newnode;
        }
        else
        {
            Tail -> Next = Newnode;
            Newnode -> Prev = Tail;
            Tail = Newnode;
        }
        i++;
    }
}

void Insert_At_Start()
{
        Create_NewNode();

        if(Head == NULL)
        {
             Head = Newnode ;
        }
        else
        {
             Newnode -> Next = Head ;
             Head -> Prev = Newnode;
             Head = Newnode ;
        }
        printf("\n Node IS Inserted At Starting Position SuccessFully !!  \n");
}
void Insert_At_Last()
{
    struct Node *Temp;
    Create_NewNode();

    if(Head == NULL)
    {
        Head = Newnode ;
    }
    else
    {
        Temp = Head;
        while(Temp -> Next != NULL)
        {
            Temp = Temp -> Next;
        }
        Temp -> Next = Newnode;
        Newnode -> Prev = Temp;
    }

     printf("\n Node Is Inserted Last Position SuccessFully !!  \n");

}
void Insert_At_Specific_Position()
{
    struct Node *Temp , *Next_Node;
    int i = 1 , Pos = 0;

    printf("Enter Position For insertion Of Node :");
    scanf("%d",&Pos);

    Create_NewNode();

    if(Head == NULL)
    {
        Head = Newnode ;
    }
    else
    {
        Temp = Head;
        while(i < Pos -1)
        {
            Temp = Temp -> Next;
            i++;
        }
        Newnode -> Prev = Temp;
        Newnode -> Next = Temp -> Next;
        Temp -> Next = Newnode;
        Newnode -> Next -> Prev = Newnode;
    }

    printf("\n Node Are SuccessFully Inserted At %d Position",Pos);

}
void Delete_At_Start()
{
        struct Node *Temp;

        Temp = Head;
        if(Head == NULL)
        {
            printf("Empty\n");
        }
        else
        {

             Head = Head -> Next;
             Head -> Prev = NULL;
             free(Temp) ;
        }

        printf("\n Node IS Deleted At Starting Position SuccessFully !!  \n");

}
void Delete_At_Last()
{
        struct Node *Temp , *P_Node;

        Temp = Head;
        if(Head == NULL)
        {
            printf("Empty\n");
        }
        else
        {

            while(Temp -> Next != NULL)
            {
                P_Node = Temp;
                Temp = Temp -> Next;
            }
            P_Node -> Next = NULL;
            free(Temp);
        }
        printf("Last Node Is Deleted Successfully\n");
}
void Delete_At_Specific_Position()
{
    struct Node *Temp ;
    int i = 1 , Pos = 0;

    printf("Enter Position For insertion Of Node :");
    scanf("%d",&Pos);

    Temp = Head;
    while(i < Pos  )
    {
        Temp = Temp -> Next;
        i++;
    }
    Temp -> Prev -> Next = Temp -> Next ;
    Temp -> Next -> Prev = Temp  -> Prev;
    free(Temp);

    printf("\n Node Is Deleted Successfully \n");


}
void Display()
{
    struct Node *Temp;

    Temp = Head;
    while(Temp != NULL)
    {
        printf("%d\n",Temp -> Data);
        Temp = Temp -> Next;
    }

}
int main()
{
    int N = 0 , Ch = 0;
    printf("Enter Count Of Node :");
    scanf("%d",&N);

    Create(N);

    while(1)
    {
        printf("\n 1.Insert_At_Start");
        printf("\n 2.Insert_At_Last");
        printf("\n 3.Insert_At_Specific_Position");
        printf("\n 4.Delete_At_Start");
        printf("\n 5.Delete_At_Last");
        printf("\n 6.Delete_At_Specific_Position");
        printf("\n 7.Display");
        printf("\n 8.Exit");

        printf("\n\n Enter Your Choice :");
        scanf("%d",&Ch);

        switch(Ch)
        {
            case 1:
                Insert_At_Start();
                _getch();
                system("cls");
                break;

            case 2:
                Insert_At_Last();
                _getch();
                system("cls");
                break;
            case 3:
                Insert_At_Specific_Position();
                _getch();
                system("cls");
                break;
             case 4:
                Delete_At_Start();
                _getch();
                system("cls");
                break;
            case 5:
               Delete_At_Last();
                _getch();
                system("cls");
                break;
            case 6:
                 Delete_At_Specific_Position();
                 _getch();
                system("cls");
                break;
            case 7:
                Display();
                _getch();
                system("cls");
                break;
             case 8:
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

