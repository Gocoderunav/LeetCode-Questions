
class MyCircularQueue {
    struct Node{
        short val;
        Node *prev;
        Node *next;
        Node(int v){
            val=v;
        } 
    };
private:
    Node* Right;
    Node* Left;
    int space=0;
    

public:
  MyCircularQueue(int k) {
    space = k;
    Right = new Node(-1); // Dummy node representing the right end of the queue
    Left = new Node(-1);  // Dummy node representing the left end of the queue
    Right->next = Left;
    Right->prev = Left;
    Left->next= Right;
    Left->prev = Right;
    
    
}

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        Node* node = new Node(value);
        node->next = Right;
        node->prev = Right->prev;
        Right->prev->next = node;
        Right->prev = node;
        space--;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        Left->next = Left->next->next;
        Left->next->prev = Left;
        space++;
        return true;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return Left->next->val;
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return Right->prev->val;
    }

    bool isEmpty() {
        return Left->next == Right;
    }

    bool isFull() {
        return space == 0;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
