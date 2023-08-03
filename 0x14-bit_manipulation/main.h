#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

/* Task 0: Binary to Unsigned Int */
unsigned int binary_to_uint(const char *b);

/* Task 1: Print Binary */
void print_binary(unsigned long int n);

/* Task 2: Get Bit */
int get_bit(unsigned long int n, unsigned int index);

/* Task 3: Set Bit to 1 */
int set_bit(unsigned long int *n, unsigned int index);

/* Task 4: Clear Bit to 0 */
int clear_bit(unsigned long int *n, unsigned int index);

/* Task 5: Flip Bits */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Task 6 */
int get_endianness(void);

#endif /* MAIN_H */

