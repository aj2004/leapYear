/* leapYear.cpp - Library Source file
 *
 * by Kevin W. <aj2004@shaw.ca>
 *
 *
 * This library will allow a PWM pin to be gradually
 * changed to a different 8-bit value over a given
 * length of time.
 * 
 */

#include "leapYear.h"

bool leapYear (unsigned int year){
    if ((year % 4) != 0){ return false; }
    else if ((year % 100) != 0){ return true; }
    else if ((year % 400) == 0){ return true; }
    else { return false; }
}
