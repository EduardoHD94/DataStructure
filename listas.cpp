#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



typedef struct Node
{
	int number;
	Node * next;
} node;

bool isEmpty(node * &head);	
void insertarInicio(node * &head, int valor);
void insertarFinal(node * &head, int valor);
void insertarElementopreviouses(node * &head, int valor, int pos);
void insertarElementoDespues(node * &head, int valor, int pos);
void imprimirLista(node * head);
void buscarElemento(node * head, int valor);
void eliminarElemento(node * &head, int valor);
void eliminarRepetidos(node * &head, int valor);
void menu1();


int main(int argc, char const *argv[])
{
	node * lista = NULL;
	int op;
	int dato;
	int pos;

	do
	  {
	      menu1();  cin>> op;
	
	      switch(op)
	      {
	          case 1:
	
	               cout<< "\n NUMERO A INSERTAR: "; cin>> dato;
	               insertarInicio(lista, dato);
	          break;
	
	
	          case 2:
	
	               cout<< "\n NUMERO A INSERTAR: "; cin>> dato;
	               insertarFinal(lista, dato );
	          break;
	
	
	          case 3:
	
	               cout<< "\n NUMERO A INSERTAR: ";cin>> dato;
	               cout<< " Posicion : ";       cin>> pos;
	               insertarElementopreviouses(lista, dato, pos);
	          break;
	
	
	          case 5:
	
	               cout << "\n\n MOSTRANDO LISTA\n\n";
	               imprimirLista(lista);
	          break;
	
	
	          case 6:
	
	               cout<<"\n Valor a buscar: "; cin>> dato;
	               buscarElemento(lista, dato);
	          break;
	
	          case 7:
	
	              cout<<"\n Valor a eliminar: "; cin>> dato;
	
	            //  eliminarElemento(lista, dato);
	          break;
	
	          case 8:
	
	              cout<<"\n Valor repetido a eliminar: "; 
	              cin>> dato;
	
	              eliminarRepetidos(lista, dato);
	          break;
	
	                  }
	
	      cout<<endl<<endl;
	
	  }while(op!=9);
	


	return 0;
}

bool isEmpty(node * &head)
{
	if (head == NULL)
	{
		return true;
	}
	else
		return false;
}

void insertarInicio(node * &head, int valor ){
	node * current = new node;
	current->number = valor;
	current->next = head;
	head = current; 
}

void insertarFinal(node * &head, int valor){
	node * current = new node;
	current->number = valor;
	current->next = head;

	if(isEmpty(head)){
		head = current;
	}
	else
	{
		node * temp = head;

		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = current;
	}
}
void insertarElementopreviouses(node * &head, int valor, int pos){
	node * current = new node;
	current->number = valor;

	if(pos == 1){
		current->next = head;
		head = current;
	}
	else{
		node * t = head;

		for (int i = 1;  t != NULL; ++i)
		{
			if (i == pos)
			{
				current -> next = t->next;
				t->next = current;
				return;
			}
			t = t -> next;
		}

	}
		cout << "position not found" << endl;

}


void insertarElementoDespues(node * &head, int valor, int pos){
	node * current = new node;
	current->number = valor;

	if(pos == 1){
		current->next = head;
		head = current;
	}
	else{
		node * t = head;

		for (int i = 1;  t != NULL; ++i)
		{
			if (i == pos+1)
			{
				current -> next = t->next;
				t->next = current;
				return;
			}
			t = t -> next;
		}

	}
	cout << "position not found" << endl;
}

void buscarElemento(node * head, int valor)
{
	node * current = head;
	bool flag = false;
	int i =0;

	while(current != NULL)
	{
		if (current->number == valor)
		{
			cout << endl << "Esta en la posicion: " << i << endl;
			flag = true;
		}
		i++;
		current = current->next;
	}

	if(flag==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;

}

void imprimirLista(node * head)
{
	printf("\b");
	while(head != NULL){
		cout << head->number<< " -> ";
		head = head->next;
	}
	cout << "NULL";

}

void eliminarElemento(node * head, int valor){
	node * current = head;
	node * previous;

	if (current != NULL)
	{
		while(current!=NULL)
		{
			if (current->number == valor)
			{
				if (current == head)
					head = head->next;
				else
					previous->next = current->next;

				delete(current);
				return;
			}
			previous = current;
			current = current->next;

		}
	}
	else
		cout << "Lista vacía..!";
}

void eliminarRepetidos(node * &head, int valor){
	node * current = head;
	node * previous = head;


	while(current != NULL){
		if (current->number = valor)
		{
			if (current == head)
			{
				head = head->next;
				delete(current);
				current = head;
			}
			else
			{
				previous->next = current-> next;
				delete(current);
				current = previous->next;
			}
		}
		else{
			previous = current;
			current = current->next;
		}
	}
	
	cout<<"\n\n Valores eliminados..!"<<endl;

}

void menu1()
{
    cout<<"\n\t\tLISTA ENLAZADA SIMPLE\n\n";
    cout<<" 1. INSERTAR AL INICIO               "<<endl;
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 3. INSERTAR previousES UNA POSICION         "<<endl;
    cout<<" 4. INSERTAR DESPUES UNA POSICION         "<<endl;
    cout<<" 5. REPORTAR LISTA                   "<<endl;
    cout<<" 6. BUSCAR ELEMENTO                  "<<endl;
    cout<<" 7. ELIMINAR ELEMENTO 'V'            "<<endl;
    cout<<" 8. ELIMINAR ELEMENTOS CON VALOR 'V' "<<endl;
    cout<<" 9. SALIR                            "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}