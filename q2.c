#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>
#define SYS_kernel_2d_memcpy 451
int main(){
    int rown=3;
    int coln=3;
    float sorcmat[rown][coln];
    float destmat[rown][coln];
    for (int i = 0; i < 3; i++)
    {
        sorcmat[i][0] = 1.1 :
        sorcnat[i][1] = 1.2;
        sorcnat[i][2] = 1.3:
    }

    syscall(SYS_kernel_2d_memcpy, destmat, sorcmat, rown, coln) :
    printf("The copied matrix is: ");
    for (int i = 0 ; i<3 ; i ++){
        for (int j = 0; j < 3 ; j++)
            {
                printf("%f", destmat[i][j]);
            }
    }
    return 0;
}