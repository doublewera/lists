#include "List.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");
	List<int>* head = nullptr; // new List<int>(7);
	//List<int>::prepend(head, new List<int>(8));
	for (int i = 59; i > 0; i -= 13) {
		List<int>::prepend(head, new List<int>(i));
	    cout << (*head);
	}
	List<int>* me = head->search(46);
	cout << "Found! \n";
	cout << (*me);
	me = head->search(100);
	cout << *head;
	cout << "Удаляем 7\n";
	head->remove(head, 7);
	cout << endl << *head;
	cout << "Удаляем 20\n";
	head->remove(head, 20);
	cout << endl << *head;
	cout << "Удаляем 59\n";
	head->remove(head, 59);
	cout << endl << *head;
	return 0;
}