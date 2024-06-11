gcc str_to_hex.c -o str_to_hex

-h -> hex to string
-hr -> hex to string revers


exemple:
str_to_hex hello_world
->
    0x6f775f6f6c6c6568
    0x646c72

or

./str_to_hex -h 646c726f775f6f6c6c6568
->
    hello_world