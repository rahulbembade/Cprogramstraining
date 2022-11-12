
#include <stdio.h>
#include<time.h>
#include <unistd.h> 
double time_spent=0.0;
int main() {
    char s1[100], s2[100], i;
    clock_t begin=clock();
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    clock_t end =clock();
  time_spent+=(double)(end-begin)/(CLOCKS_PER_SEC/1000);
  printf("The elapsed time is %f seconds",time_spent);
    return 0;
}
