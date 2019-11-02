#include<bits/stdc++.h>
using namespace std;

class Node {
    public :
    int data;
    Node*Next;
};
void printlist(Node*n)
{
    while(n!=NULL){
        cout<< n->data <<" ";
        n = n->Next;
    }
}

int main()
{
    Node*head = NULL;
    Node*first = NULL;
    Node*second = NULL;
    
    head = new Node();
    first = new Node();
    second = new Node();
    
    head->data = 1;
    head->Next = first;
    
    first->data = 2;
    first->Next = second;
    
    second->data = 3;
    second->Next = NULL;
    
    printlist(head);
    
    return 0;
}
