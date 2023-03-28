
  #include <stdio.h>

  /**
   * swap_int - swaps the values of two intergers.
   * @a: The first intergerto be swapped.
   * @b: The second intergerro be swapped.
   *
   * Return: nothing
   */

  void swap_int(int *a, int *b)
  /* the function that swaps the values of two intergers. */
{
	  int temp = *a; 
	  *a = *b;
	  *b = temp;

}

