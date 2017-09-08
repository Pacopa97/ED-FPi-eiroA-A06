#pragma once

class Node {
public:
	int dato;
	Node* siguiente;

	Node();
	Node(int dato, Node* siguiente);
	int getDato();
	void setDato(int dato);
	Node* getSiguiente();
	void setSiguiente(Node* siguiente);
};