
//library to use altera i/o functions
#include "sys/alt_stdio.h"

//library to use altera variable types
#include "alt_types.h"

//library to get all hardware definitions
#include <system.h>
//C standard libraries
//library that has the definition of pio functions
#include "altera_avalon_pio_regs.h"

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>


int speedCheck(alt_u8 sp){
	if(sp == 0x0)
		return 12500;
	return 30000;
}

alt_u8 hex_decoder (alt_u8 input) {
   switch(input) {
   case 0:  return 0x0000001;
   	   break;
   case 1:  return 0b0110000;
   	   break;
   case 2:  return 0b1101101;
   	   break;
   case 3:  return 0b1111001;
	   break;
   case 4:  return 0b0110011;
       break;
   case 5:  return 0b1011011;
       break;
   case 6:  return 0b1010000;
       break;
   case 7:  return 0b1110000;
       break;
   case 8:  return 0b1111111;
       break;
   case 9:  return 0b1111011;
       break;
   case 10: return 0b1110111;
   break;
   case 11: return 0b0011111;
   break;
   case 12: return 0b1001110;
   break;
   case 13: return 0b0111101;
   break;
   case 14: return 0b1001111;
   break;
   case 15: return 0b1000111;
   break;
   default: return 0b0000001;
   }
}


int main()
{
  alt_putstr("Project2 - CSCE 313\n");

  // declare the mode variable as alt_u8 and initialize with 0x0
  alt_u8 mode = 0x00;
  alt_u8 hexInput = 0x00;
  alt_u8 speed = 0x00;
  // declare the counter variable as alt_u8 and initialize with 0x0

  alt_u8 counter = 0x0;

  // declare the random variable as alt_u8 and initialize with 0x0

  alt_u32 random1= 0x0;
  alt_u32 random2= 0x0;

  // declare number of random patterns as int. You can initialize it with any number you wish

 int numRand = 100;

  /* Event loop never exits. */
  while (1){


	// read the mode values from system_modes using the function: IORD_ALTERA_AVALON_PIO_DATA
	mode = IORD_ALTERA_AVALON_PIO_DATA(SYSTEM_MODES_BASE);




	// check If the mode is 1 so all LEDs must light up
		if(mode == 0x1){
			alt_putstr("LEDs light \n");

			// Example to how light pattern_Base LEDs. Do the same to light other leds
			IOWR_ALTERA_AVALON_PIO_DATA(RANDOM_PATTERN_BASE, 0x3FFFF);
			IOWR_ALTERA_AVALON_PIO_DATA(SYSTEM_COUNTER_BASE, 255);
			while(mode == 0x1){
				mode = IORD_ALTERA_AVALON_PIO_DATA(SYSTEM_MODES_BASE);
				hexInput = IORD_ALTERA_AVALON_PIO_DATA(BCD_INPUT_BASE);
				speed = IORD_ALTERA_AVALON_PIO_DATA(SPEED_CONTROLLER_BASE);
				//decode
				IOWR_ALTERA_AVALON_PIO_DATA(SEGMENT4_BASE, hex_decoder(hexInput));
				usleep(speedCheck(speed));


			}




		}


	 // check if the mode is 2 so system counter starts counting
		if(mode == 0x2) {
				alt_putstr("System counter \n");

				// First, reset all LEDs as shown in the example below
		  	  	IOWR_ALTERA_AVALON_PIO_DATA(SYSTEM_COUNTER_BASE, 0x00);

				// Counter starts counting from 0 (0x00) to 255 (0xFF)
				for(int i=0; i<256; i++){

					// always keep checking If the mode values changed. If mode changes, break the loop. See the below code
					mode = IORD_ALTERA_AVALON_PIO_DATA(SYSTEM_MODES_BASE);
					speed = IORD_ALTERA_AVALON_PIO_DATA(SPEED_CONTROLLER_BASE);
					if(mode != 0x2) break;

					// display the counter value onto the system-counter LEDs using IOWR_ALTERA_AVALON_PIO_DATA
					IOWR_ALTERA_AVALON_PIO_DATA(SYSTEM_COUNTER_BASE, counter);
					IOWR_ALTERA_AVALON_PIO_DATA(SEGMENT0_BASE, hex_decoder(counter & 0x00001111));
					IOWR_ALTERA_AVALON_PIO_DATA(SEGMENT1_BASE, hex_decoder(counter >> 4));
					// increment counter by 1
					counter= counter+0x1;

					// time the display period of each counter value using usleep()
					usleep(speedCheck(speed));


				}
		}


	// check if the mode is 3 so random pattern starts
	 if(mode == 0x3){
		 alt_putstr("Random pattern \n");
				// First, reset all LEDs as shown in the example below
		 IOWR_ALTERA_AVALON_PIO_DATA(RANDOM_PATTERN_BASE, 0x0000);




		 for(int i=0; i<numRand; i++){
			 mode = IORD_ALTERA_AVALON_PIO_DATA(SYSTEM_MODES_BASE);
			 speed = IORD_ALTERA_AVALON_PIO_DATA(SPEED_CONTROLLER_BASE);
			 if (mode != 0x3) break;
			 random1 = rand() % (262143 - 0 + 1);
			 random2 = rand() % (0xFE - 0 + 1);
			 IOWR_ALTERA_AVALON_PIO_DATA(RANDOM_PATTERN_BASE, random1);
			 IOWR_ALTERA_AVALON_PIO_DATA(SEGMENT2_BASE, hex_decoder(random2 & 0x00001111));
			 IOWR_ALTERA_AVALON_PIO_DATA(SEGMENT3_BASE, hex_decoder(random2 >> 4));
			 usleep(speedCheck(speed));
		 }

	 }

}
  return 0;
}
