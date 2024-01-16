#pragma once
#include <iostream>
using namespace std;

template <typename T>
class List {
	T elem;
	List* next;
public:
	List(T useful) : elem(useful) { next = nullptr; }

	// List<int> *head = new List<int>(8);
	// (*head).prepend(new List(8));
	// head->prepend(new List(8))
	// 7->X   должно стать: 8->7->X;

	static void prepend(List *&h, List* el) {
		// Считается, что el уже создан!
		el->next = h;
		h = el;
	}
	/* СПИСОК МАТЕРНЫХ СЛОВ ПРОГРАММИРОВАНИЯ
	goto
	break
	continue
	*/


	List* search(T key) {
		List* p = this;
		while ((p != nullptr) && (p->elem != key)) {
			// В C++ реализованы "ленивые вычисления": если в первой скобке false,
			// вторая НЕ ВЫЧИСЛЯЕТСЯ!
			cout << (*p);
			cout << "My elem is " << p->elem << ", key is " << key << "\n";
			p = p->next;  // Присваиваем "бегунку" указатель на следующий элемент,
		}                 // который хранится в поле next того объекта, на который
		return p;         // p указывает СЕЙЧАС - прыжок!
	}

	List* searchParent(T key) {
		List* p = this,
			*parent = nullptr;
		while ((p != nullptr) && (p->elem != key)) {
			// В C++ реализованы "ленивые вычисления": если в первой скобке false,
			// вторая НЕ ВЫЧИСЛЯЕТСЯ!
			cout << (*p);
			cout << "My elem is " << p->elem << ", key is " << key << "\n";
			parent = p;
			p = p->next;
		}                 
		return parent;
	}

	template <typename T>
	friend ostream& operator<<(ostream& out, const List<T>& el) {
		out << el.elem << "->";
		if (el.next == nullptr) {
			out << "X\n";
		}
		else {
			out << (*el.next);
		}
		return out;
	}

/*   968 -> -23 -> 42 -> X
  +------+
  | 968  |
  +-------->+-----+
            | -23 |
			+------->
  // Кто хочет - гоняйте курсор по экрану :)
*/

};