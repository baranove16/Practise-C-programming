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