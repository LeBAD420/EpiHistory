/*
** String.h for String in /home/pidoux_q//rendu/cpp/d03/ex_2
** 
** Made by quentin pidoux
** Login   <pidoux_q@epitech.net>
** 
** Started on  Thu Jan  6 10:46:00 2011 quentin pidoux
** Last update Fri Jan  7 13:59:22 2011 pidoux_q
*/

#ifndef  T_STRING_H_
#define T_STRING_H_
#include <stdlib.h>

typedef struct	T_string
{
  char *str;

  void (*assign_s) (struct T_string *this, const struct T_string * str);
  void (*assign_c) (struct T_string *this, const char * s );
  void (*append_s) (struct T_string* this, const struct T_string * ap);
  void (*append_c) (struct T_string* this, char const* ap);
  char (*at)(struct T_string* this, size_t pos);
  void (*clear)(struct T_string* this);
  size_t (*size)(struct T_string* this);
  int (*compare_s)(struct T_string *this, const struct T_string* str);
  int (*compare_c)(struct T_string *this, const char* str);
  size_t (*copy)(struct T_string* this, char* s, size_t n, size_t pos);
  const char* (*c_str) (struct T_string * this);
  int (*empty) (struct T_string* this);
  int (*find_s) (struct T_string* this, const struct T_string *str, size_t pos);
  int (*find_c) (struct T_string* this, const char* str, size_t pos);

} String;

void StringInit(String* this, char const * s);
void StringDestroy(String* this);

void assign_s (String *this, const String * str);
void assign_c (String *this, const char * s );

void append_s(String* this, const String * ap);
void append_c(String* this, char const* ap);

char at(String* this, size_t pos);

void clear(String* this);

size_t size(String* this);

int compare_s(String *this, const String* str);
int compare_c(String *this, const char* str);

size_t copy(String* this, char* s, size_t n, size_t pos);

const char* c_str (String * this);

int empty (String* this);

int find_s (String* this, const String *str, size_t pos);
int find_c (String* this, const char* str, size_t pos);

#endif
