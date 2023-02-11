#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>

int main(int argc, char* argv[]){
  int test = 0x0F; /* 15 in hexadecimal */
  
  printf("\n");
  printf("The number 15 in hexadecimal: %d\n", test);
  printf("Character: %c \n", 97); /* prints characater 'a' */

  printf("\n\n");
 
  /***********************************************************
   * data type sizes 
   ************************************************************/
  int max_int = 0x7fffffff;                     /* write the max int in hexadecimal notation */
  int min_int = 0x80000000;                /* write the min int in hexadecimal representation*/
  short min_sint = 0x8000;                /* write the minimum short int in hexadecimal representation */
  short max_sint = 0x7FFF;                /* write the maximum short int in hexadecimal representation */
  long min_lint = -0x8000000000000000;      /* write the minimum long int in hexadecimal representation */
  long max_lint = 0x7FFFFFFFFFFFFFFF;           /* write the maximum long  int in hexadecimal representation */
  unsigned int max_uint = 0xffffffff;           /* write the usigned max int in hexadecimal notation */
  unsigned short max_usint = 0xffff;            /* write the unsigned max short int in hexadecimal notation */
  unsigned long max_ulint = 0xFFFFFFFFFFFFFFFF; /* write the unsigned max long int in hexadecimal notation */

  
  printf("max int is %d\n", max_int);
  printf("min int is %d\n", min_int);
  printf("min short int is %d\n", min_sint);
  printf("max short int is %d\n", max_sint);  
  printf("min long int is %ld\n", min_lint);
  printf("max long int is %ld\n", max_lint);
  printf("max unsigned int is %u\n", max_uint);
  printf("max unsigned short int is %d\n", max_usint);
  printf("max unsigned long int is %lu\n", max_ulint);

  printf("\n\n");
  printf("CHAR_BIT       = %d\n", CHAR_BIT);
  printf("MB_LEN_MAX     = %d\n\n", MB_LEN_MAX);
 
  printf("CHAR_MIN       = %+d\n", CHAR_MIN);
  printf("CHAR_MAX       = %+d\n", CHAR_MAX);
  printf("SCHAR_MIN      = %+d\n", SCHAR_MIN);
  printf("SCHAR_MAX      = %+d\n", SCHAR_MAX);
  printf("UCHAR_MAX      = %u\n\n", UCHAR_MAX);
 
  printf("SHRT_MIN       = %+d\n", SHRT_MIN);
  printf("SHRT_MAX       = %+d\n", SHRT_MAX);
  printf("USHRT_MAX      = %u\n\n", USHRT_MAX);
 
  printf("INT_MIN        = %+d\n", INT_MIN);
  printf("INT_MAX        = %+d\n", INT_MAX);
  printf("UINT_MAX       = %u\n\n", UINT_MAX);
 
  printf("LONG_MIN       = %+ld\n", LONG_MIN);
  printf("LONG_MAX       = %+ld\n", LONG_MAX);
  printf("ULONG_MAX      = %lu\n\n", ULONG_MAX);
 
  printf("LLONG_MIN      = %+lld\n", LLONG_MIN);
  printf("LLONG_MAX      = %+lld\n", LLONG_MAX);
  printf("ULLONG_MAX     = %llu\n\n", ULLONG_MAX);
 

  /***********************************************************
   * assertions to test values assigned to test code solutions
   ***********************************************************/
  assert(INT_MAX == max_int); 
  assert(INT_MIN == min_int);
  assert(SHRT_MAX == max_sint);
  assert(SHRT_MIN == min_sint);
  assert(LONG_MAX == max_lint);
  assert(LONG_MIN == min_lint);
  assert(UINT_MAX == max_uint);
  assert(USHRT_MAX == max_usint);
  assert(ULONG_MAX == max_ulint);

  /***********************************************
   * WHY DOES THIS LOOP NEVER END
   *******************************************/ 
  /* write the reasons for the infinite loop as a comment below */

  /*
  int k = 1;
  while (k <= INT_MAX) {
     printf("The current value of k = %ld\n", k);    
     k += k;
  }
  */

  return (EXIT_SUCCESS);
}


