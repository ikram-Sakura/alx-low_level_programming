#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
char *_strstr(char *haystack, char *needle);
int _putchar(char c);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
void _puts(char *s);
int _strlen(char *s);
int _isdigit(int c);
char *_strncat(char *dest, char *src, int n);
int _isupper(int c);
char *_strpbrk(char *s, char *accept);
int _isalpha(int c);
int _abs(int n);
int _islower(int c);
#endif