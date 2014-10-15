#ifndef SORT_H
#define SORT_H

/* function: SortString
 * ====================
 * this function takes in a C-style string,
 * a start index and an end index and sorts
 * the characters in the string in ASCII
 * order from the given start index to the
 * given end index.
 */

void SortString(char s[], int startIndex, int endIndex);

/* function: Swap
 * ==============
 * this function takes in two characters
 * by reference and swaps them.
 */
void Swap(char& i, char& j);

#endif
