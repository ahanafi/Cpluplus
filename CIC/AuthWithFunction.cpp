#include <conio.h>
#include <stdio.h>
#include <string.h>

void line()
{
	printf("=================================== \n");
}

void Welcome()
{
	line();
   printf("        HALO! \n");
   line();

   printf("\nAnda berhasil Login! \n");
}

void Auth(char *user, int pass)
{
	if ( (strcmp(user, "admin") == 0) && (pass == 123456) ) {
   	Welcome();
   } else {
   	clrscr();
      printf("\aMaaf username/password Anda salah! \n");
   }
}

main()
{
	char username[50];
   int password;

   printf("Username : ");
   scanf("%s", &username);

   printf("Password : ");
   scanf("%d", &password);

   Auth(username, password);
   getch();

}