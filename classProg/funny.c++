#include <iostream>
#include <string>
using namespace std;


struct Node {
    string data;
    Node* next;
    
    Node(const string& str) : data(str), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    // Append a new node with data
    void append(const string& data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Display the linked list
    void display() const {
        Node* current = head;
        while (current) {
            cout << current->data;
            current = current->next;
        }
    }
};

void funny(const string& a, const string& b) {
    size_t max_len = max(a.length(), b.length());

    LinkedList list;

    // Itr8 nd form pairs
    for (size_t i = 0; i < max_len; ++i) {
        char charA = (i < a.length()) ? a[i] : ' ';
        char charB = (i < b.length()) ? b[i] : ' ';
        
        string pair = string(1, charA) + string(1, charB);
        list.append(pair);
    }
    cout << "\nResult:\n";
    list.display();
}

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    funny(str1, str2);

    return 0;
}
