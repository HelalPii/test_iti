# include<stdio.h>
#define u8 char 
typedef struct {
	
	u8 bit0:1;
	u8 bit1:1;
	u8 bit2:1;
	u8 bit3:1;
	u8 bit4:1;
	u8 bit5:1;
	u8 bit6:1;
	u8 bit7:1;
	
	
}regs_t;

typedef union{
	regs_t r;
	u8 byte;
}regu_t;

void main(void)
{
	regu_t rr;
	rr.byte=0xff;
	rr.r.bit0=0;
	
	//printf("%x",rr.byte);
	printf("%d",sizeof(regs_t));
	


	
	




}