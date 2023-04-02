// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int score = 0;
    char n;
    printf("Welcome to the quiz game!\n");
    printf("Question 1 :In which category belongs the C programming language? \n");
    printf("A) Compiled language \nB) Interpreted language\n");
    scanf("%c", &n);
    if(n == 'A'){
        printf("Correct!\n");
        score++;
    }
    else{
        printf("Wrong!\n");
    }
    
    printf("Question 2: What is the largest planet in our solar system?\n");
    printf("A) .hpp\nB) .ch\nC) .h\n");
    scanf(" %c", &n);
    if (n == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    printf("Question 3: Which command can be used to compile a C source file\n");
    printf("A) c-compiler\nB) bash\nC) gcc\n");
    scanf(" %c", &n);
    if (n == 'C') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    printf("Question 4: What is the common extension for a C source file\n");
    printf("A) .txt\nB) .c\nC) .cpp\n");
    scanf(" %c", &n);
    if (n == 'B') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    
   
      printf("Your score is: %d", score);
    return 0;
}
