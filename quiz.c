#include <stdio.h>

void quiz()
{
    int score = 0;
    char n;

    printf("Welcome to the quiz game!\n");
    printf("Question 1 :In which category belongs the C programming language? \n");
    printf("A) Compiled language \nB) Interpreted language\n");
    scanf("%c", &n);
    if (n == 'A')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }
    
    printf("Question 2: What is the largest planet in our solar system?\n");
    printf("A) .hpp\nB) .ch\nC) .h\n");
    scanf("%c", &n);
    if (n == 'C')
    {
        printf("Correct!\n");
        score++;
    }
    else 
    {
        printf("Wrong!\n");
    }
    printf("Question 3: We declare the following variable int arr[5];?\n");
    printf("A) arr + 2\nB) *arr + 2\nC) *(arr + 2)\n");
    scanf("%c", &n);
    if (n == 'C')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }
    printf("Question 5: Is it possible to declare a pointer to a pointer?\n");
    printf("A) yes\nB) no\nC) It depends on the type the pointer is pointing to\n");
    scanf("%c", &n);
    if (n == 'A')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }
      printf("Question 6: What is the size of a pointer to an int (on a 64-bit architecture)?\n");
      printf("A) 8 bytes\nB) 4 bytes\nC) 1 bytes\n");
      scanf("%c", &n);
      if (n == 'A')
      {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }
    printf("Your score is: %d out of 6\n", score);
}
int main(void)
{
   quiz();
   return 0;
}
