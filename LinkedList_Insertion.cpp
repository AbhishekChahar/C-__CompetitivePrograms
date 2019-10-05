#include <iostream>
using namespace std;


struct node{
  int data;
  node* next;
};

node* head = NULL;

void showll(){
    node* h = head;
    while(h != NULL ){
        cout<< h->data <<" ";
        h = h->next;
    }
    cout<<"\n";
}

int  countnodes(){
    int length =0;
    node *h = head;
    while( h != NULL ){
        length++;
        h = h->next;
    }
    return length;
}

void insert_back( int d){
    node* header = head;
    node* temp = new node();
    temp->data = d;
    
    if(header==NULL){
            temp->next = NULL;
            head = temp;
    }
    else{
        while(header -> next != NULL){
            header = header->next;
        }
        temp->next = NULL;
        header -> next = temp;
    }
}

void insert_front( int d){
    node* header = head;
    node* temp = new node();
    temp->data = d;
    if(header==NULL){
        temp->next = NULL;
        head = temp;
    }
    else{
        temp->next = header;
        head = temp;
    }
}

void insert_at_pos(int d, int pos){
    
    if(pos>countnodes() || pos<1){
        cout<<"Invalid position to insert an element \n";
    }
    
    else{
        node* temp = new node();
        temp->data = d;
        node* temp2 =head;
        int position=1;
        while(position != pos-1){
            temp2 = temp2->next;
            position++;
        }
        temp->next = temp2->next;
        temp2->next = temp;
    }
}

void delete_node_back(){
    node* temp = head;
    if(temp->next == NULL){
        head =NULL;
    }
    else{
        while(temp->next->next !=NULL){
            temp = temp->next;
        }    
        temp->next = NULL;
    }
}

void delete_node_front(){
    node* temp = head;
    if(temp = NULL){
        cout<<"Linkedlist is already empty!!Cannot delete";
    }
    else{
        head = head->next;
    }
}

void delete_node_at_pos(int pos){
    node* temp = head;
    if(pos > countnodes() || pos < 1){
        cout<<"Invalid Index";
    }
    else if(pos == 1){
        delete_node_front();
    }
    else{
        int position=1;
        while(position != pos-1){
            temp = temp->next;
            position++;
        }
        temp->next = temp->next->next;
    }
}

int main()
{
    
    insert_back(2);
    insert_back(7);
    insert_back(9);
    insert_back(8);
    
    insert_front(5);
    insert_front(6);
    
    insert_at_pos(22,3);
    insert_at_pos(11,5);

    showll();
    
    delete_node_back();
    showll();
    
    
    delete_node_back();
    showll();
    
    delete_node_front();
    showll();
    
    delete_node_at_pos(4);
    showll();
    return 0;
}

