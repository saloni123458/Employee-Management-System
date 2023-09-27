#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>

// Function Prototype
void verify_page();
void loading_page();
void addition_Denied_page();
void addition_confirmation_page();
void Add_Employee();
void deletion_confirmation_page();
void deletion_invalid_ID();
void Delete_Data_Int(int a[], int pos);
void Delete_Data_String(int pos);
void Deletion_Employee();



//Array Variables Decleration
int ID[20]={1111,2222,3333,4444,5555};
int PASSWORD[20]={1111,2222,3333,4444,5555};
long long int PHONE[20]={9875664583 , 8756691256 , 9562785896 , 6000852589 , 8995566998 };   
char NAME[20][30]={"Atharv Satish Garje" , "Gyanendra Rajvaidhya" , "Vivek Kumar" , "Aman Arya" , "Saurav Raj" };
char ADDRESS[20][60]={"Mumbai,Maharashtra,INDIA" , "Bhopal,Madhya Pradesh,INDIA" , "Patna,Bihar,INDIA" , "Ranchi,Jharkhand,INDIA" , "Patna,Bihar,INDIA"};
char PROJECT[20][100]={"JavaScript quiz game,Login authentication" , "Android task monitoring,Optical Character Recognition using Java" , "Software piracy protection system,Bug tracker", "YouTube Graphics,Infographics", "Hardware installations,Network upgrades"};
char DEPARTMENT[20][40]={"Web Developer", "Software Developer", "Software Developer", "Graphics Developer and Designer", "IT Project Manager"};
int JOIN_DATE[20]={2020,2021,2020,2021,2020};
int SALARY[20]={12568843, 1000000, 600000, 1100000, 1000000};
int LENGTH=5, POSITION=0, ADMIN_ID=4444; //Position is to check on login user position

void verify_page()
{
    HANDLE col=GetStdHandle(STD_OUTPUT_HANDLE);  //ONLY FOR TEXT COLOUR
    system("cls");
    printf("\n");
    for(int i=0;i<=128;i++)
        printf("*");

    printf("\n");
    for(int i=0;i<=30;i++)
    {
        if(i==30/2)
        {
            printf("*");
            SetConsoleTextAttribute(col,1);     //BLUE COLOUR 
            printf("\t\t\t\t\t\t\tVerifying Please Wait...\t\t\t\t\t\t");
            SetConsoleTextAttribute(col,7);     // WHITE COLOUR (To avoid overflow of colour)
            printf("*");
            printf("\n");
        }
        for(int j=0;j<=16;j++)
        {
            if(j==0 || j==16)
            printf("*");

            printf("\t");
        }
        printf("\n");
    }

    for(int i=0;i<=128;i++)
        printf("*");
    
    Sleep(3000);  //Program pause for 3sec
}

void loading_page()
{
    HANDLE col=GetStdHandle(STD_OUTPUT_HANDLE);  //ONLY FOR TEXT COLOUR
    system("cls");
    printf("\n");
    for(int i=0;i<=128;i++)
        printf("*");

    printf("\n");
    for(int i=0;i<=30;i++)
    {
        if(i==30/2)
        {
            printf("*");
            SetConsoleTextAttribute(col,1);     //BLUE COLOUR 
            printf("\t\t\t\t\t\t\tLoading Please Wait...\t\t\t\t\t\t\t");
            SetConsoleTextAttribute(col,7);     // WHITE COLOUR
            printf("*");
            printf("\n");
        }
        for(int j=0;j<=16;j++)
        {
            if(j==0 || j==16)
            printf("*");

            printf("\t");
        }
        printf("\n");
    }

    for(int i=0;i<=128;i++)
        printf("*");
    
    Sleep(3000);  //Program pause for 3sec
}

