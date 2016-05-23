/*
 Sumotoy universal Icon Description structure version 1.3
*/

#ifndef __SUMOTOY_ICON_H
	#define __SUMOTOY_ICON_H
	
	#include <stdio.h>
	
	#if defined(_FORCE_PROGMEM__)
		typedef struct PROGMEM {
			const uint8_t 	*data;//B&W
			uint8_t 		image_width;
			uint8_t			image_height;
			uint16_t		image_datalen;
			boolean			image_comp;
		} tIcon;
	#else
		typedef struct {
			const uint8_t 	*data;//B&W
			uint8_t 		image_width;
			uint8_t			image_height;
			uint16_t		image_datalen;
			boolean			image_comp;
		} tIcon;
	#endif
	
#endif