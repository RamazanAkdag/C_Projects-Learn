#include <stdio.h>
#include <stdlib.h>
union test{
char a;
int x;
float y;
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	union test t;
	
	t.x = 5;
	t.y = 12.5;



	printf("uynionun kapladigi alan %d byte",sizeof(t));
		
	return 0;
}
