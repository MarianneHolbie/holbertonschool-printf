# Creating a printf function like in C

## DESCRIPTION

This repository contains all file for a hand made function printf like, requested by Holberton School for the first group project.
**GOAL** made an implementation of the **printf standard function** and **variadic function**.
This fonction "printf like" receive a format (_const char *format_) and a list of arguments. The main function search behind the string format a specific pattern composed of % and some specfic letters. If the pattern is found, the argument is passed to other function that prints the match in rigth format.

## PREREQUISITES

All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`

## OPTIONS AVAILABLE
All the follow sub fonction for each different type of % :
* `pr_s` prints a string
* `pr_c` prints a char
* `pr_p` prints a pourcentage
* `pr_di` print decimal or integer
=========================================================================================================================================

## File description
* main.h is the library that holds the structure to compare the input to the functions, and the prototypes of function

* \_printf.c is the file where is created the printf like function, it permits to call the subfunctions depanding on what's found in the input

* \_printf_func.c is the file where all subfunction are detailled.

=======================================================================================================================
## Flowcharts 
To understant our construc, see the flowchart associated for the main function (\_printf.c) and the subfonction (\_printf_func.c)

### Function \_printf.c
![Main function](https://github.com/MarianneHolbie/holbertonschool-printf/blob/57401e560b26d8481a2b6258c63db755d7bb3656/printf-MM-Vue%20d'ensemble.jpg)

### Function pr_c
![pr_c](https://github.com/MarianneHolbie/holbertonschool-printf/blob/9985ae3c1becdae15ddbcd2ec8d810a24d1eaf0b/printf-MM-pr_c.jpg)

### Function pr_s
![pr_s](https://github.com/MarianneHolbie/holbertonschool-printf/blob/9985ae3c1becdae15ddbcd2ec8d810a24d1eaf0b/printf-MM-pr_s.jpg)

### Function pr_p
![pr_p](https://github.com/MarianneHolbie/holbertonschool-printf/blob/9985ae3c1becdae15ddbcd2ec8d810a24d1eaf0b/printf-MM-pr_p.jpg)

### Function pr_di
![pr_di](https://github.com/MarianneHolbie/holbertonschool-printf/blob/9985ae3c1becdae15ddbcd2ec8d810a24d1eaf0b/printf-MM-pr_di.jpg)

### Function pr_intmin
![pr_intmin](https://github.com/MarianneHolbie/holbertonschool-printf/blob/9985ae3c1becdae15ddbcd2ec8d810a24d1eaf0b/printf-MM-pr_intmin.jpg)

___________________________________________________________________________________________________________________________
## Authors ©️
* **Marianne Arrué**
* **Marine Dehaye**
