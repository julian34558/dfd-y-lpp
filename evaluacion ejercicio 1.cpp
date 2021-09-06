#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <io.h>
#include <fcntl.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string>
#include <iostream>
using namespace std;

int i, j;
void main() {
	cprintf(" **************************tablas de multiplicacion************************* ");
	cprintf("\r\n");
	cprintf(" ***************************desde el 2 hasta el 10*************************** ");
	cprintf("\r\n");
	i = 2;
	j = 1;
	while (i <= 10) {
		for(i = 2; i <= 10; i++){
			cprintf(" **** la tabla del  %d es ****", i);
			cprintf("\r\n");
			cprintf("\r\n");
			for(j = 1; j <= 10; j++){
				cprintf("%dx%d es: %d", i, j, i * j);
				cprintf("\r\n");
			}
			cprintf("\r\n");
		}
	}
}
