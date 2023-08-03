#ifndef MAIN_H
#define MAIN_H

int get_endianness(void);
void print_binary(unsigned long int n);
int clear_bit(unsigned long int *n, unsigned int index);
int _atoi(const char *s);
unsigned int binary_to_unit(const char *b);
int _putchar(char c);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int*n, unsigned int index);

#endif

