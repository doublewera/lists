#include "List.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	List<int>* head = nullptr; // new List<int>(7);
	//List<int>::prepend(head, new List<int>(8));
	for (int i = 59; i > 0; i -= 13) {
		List<int>::prepend(head, new List<int>(i));
	    cout << (*head);
	}
	return 0;
}