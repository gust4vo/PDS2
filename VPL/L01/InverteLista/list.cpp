#include <iostream>
#include "list.hpp"

void List::insertNode(int data) {
  Node* aux = new Node;
  aux->data = data;
  aux->next = nullptr;
  if (head == nullptr) {
    head = aux;
    tail = aux;
  } else {
    tail->next = aux;
    tail = aux;
  }
}

void List::display() {
  Node *aux = head;
  while (aux != nullptr) {
    cout << aux->data << " ";
    aux = aux->next;
  }
  cout << endl;
}

void List::inverte(){
   if(head == nullptr) return;
   
   Node* anterior = head;
   Node* node = head->next;

   head->next = nullptr;
   tail = head;

   while(node != nullptr){
        Node* aux = node->next;
        if(aux == nullptr) head = node;
        node->next = anterior;
        anterior = node;
        node = aux;
   }
}