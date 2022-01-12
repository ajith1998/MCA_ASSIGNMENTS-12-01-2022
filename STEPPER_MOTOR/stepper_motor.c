#include <LPC213X.h>

void delay();
int i;
//unsigned char dir_fl;

int main()
{
		IODIR0 = 0XFFFFFFFF;//setting the direction of pins as Output
		//dir_fl = 0;   
	
		while(1)
		{
			//if(dir_fl == 0)  //This if can be used when we like to change the direction of rotation in the motor
			//{
				IOSET0 = 0x3;//0011 coil is energized in this 
				delay();
				IOCLR0 = 0x3;
				
				IOSET0 = 0x6;//0110 coil is energized in this
				delay(); 	
				IOCLR0 = 0x6;
				
				IOSET0 = 0xC;//1001 coil is energized in this
				delay();
				IOCLR0 = 0xC;
				
				IOSET0 = 0x9;//1100 coil is energized in this
				delay();
				IOCLR0 = 0x9;				
			//}

			
			/*else if(dir_fl == 1)  //This is the code for running the motor in reverse direction
			{
				IOSET0 = 0x9;
				delay();
				IOCLR0 = 0x9;	

				IOSET0 = 0xC;
				delay();
				IOCLR0 = 0xC;

				IOSET0 = 0x6;
				delay(); 	
				IOCLR0 = 0x6;

				IOSET0 = 0x3;
				delay();
				IOCLR0 = 0x3;				
			}	*/
		}
}

void delay()
{
	for(i=0; i<=5000;i++)
		for(i=0; i<=150000; i++);
	
}