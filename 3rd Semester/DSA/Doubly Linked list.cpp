#include <iostream>
using namespace std;

struct Element {
    int value;
    Element* previous;
    Element* next;
};

class DoublyLinked {
private:
    Element* start;

public:
    DoublyLinked() : start(nullptr) {}

    void Beginning(int val) {
        Element* node = new Element{val, nullptr, start};
        if (start) start->previous = node;
        start = node;
    }

    void End(int val) {
        Element* node = new Element{val, nullptr, nullptr};
        if (!start) {
            start = node;
            return;
        }
        Element* current = start;
        while (current->next) current = current->next;
        current->next = node;
        node->previous = current;
    }

    void removeNode(int val) {
        Element* current = start;
        while (current && current->value != val) current = current->next;
        if (!current) return;
        if (current->previous) current->previous->next = current->next;
        if (current->next) current->next->previous = current->previous;
        if (current == start) start = current->next;
        delete current;
    }

    void Forward() {
        Element* current = start;
        while (current) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

    void Backward() {
        Element* current = start;
        if (!current) return;
        while (current->next) current = current->next;
        while (current) {
            cout << current->value << " ";
            current = current->previous;
        }
        cout << endl;
    }
};

int main() {
    cout<<"Doubly Linkedlist"<<endl;

    DoublyLinked list;
    list.Beginning(15);
    list.Beginning(20);
    list.End(75);
    list.Forward();
    list.Backward();
    list.removeNode(20);
    list.Forward();
    return 0;
}
