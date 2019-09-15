#include <iostream>

using namespace std;

class node{
  public: 
    int data;
    node(int k){
        data=k;
    }
    node* next;
};

void countnodes(node* ptr){
    int count=1;
    while(ptr->next != NULL){
        count++;
        ptr = ptr->next;
    }
    cout<<endl<<count;
    
}

int main()
{
    cout<<"Hello World"<<endl;
    node one = node(1);
    node two = node(2);
    node three = node(3);
    node four =node(4);
    
    two.next = &three;
    one.next = &two;
    three.next= &four;
    four.next = NULL;
    
    node* head =&one;
    countnodes(head);
    
    return 0;
}
