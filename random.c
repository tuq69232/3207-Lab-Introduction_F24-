#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randchar(){
    
    rand() % (122 - 97 + 1) + 97;
    //rand() % ('z' - 'a' + 1) + 'a';

}