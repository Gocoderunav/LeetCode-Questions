#include <unordered_map>

class node {
public:
    int key;
    int val;
    node* next;
    node* prev;

    node(int key1, int val1) {
        key = key1;
        val = val1;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
public:
    LRUCache(int capacity) {
        cap = capacity;
        left = new node(0, 0);
        right = new node(0, 0);

        left->next = right;
        right->prev = left;
    }

    int get(int key) {
        if (mp.find(key) != mp.end()) {
            remove(mp[key]);
            insert(mp[key]); 
            return mp[key]->val;
        }
        return -1;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            remove(mp[key]);
            delete mp[key];
        }
        mp[key] = new node(key, value);
        insert(mp[key]);

        if (mp.size() > cap) {
            node* lru = left->next;
            remove(lru);
            mp.erase(lru->key);
            delete lru;
        }
    }

private: 
    int cap;
    std::unordered_map<int, node*> mp;
    node* left;
    node* right;

    void remove(node* curr) {
        node* prevNode = curr->prev;
        node* nextNode = curr->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    void insert(node* curr) {
        node* prevNode = right->prev;
        node* nextNode = right;

        prevNode->next = curr;
        nextNode->prev = curr;

        curr->prev = prevNode;
        curr->next = nextNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */