#include <stdio.h>
#include "awk_sem.h"

main() {
    int i = 0 ;
    // *** Please insert proper semaphore initialization here
    int semidA = create_sem(".",'A',2);
    int semidB = create_sem(".",'B',0);
    int semidC = create_sem(".",'C',0);
    int semidD = create_sem(".",'D',0);
    do {
        // *** this is where you should place semaphore 
       P(semidA);
       V(semidC);
       P(semidA);
       printf("P1111111111 is here\n"); i++;
       
       // *** this is where you should place semaphore
	V(semidB);
   	
    }  while (i < 100) ;
}
