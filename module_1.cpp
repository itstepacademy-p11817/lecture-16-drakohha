#include "module_1.h"


void fun_test(long long int dlina, long long int a[], long int b[],long long int pos[]) {
	
	

	for (long long int i = 0; i < dlina; i++) {
		if (b[0] == a[i] && b[1] == a[i + 1]) {
			pos[i] = i;
			
		}
		
	}

	

}