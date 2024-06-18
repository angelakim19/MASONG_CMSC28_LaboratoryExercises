#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// Structure to represent a customer in the queue
struct customerQueueCell {
    int item1;                // First item associated with the customer
    int item2;                // Second item associated with the customer
    string item3;             // Third item associated with the customer (name)
    customerQueueCell* next;  // Pointer to the next customer in the queue
};

using customerQueue = customerQueueCell;

// Implementation of queue for checkout
class CheckoutQueue {
public:
    // Initialize an empty queue
    CheckoutQueue() : head(nullptr), tail(nullptr), size(0) {}

    // Check if the queue is empty
    bool empty() const {
        return size == 0;
    }

    // Return a copy of the front item of queue
    customerQueue front() const{
        if (empty()) {
            throw runtime_error("Queue is empty");
        }
        return *head;
    }  

    // Insert item x or a new customer into the queue
    void enqueue(int x, int y, string& name){
        customerQueue* newCell = new customerQueue;
        newCell->item1 = x;
        newCell->item2 = y;
        newCell->item3 = name;
        newCell->next = nullptr;

        // If the queue is empty, the new customer becomes both the head and tail
        if (empty()) {
            head = newCell;
            tail = newCell;
        } else {
            tail->next = newCell;
            tail = newCell;
        }
        size++;
    }

    // Remove and returns the front item of the queue
    customerQueueCell dequeue() {
        if (empty()) {
            throw runtime_error("Queue is empty");
        }

        customerQueueCell result = *head;
        customerQueue* temp = head;
        head = head->next;
        delete temp;
        size--;

        // If the queue becomes empty after dequeueing, update the tail pointer
        if (empty()) {
            tail = nullptr;
        }

        return result;
    }

private:
    customerQueue* head;
    customerQueue* tail;
    int size;
};

// Main function of the Checkout Counter System
int main(){
    CheckoutQueue checkoutCounterSystem;
    int choice;

    while (true) {
        // Display the Main Menu
        cout << endl << "WELCOME TO LAITRELL'S ESSENTIAL - Counter 0:" << endl;
        cout << "[1] Fall in line" << endl;
        cout << "[2] Serve customer" << endl;
        cout << "[3] Next customer" << endl;
        cout << "[4] Closing time" << endl;
        cout << "[0] Exit" << endl;
        cout << "Enter choice: ";
        
        // Check if the input is a valid integer
        if (!(cin >> choice)) {
            cout << "Invalid choice. Please enter a valid integer." << endl;
            cin.clear();             // Clear error flags
            cin.ignore(100, '\n');   // Discard invalid input
            continue;                // Restart the loop to get a valid input
        }

        switch (choice) {
            // Add a new customer to the queue
            case 1:{
                string name;
                float amount; 

                cout << "Enter the customer's name: ";
                cin.ignore();
                getline(cin, name);

                cout << "Enter total amount payable: ";
                cin >> amount;

                checkoutCounterSystem.enqueue(static_cast<int>(amount * 100), name.length(),name);
                break;
            }  

            // Serve the next customer in line
            case 2:{
                if (checkoutCounterSystem.empty()) {
                    cout << "The QUEUE is EMPTY. No orders to serve." << endl;
                    break;
                }

                customerQueueCell customer = checkoutCounterSystem.dequeue();
                float amount = static_cast<float>(customer.item1) / 100; // Convert integer to float by dividing by 100
                int nameLength = customer.item2;

                // Print the serving message with adjusted spacing
                cout << "Now serving " << customer.item3 << " with total amount payable of " << amount << endl;

                break;
            }

            // Display information about the next customer in line
            case 3:{
                if (checkoutCounterSystem.empty()) {
                    cout << "The QUEUE is EMPTY. No orders to serve." << endl;
                    break;
                }
                customerQueueCell customer = checkoutCounterSystem.front();
                float amount = static_cast<float>(customer.item1) / 100;  // Convert integer to float by dividing by 100
                int nameLength = customer.item2;

                cout << "Next customer: " << customer.item3 << " with total amount payable of " << amount << endl;
                break; 
            } 

            // Serve all remaining customers in line and close the counter
            case 4: {
                if (checkoutCounterSystem.empty()) {
                    cout << "The QUEUE is EMPTY. No orders to serve." << endl;
                    break;
                }
            
                cout << "Serving remaining customers:" << endl;
                while (!checkoutCounterSystem.empty()) {
                    customerQueueCell customer = checkoutCounterSystem.dequeue();
                    float amount = static_cast<float>(customer.item1) / 100;
                    int nameLength = customer.item3.length();
            
                    // Print the serving message with adjusted spacing
                    cout << "Now serving " << customer.item3 << " with total amount payable of " << amount << endl;
                }
                cout << endl << "All customers have been served." << endl; 
                break; 
            }

            // Exit the program
            case 0:
                cout << "Exiting..." << endl;
                cout << "Checkout system has been terminated." << endl; 
                return 0;
                break;

            // Default case invalid choice
            default:
                cout << "Invalid choice. Please try again" << endl;
                break;
        }

    } 
    return 0;
}
