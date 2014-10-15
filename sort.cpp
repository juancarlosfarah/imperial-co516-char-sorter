#include <cstring>
#include <iostream>
#include "sort.h"

using namespace std;

void SortString(char s[], int startIndex, int endIndex) {

	/* base case:
 	 * ----------
 	 * if a string is of 0 or 1
 	 * length, it's already sorted
 	 */ 
	if (endIndex - startIndex <= 1) return;

	/* inductive case:
 	 * ---------------
 	 * find the index of the smallest char in the
 	 * string i(ASCIIwise) and swap it with the
 	 * char in the start index.
 	 */
	int minIndex = startIndex;
	for (int i = startIndex; i <= endIndex; ++i) {
		if (s[i] < s[minIndex]) {
			minIndex = i;	
		}
	}

	Swap(s[startIndex], s[minIndex]);

	return SortString(s, ++startIndex, endIndex); 
}


void Swap(char& i, char& j) {
	if (&i != &j) {
		i ^= j;
		j ^= i;
		i ^= j;
	}
}
