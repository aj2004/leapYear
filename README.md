# leapYear
This C library will return if a given year is a leap year or not.

by aj2004

Original   : October 5, 2019

Last update: October 5, 2019

This library is pretty self-explanatory and is nothing new.
Simply include the header file, then the function leapYear(int) may be called to return a bool.

Note: if your compiler doesn't support the 'bool' type, just change it to a 'char' or 'int'.

------
## Usage

1. Call the function:
    
  `bool x = leapYear ( rtc.year() );`
  
  `int  isLeap = leapYear(2020); // 'isLeap' is set to 1`

  `int  isLeap = leapYear(2021); // 'isLeap' is set to 0`
