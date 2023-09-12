#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next = nullptr;
 
};

struct List{
    Node* head = nullptr;
    Node* tail = nullptr;

    void insertNode(int data);
    void removeNode(int data);
    void display();
};

void List::insertNode(int data){
   Node* aux = new Node;
   aux->data = data;

   if(head == nullptr) 
    head = aux;
   else 
    tail->next = aux;

   tail = aux;

}

void List::removeNode(int data){
    Node* current = head;
    Node* previous = nullptr;

    while(current != nullptr){
        if(current->data == data){
            if(previous == nullptr)
                head = current->next;

            else if(current->next == nullptr){
                previous->next = nullptr;
                tail = previous;
            }

            else
                previous->next = current->next;

            delete current;
            return;
        }

        previous = current;
        current = current->next;
    }
    
}

void List::display(){
    Node* aux = head;

    while(aux != nullptr){
        cout << aux->data << ' ';
        aux = aux->next;
    }

    cout << endl;
}

int main(){
    List* lista = new List;

    lista->insertNode(2);
    lista->insertNode(10);
    lista->insertNode(13);
    lista->insertNode(7);

    lista->display();

    lista->removeNode(13);

    lista->display();
}