#include <stdarg.h>
#include "main.h"
#include <stdio.h>
​
/**
 * _puts - prints a string
 * _printf - prints anything
 * @format: the format string
 *
 * Return: the number of characters printed
 */
​
int _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
​
int _printf(const char *format, ...){
  int count = 0;
  int i = 0;
​
  va_list data; 
  va_start(data, format);
​
  while(format[i]) 
  {
	 while(format[i] == '%')
          {
                  switch(format[i + 1])
                  {
                          case 'c':
                                  count += _putchar(va_arg(data, int));
                                  i += 2;
                                  break;
			  case 's':
				  count += _putchar(_puts(va_arg(data, char *)));
				  i += 2;  
				  break; 
                          default:
                                 _putchar(format[i]);
				 _putchar(format[i]);
			 	i += 2;
                 }
          }
​
​
  if(format[i])
	{
		_putchar(format[i]);
		count++;
	}
	i++;
  } 
​
  return(count);
}