void addition_Denied_page()
{
    HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE); //ONLY FOR TEXT COLOUR
    system("cls");
    printf("\n");
    for (int i = 0; i <= 128; i++)
        printf("*");

    printf("\n");
    for (int i = 0; i <= 26; i++)
    {
        if (i == 8)
        {
            printf("*");
            SetConsoleTextAttribute(col, 4); //RED COLOUR
            printf("\t\t\t\tSORRY YOU ARE NOT AUTHORIZED TO ADD EMPLOYEE ONLY ADMIN CAN DO\t\t\t\t\t");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("*");
            printf("\n");
        }

        if (i == 22)
        {
            printf("*\t\t");
            printf("Back : ");
            SetConsoleTextAttribute(col, 6); //YELLOW COLOUR
            printf("Press 1");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("\t\t\t\t\t\t\t\t");
            printf("Exit : ");
            SetConsoleTextAttribute(col, 6); //YELLOW COLOUR
            printf("Press 2");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("\t\t\t\t*\n");
        }
        for (int j = 0; j <= 16; j++)
        {
            if (j == 0 || j == 16)
                printf("*");

            printf("\t");
        }
        printf("\n");
    }

    for (int i = 0; i <= 128; i++)
        printf("*");

    int choice = 0;
    scanf("\n%d", &choice);
    if (choice == 1)
        return;
    else if (choice == 2)
        exit(0);
}

void Add_Employee()
{
    loading_page();
    if (ID[POSITION] != ADMIN_ID)
    {
        addition_Denied_page();
    }
    else
    {
        HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE); //ONLY FOR TEXT COLOUR
        system("cls");
        printf("\n");
        for (int i = 0; i <= 128; i++)
            printf("*");

        printf("\n\n\n");
        printf("\t\tEnter Employee Name              :  "); gets(NAME[LENGTH]); 
        printf("\t\tEnter Employee Phone No          :  "); scanf("%d",&PHONE[LENGTH]);
        printf("\t\tEnter Employee Department Name   :  "); getchar(); gets(DEPARTMENT[LENGTH]); 
        printf("\t\tEnter Employee Salary            :  "); scanf("%d",&SALARY[LENGTH]);
        printf("\t\tEnter Employee Project Name      :  "); getchar(); gets(PROJECT[LENGTH]); 
        printf("\t\tEnter Employee Address           :  "); gets(ADDRESS[LENGTH]); 
        printf("\t\tEnter Employee Joining Date      :  "); scanf("%d",&JOIN_DATE[LENGTH]);
        printf("\t\tEnter Employee PASSWORD          :  "); scanf("%d",&PASSWORD[LENGTH]);
        printf("\t\tEnter Employee ID                :  "); scanf("%d",&ID[LENGTH]);
        LENGTH++;

        printf("\n\n\n");
        for (int i = 0; i <= 128; i++)
            printf("*");

        Sleep(2000);
        verify_page();
        addition_confirmation_page();
    }
    
}

void addition_confirmation_page()
{
    HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE); //ONLY FOR TEXT COLOUR
    system("cls");
    printf("\n");
    for (int i = 0; i <= 128; i++)
        printf("*");

    printf("\n");
    for (int i = 0; i <= 26; i++)
    {
        if (i == 8)
        {
            printf("*");
            SetConsoleTextAttribute(col, 2); //GREEN COLOUR
            printf("\t\t\t\t\t***** Account Created Successfully *****\t\t\t\t\t\t");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("*");
            printf("\n");
        }

        if (i == 22)
        {
            printf("*\t\t");
            printf("Back : ");
            SetConsoleTextAttribute(col, 6); //YELLOW COLOUR
            printf("Press 1");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("\t\t\t\t\t\t\t\t");
            printf("Exit : ");
            SetConsoleTextAttribute(col, 6); //YELLOW COLOUR
            printf("Press 2");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("\t\t\t\t*\n");
        }
        for (int j = 0; j <= 16; j++)
        {
            if (j == 0 || j == 16)
                printf("*");

            printf("\t");
        }
        printf("\n");
    }

    for (int i = 0; i <= 128; i++)
        printf("*");

    int choice = 0;
    scanf("\n%d", &choice);
    if (choice == 1)
        return;
    else if (choice == 2)
        exit(0);

}

