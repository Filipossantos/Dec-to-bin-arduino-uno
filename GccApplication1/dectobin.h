/*
 * IncFile1.h
 *
 * Created: 2021-07-27 14:58:53
 *  Author: Filip Michalski
 */ 


#ifndef INCFILE1_H_
#define INCFILE1_H_

void dectobin(int decnumber)
{
	DDRB |= (decnumber<<0);
	while (1)
	{
		
		PORTB |= (decnumber<<0);
		
	}
}


#endif /* INCFILE1_H_ */
