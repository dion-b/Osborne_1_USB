# Osborne_1_USB
Using a Teensy to hook an Osborne (Variant) 1 keyboard to modern systems via USB

Teensy (Arduino) sketch project to connect an Osborne (Variant) 1 keyboard to a modern system using a Teensy microcontroller.

Requirements
-Teensy++ 2.0 or compatible microcontroller board
-Osborne 1 keyboard row pins A0-A7 connected to Teensy pins 38-45 (Note- I follow the order of the pins in the connector, not the odd order in Osborne documentation)
-Osborne 1 keyboard column pins D0-D7 connected to Teensy pins 10-17

osborne1.0.ino is a simple implementation of all 56 keys of the keyboard via USB HID
osborne1.1.ino uses Caps Lock to remap Del to Esc, Backspace to Tab and Alt to Ctrl

Status is that is more or less works, but crudely, particularly Caps Lock is problematic.

Note that this is my first programming excercise in decades, and my first in Sketch/C++ ever, so it's not elegant or efficient.
Constructive criticsm is welcome, but please keep it simple...
