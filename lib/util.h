#ifndef ZMAP_UTIL_H
#define ZMAP_UTIL_H

#include <stdio.h>
#include <stdint.h>

#include "types.h"

int max_int(int a, int b);

// Splits comma delimited string into char*[]. Does not handle
// escaping or complicated setups - designed to process a set
// of fields that the user wants output
void split_string(char *in, int *len, char ***results);

// Print a string using w length long lines, attempting to break on
// spaces
void fprintw(FILE *f, char *s, size_t w);

// Convert a string representation of a MAC address to a byte array
int parse_mac(macaddr_t *out, char *in);

int check_range(int v, int min, int max);

int file_exists(char *name);

// If running as root, drops priviledges to that of user "nobody".
// Otherwise, does nothing.
int drop_privs();

// Set CPU affinity to a single core
int set_cpu(uint32_t core);




#endif /* ZMAP_UTIL_H */
