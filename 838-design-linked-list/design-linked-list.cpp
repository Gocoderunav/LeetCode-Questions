
class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val1) {
        val = val1;
        prev = nullptr;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* left;
    Node* right;

    MyLinkedList() {
        left = new Node(0);
        right = new Node(0);

        left->next = right;
        right->prev = left;
    }

    int get(int index) {
        Node* curr = left->next;
        while (curr != right && index > 0) {
            curr = curr->next;
            index--;
        }
        if (curr != right && index == 0) {
            return curr->val;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* nodetoAdd = new Node(val);
        Node* next = left->next;

        nodetoAdd->next = next;
        nodetoAdd->prev = left;

        next->prev = nodetoAdd;
        left->next = nodetoAdd;
    }

    void addAtTail(int val) {
        Node* nodetoTail = new Node(val);
        Node* prev = right->prev;

        nodetoTail->next = right;
        nodetoTail->prev = prev;

        prev->next = nodetoTail;
        right->prev = nodetoTail;
    }

    void addAtIndex(int index, int val) {
        Node* curr = left;
        while (curr->next != right && index > 0) {
            curr = curr->next;
            index--;
        }
        if (index == 0) {
            Node* nodetoIndex = new Node(val);
            Node* next = curr->next;
            Node* prev = curr;

            prev->next = nodetoIndex;
            nodetoIndex->prev = prev;

            next->prev = nodetoIndex;
            nodetoIndex->next = next;
        }
    }

    void deleteAtIndex(int index) {
        Node* curr = left->next;
        while (curr != right && index > 0) {
            index--;
            curr = curr->next;
        }
        if (curr != right && index == 0) {
            Node* prev = curr->prev;
            Node* next = curr->next;

            prev->next = next;
            next->prev = prev;

            delete curr;
        }
    }
};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */