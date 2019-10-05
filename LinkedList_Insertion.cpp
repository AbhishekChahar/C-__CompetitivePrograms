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
    if(header==NULL){
            node* temp = new node();
            temp->data = d;
            temp->next = NULL;
            head = temp;
    }
    else{
        while(header -> next != NULL){
            header = header->next;
        }
        node* temp = new node();
        temp->data = d;
        temp->next = NULL;
        header -> next = temp;
    }
}

void insert_front( int d){
    node* header = head;
    if(header==NULL){
            node* temp = new node();
            temp->data = d;
            temp->next = NULL;
            head = temp;
    }
    else{
        node* temp = new node();
        temp->data = d;
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

    return 0;
}

