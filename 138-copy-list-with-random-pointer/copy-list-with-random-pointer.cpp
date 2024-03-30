/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node* ,Node*> nodesCorres ;
        Node* firstPass = head;

        while(firstPass){
           nodesCorres[firstPass] =new Node(firstPass->val);
            firstPass = firstPass->next;
        }

        Node* secondPass = head;
        while(secondPass){
            Node* newNode = nodesCorres[secondPass];
            newNode->next = nodesCorres[secondPass->next];
            newNode->random = nodesCorres[secondPass->random];
            secondPass = secondPass->next; 
        }
        return nodesCorres[head];
    }
};