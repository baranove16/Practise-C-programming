#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct login{
    char username[30];
    char password[20];
}l;

void registration(void);
void login(void);
void unsuccessful_login(void);
void openfile(void);

int main()
{
    
    login();
    
    return 0;
}

//first function to be called, asks for username and password input, if username and password matches "pre-existing" account, user accesses
//file.txt
//if user inputs wrong username or password, unsuccessful_login() function is called
void login(void)
{
    printf("\nWelcome!\n");
    printf("Username: ");
    scanf("%s", l.username);

    printf("Password: ");
    scanf("%s", l.password);

    if (strcmp(l.username, "baranove16")==0 && strcmp(l.password, "1234abcd") == 0)
     {
        printf("\nSuccessful Login!\n");

        openfile();
     }
     else {printf("\nUnsuccessful login.");
            unsuccessful_login();}


}
//function that gives user option to login or register
void unsuccessful_login(void)
{
  char option[20];
            printf("\nLogin or register: ");
            scanf("%s", option);

            if (strcmp(option, "register") == 0)
             { registration(); }

            if (strcmp(option, "login")== 0)
             { login();}
    printf("\n");
}
//function that allows user to create an account, by creating a username and password
void registration(void)
{
    printf("\nRegistration\n");
    
    printf("Create username: ");
    scanf("%s", l.username);
    printf("Create password: ");
    scanf("%s", l.password);

    char password[20];
    printf("Re-enter password: ");
    scanf("%s", password);
//if re-entered password does not match initial password input, user will be asked to re-enter password again until it matches
   for (int i = 0; i < 20; i++)
   {
        if (strcmp(l.password, password)==0)
       {  printf("\nSuccessful registration!\n");
          openfile();
         break; }
        if (strcmp(l.password, password)!=0)
       {  printf("**Password does not match**Re-enter password: ");
          scanf("%s", password); }
     
    }  

}
//function that opens file.txt and shows all written content
void openfile(void)
{
    FILE *openfile;
        int i;

        openfile = fopen("file.txt", "r");
        while(1)
        {
            i = fgetc(openfile);
            if (feof(openfile)) {break;}
            printf("%c", i);
        }
        fclose(openfile);
    printf("\n");
}
