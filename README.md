# Calculator Project – Microprocessor Course

This project is developed as part of the **Microprocessor course** and implements a simple calculator on a microcontroller. The calculator receives input via a 4x4 keypad and displays results on a 16x2 LCD.

##  Purpose

To design and implement a basic embedded calculator capable of performing arithmetic operations using low-level C programming on a microcontroller.

##  Project Structure

```
ProjectCalculator/
├── main.c                  # Main application logic
├── lcd.c/.h               # LCD driver functions
├── keypad.c/.h            # Keypad scanning logic
├── gpio.c/.h              # General-purpose I/O abstraction
├── std_types.h            # Common data type definitions
├── common_macros.h        # Useful macros for bit operations
├── *.cproj / *.xml        # Project configuration files
├── Debug/                 # Build artifacts and object files
```

##  Features

- Input via 4x4 matrix keypad
- Display output on LCD
- Supports basic operations: Addition, Subtraction, Multiplication, Division
- Modular, well-organized code suitable for academic and learning purposes

##  Requirements

- AVR microcontroller (e.g., ATmega32)
- LCD 16x2 module
- 4x4 matrix keypad
- Embedded C compiler (e.g., AVR-GCC)
- Microcontroller programmer (e.g., USBasp)

##  Getting Started

1. Open the project in a compatible IDE (e.g., Atmel Studio).
2. Connect the hardware according to the pin definitions in `gpio.c`.
3. Compile and flash the firmware to your microcontroller.
4. Use the keypad to enter numbers and operations.
5. The result will be shown on the LCD.

##  Authors

- Mobina Massah
- Zahra Naderi

##  License

This project is for educational use and can be freely modified or extended.
