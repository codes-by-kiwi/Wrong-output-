/* Fix the program below such that it prints the correct result. 
Why does the program print "The result is -1073745604" (Values will vary)?
Write your explanation 

Program:
#include <stdio.h>
int main() {
    int result;
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n");
    return 0;
}

*/ 


#include <stdio.h>
int main() {
    int result;
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
/* You have to specify the result at the end of the printf function.
This way it gives the right answer which is 27.
Otherwise the computer will assign garbage values because %d can mean anything. */
    return 0;

}
