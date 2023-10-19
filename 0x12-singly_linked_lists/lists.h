#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - a singly list
 * @str: inputted string
 * @len: length of the string
 * @next: pointer of node
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
