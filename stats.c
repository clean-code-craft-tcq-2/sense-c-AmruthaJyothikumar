#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    // Average
    sum = 0;
    for( int i = 0; i < setlength; i++ ){
        sum += numberset[i];
    }
    s.average = sum /setlength;
    
    //Max
    
    
    //Min
    
}
    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void main()
{
   
    
}
