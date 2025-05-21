#include "lcd.h"
#include "keypad.h"
#include <util/delay.h>
int main(void)
{
	unsigned char key;
	float number1 = 0, number2 = 0;
	float result = 0;
	char operation = 0;
	LCD_init();
	LCD_displayStringRowColumn(0, 3,"Calculator");
	_delay_ms(1000);
	LCD_clearScreen();

	while(1)
	{
		key = KEYPAD_getPressedKey();

		if ( (key >= 0 ) && (key <= 9) )
		{
			LCD_intgerToString(key);
			number2 = (number2*10) + key;
		}

		else if (key == '+' || key == '-' || key == '*' || key == '/')
		{
			operation = key;
			LCD_displayCharacter(operation);
			number1 = number2;
			number2 = 0;
		}

		else if (key == '=')
		{
			switch (operation)
			{
			case '+':
				LCD_moveCursor(1,0);
				result = number1 + number2;
				LCD_floatToString(result);
				break;
			case '-':
				LCD_moveCursor(1,0);
				result = number1 - number2;
				LCD_floatToString(result);
				break;
			case '*':
				LCD_moveCursor(1,0);
				result = number1 * number2;
				LCD_floatToString(result);
				break;
			case '/':
				if (number2 != 0)
				{
					LCD_moveCursor(1,0);
					result = number1 / number2;
					LCD_floatToString(result);

				}
				else
				{
					LCD_displayStringRowColumn(0 , 0 ,"Math Error");
					continue;
				}
				break;
			default:
				LCD_moveCursor(1,0);
				LCD_displayString("NO Operation");
				break;
			}
		}

		else if (key == 'c')
		{
			LCD_clearScreen();
			number1 = 0;
			number2 = 0;
			result = 0;
		}

		_delay_ms(500);
	}
}
