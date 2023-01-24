#pragma once

/**
 * Print an integer with a description to the standard output.
 * 
 * Example usage:
 *  dhbw_print_integer("my integer", 25);
 * 
 * @param description a formal description of the number to be printed
 * @param v the actual integer value
 */
void dhbw_print_integer(const char* description, long long v);

/**
 * Print a single line of text to the standard output.
 * 
 * Example usage:
 *  dhbw_print_line("this is very important!");
 * 
 * @param text the line of text to print
 */
void dhbw_print_line(const char* text);

/**
 * Print a floating point number with a description to the standard output.
 * 
 * Example usage:
 *  dhbw_print_float("my bmi is", 6.9);
 * 
 * @param description a formal description of the number to be printed
 * @param v the actual float value
 */
void dhbw_print_float(const char* description, double v);
