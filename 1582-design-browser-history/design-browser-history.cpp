class Node{
    public:
     string val;
     Node* next;
     Node* prev ;
     
     Node(string url){
        val = url;
        next = nullptr;
        prev = nullptr;
     }
};
class BrowserHistory {
public:

   Node* currPage;

    BrowserHistory(string homepage) {

         currPage = new Node(homepage);

    }
    
    void visit(string url) {

        Node* newNode = new Node(url);
        currPage->next = newNode;
        newNode->prev = currPage;
        currPage= newNode;
    }
    
    string back(int steps) {

        while(steps>0){
            if(currPage->prev){
                currPage= currPage->prev;
             } 
             else{
                break;
             }
             steps--;

           }
       return currPage->val;  
    }
    
    string forward(int steps) {
        
        while(steps>0){
            if(currPage->next){
                currPage=currPage->next;

            }
           else{
            break;
           } 
           steps--;
        }
      return currPage->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */