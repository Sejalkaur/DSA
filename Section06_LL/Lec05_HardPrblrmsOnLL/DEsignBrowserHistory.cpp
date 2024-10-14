//Link: https://leetcode.com/problems/design-browser-history/
class Node {
public:
    string data;
    Node* next;
    Node* back;
    
    Node() : data(""), next(nullptr), back(nullptr) {};
    Node(string x) : data(x), next(nullptr), back(nullptr) {}
};

class BrowserHistory {
    Node* current;  // Pointer to the current node (webpage)
    
public:
    // Constructor to initialize the browser with a homepage
    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }
    
    // Method to visit a new URL
    void visit(string url) {
        Node* newNode = new Node(url);
        current->next = newNode;  
        newNode->back = current;  
        current = newNode;  
    }
    
    // Method to go back a certain number of steps
    string back(int steps) {
        while (steps > 0 && current->back != nullptr) {
            current = current->back;  // Move to the previous node
            steps--;
        }
        return current->data;  // Return the URL of the current node
    }
    
    // Method to go forward a certain number of steps
    string forward(int steps) {
        while (steps > 0 && current->next != nullptr) {
            current = current->next; 
            steps--;
        }
        return current->data;  
    }
};
