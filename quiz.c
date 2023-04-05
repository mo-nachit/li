#include <stdio.h>

void quiz()
{
    int score = 0;
    char n;

    printf("Welcome to the quiz game!\n");
    printf("Question 1 :In which category belongs the C programming language? \n");
    printf("A) Compiled language \nB) Interpreted language\n");
    scanf(" %c", &n);
    if (n == 'A')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }
    
    printf("Question 2: If we have a variable called var of type int, how can we get its address in memory\n");
    printf("A) *var\nB) *(var)\nC) &var\n");
    scanf(" %c", &n);
    if (n == 'C')
    {
        printf("Correct!\n");
        score++;
    }
    else 
    {
        printf("Wrong!\n");
    }
    printf("Question 3: int arr[5] ;What is the equivalent of typing arr[2]?\n");
    printf("A) arr + 2\nB) *arr + 2\nC) *(arr + 2)\n");
    scanf(" %c", &n);
    if (n == 'C')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }
    printf("Question 4: Is it possible to declare a pointer to a pointer?\n");
    printf("A) yes\nB) no\nC) It depends on the type the pointer is pointing to\n");
    scanf(" %c", &n);
    if (n == 'A')
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }
      printf("Question 5: What is the size of a pointer to an int (on a 64-bit architecture)?\n");
      printf("A) 8 bytes\nB) 4 bytes\nC) 1 bytes\n");
      scanf(" %c", &n);
      if (n == 'A')
      {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong!\n");
    }
    printf("Your score is: %d out of 5\n", score);
}
int main(void)
{
   quiz();
   return 0;
}
