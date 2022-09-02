#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct {
	int E;
}D;
typedef struct {
	D d[2];
	D x;
}C;
typedef struct {
	C c;
}B;

typedef struct {
	B *(b_t[4]);
}A;


int main() {
A a;
B b;

a.b_t[3]=&b;

a.b_t[3]->c.d[0].E=13;
printf("%d",a.b_t[3]->c.d[0].E);

        return 0;
}
