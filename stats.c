#include "stats.h"	

	struct Stats s;

	struct Stats compute_statistics(const float* numberset, int setlength) {
	    struct Stats s;
	    s.average = 0;
	    s.min = 0;
	    s.max = 0;
        
	    //Avg, Min, Max
	    float max = numberset[0], min = numberset[0], sum = 0;
	    for(int i = 1; i < setlength; i++){
	    sum += numberset[i];
	    if(numberset[i] > max) 
	        max = numberset[i];
	    if(numberset[i] < min)
	        min = numberset[i];
	    } 
        
	    sum += numberset[0];
	    s.average = sum /setlength;
	    s.min = min;
	    s.max = max; 
        
	return s;
	}

