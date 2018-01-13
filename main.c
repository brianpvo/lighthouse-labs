//
//  main.c
//  FizzBizz
//
//  Created by Brian Vo on 2018-01-12.
//  Copyright © 2018 Brian Vo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int arraySize = 100;
    int arrayStart = 1;
    
    for (int i = arrayStart; i <= arraySize; i++) {
        
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        else {
            printf("%d\n", i);
        }
        
    }
    return 0;
}
