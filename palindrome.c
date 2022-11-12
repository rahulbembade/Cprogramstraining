#include <stdio.h>
#include<time.h>
#include <unistd.h> 
double time_spent=0.0;
int main() {
  int n, reversed = 0, remainder, original;
   clock_t begin=clock();
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
clock_t end =clock();
  time_spent+=(double)(end-begin)/(CLOCKS_PER_SEC/1000);
  printf("The elapsed time is %f seconds",time_spent);
    return 0;
}