void deletion_confirmation_page()
{
    HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE); //ONLY FOR TEXT COLOUR
    system("cls");
    printf("\n");
    for (int i = 0; i <= 128; i++)
        printf("*");

    printf("\n");
    for (int i = 0; i <= 26; i++)
    {
        if (i == 8)
        {
            printf("*");
            SetConsoleTextAttribute(col, 2); //GREEN COLOUR
            printf("\t\t\t\t\t***** Account Deleted Successfully *****\t\t\t\t\t\t");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("*");
            printf("\n");
        }

        if (i == 22)
        {
            printf("*\t\t");
            printf("Back : ");
            SetConsoleTextAttribute(col, 6); //YELLOW COLOUR
            printf("Press 1");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("\t\t\t\t\t\t\t\t");
            printf("Exit : ");
            SetConsoleTextAttribute(col, 6); //YELLOW COLOUR
            printf("Press 2");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("\t\t\t\t*\n");
        }
        for (int j = 0; j <= 16; j++)
        {
            if (j == 0 || j == 16)
                printf("*");

            printf("\t");
        }
        printf("\n");
    }

    for (int i = 0; i <= 128; i++)
        printf("*");

    int choice = 0;
    scanf("\n%d", &choice);
    if (choice == 1)
        return;
    else if (choice == 2)
        exit(0);

}

void deletion_invalid_ID()
{
    HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE); //ONLY FOR TEXT COLOUR
    system("cls");
    printf("\n");
    for (int i = 0; i <= 128; i++)
        printf("*");

    printf("\n");
    for (int i = 0; i <= 26; i++)
    {
        if (i == 8)
        {
            printf("*");
            SetConsoleTextAttribute(col, 4); //RED COLOUR
            printf("\t\t\t\t\t\t***** ID NOT FOUND *****\t\t\t\t\t\t\t");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("*");
            printf("\n");
        }

        if (i == 20)
        {
            printf("*");
            SetConsoleTextAttribute(col, 6); //YELLOW COLOUR
            printf("\t\t\t\t\t\tPLEASE ENTER CORRECT ID \t\t\t\t\t\t\t");
            SetConsoleTextAttribute(col, 7); // WHITE COLOUR (To avoid overflow of colour)
            printf("*");
            printf("\n");
        }
        
        for (int j = 0; j <= 16; j++)
        {
            if (j == 0 || j == 16)
                printf("*");

            printf("\t");
        }
        printf("\n");
    }

    

    for (int i = 0; i <= 128; i++)
        printf("*");    

}

void Delete_Data_Int(int a[], int pos)
{
    for(int i=pos; i<LENGTH-1; i++)
        a[i]=a[i+1];
}

void Delete_Data_String(int pos)
{
    
    for(int i=pos;i<LENGTH;i++)
        strcpy(NAME[i],NAME[i+1]);

    for(int i=pos;i<LENGTH;i++)
        strcpy(ADDRESS[i],ADDRESS[i+1]);

    for(int i=pos;i<LENGTH;i++)
        strcpy(PROJECT[i],PROJECT[i+1]);

    for(int i=pos;i<LENGTH;i++)
        strcpy(DEPARTMENT[i],DEPARTMENT[i+1]);
    
}

void Deletion_Employee()
{
    if (ID[POSITION] != ADMIN_ID)
    {
        addition_Denied_page();  
    }
    else
    {
        int employee_id;
        HANDLE col = GetStdHandle(STD_OUTPUT_HANDLE); //ONLY FOR TEXT COLOUR
        system("cls");
        printf("\n");
        for (int i = 0; i <= 128; i++)
            printf("*");

        printf("\n\n\n\n\n");
        printf("\t\t\t\t\t\tEmployee Details To Remove Record\n"); 
        printf("\n\n\n\n");
        printf("\t\t\t\t\t\t  Enter Employee ID : "); scanf("%d",&employee_id);
        

        printf("\n\n\n\n\n\n\n\n\n\n\n\n");
        for (int i = 0; i <= 128; i++)
            printf("*");

        bool flag=false;
        int i;
        for(i=0;i<LENGTH;i++)
        {
            if(employee_id==ID[i])
            {
                flag=true; 
                break;
            }
        }
        if(flag)
        {
            Delete_Data_Int(ID , i);
            Delete_Data_Int(PASSWORD , i);
            Delete_Data_Int(JOIN_DATE , i);
            Delete_Data_Int(SALARY , i);
            Delete_Data_String(i);
            Sleep(2000);
            verify_page();
            deletion_confirmation_page();
            LENGTH--;
        }
        else
        {
            deletion_invalid_ID();
            Sleep(3000);
            Deletion_Employee();
        }
    }
    
}


int main()
{
    POSITION=3;
    Deletion_Employee();
    return 0;
}

