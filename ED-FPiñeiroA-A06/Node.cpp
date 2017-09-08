#include<iostream>
#include "Node.h"

using namespace std;

Node::Node(){

}

Node::Node(int dato, Node* siguientet) {
	dato = dato;
	siguiente = siguiente;
}

int Node::getDato() {
	return dato;
}

void Node::setDato(int dato) {
	dato = dato;
}


Node* Node::getSiguiente() {
	return siguiente;
}

void Node::setSiguiente(Node* siguiente) {
	siguiente = siguiente;
}