#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
  printf("Hello !\n");
  printf("You entered the program with %d arguments.\n", argc);
 
  int x = 0;
  for (x = 0; x < argc; x++) {
    printf("%s\n\n", argv[x]);
  }

  printf("Now, please, enter your name.\n");

  char name[256];

  scanf("%s", name);

  printf("\nOk, so your name is : %s.\n",name);

  int choice = -1;

  system("pause");

  do {
    system("cls");

    printf("=== MENU ===\n\n");
    printf("Hello : 0\n");
    printf("Hallo : 1\n");
    printf("Salut : 2\n");
    printf("привет : 3\n\n");
    printf("To go : 4\n\n");

    scanf("%d", &choice);

    system("pause");
    system("cls");

    switch(choice) {
      case 0:
        printf("Hello %s !\n\n", name);
        break;
      case 1:
        printf("Hallo %s !\n\n", name);
        break;
      case 2:
        printf("Salut %s !\n\n", name);
        break;
      case 3:
        printf("привет %s !\n\n", name);
        break;
      default:
        break;
    }

    system("pause");
  } while (choice != 4);

  printf("\nOk, it's your time to go.\n\n");

  return 0;
}
