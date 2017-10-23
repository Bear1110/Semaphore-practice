#include <stdio.h>
#include "awk_sem.h"

main() {
    int i = 0 ;
    // *** please insert proper semaphore initialization here
    int   semidA = get_sem(".",'A');
    int   semidB = get_sem(".",'B');
    int   semidC = get_sem(".",'C');
    int   semidD = get_sem(".",'D');
    
    do {
        // *** this is where you should place semaphore 
       P(semidC);
       P(semidD);
       printf("P3333333 is here\n"); i++ ;
       // *** this is where you should place semaphore
	V(semidA);
   
    }  while (i< 200);
}
