#IACA Model example (needs utilities.c)
run: IACA.c utilities.c
	gcc -Wall -o run IACA.c -O2 -lm

