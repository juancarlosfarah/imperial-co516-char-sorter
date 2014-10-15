#include <iostream>
#include "sort.h"

using namespace std;

int main() {

	char s[] = "poiuytrewqasdfghjklmnbvcxz";

	int l = static_cast<int>(strlen(s)); 
	int endIndex = l - 1;

	cout << s << endl;

	SortString(s, 0, endIndex);

	cout << s << endl;

	return 0;	

}
