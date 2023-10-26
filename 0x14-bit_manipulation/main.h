#ifndef __MAIN_H__
#define __MAIN_H__

/*
 * File: main.h
 * Desc: Header File that has all Prototypes of all func
 * Created: 26 of october, 2023
 * Auth: Elizabeth  Sharon Zimba
 * Size: undefined
 * Project: alx-low_level_programming
 * Status: submitted
 */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
