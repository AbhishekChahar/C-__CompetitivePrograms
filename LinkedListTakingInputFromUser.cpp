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
void nodeadd(Node* head,int num){
    for (int i = 0; i <num; i++) {
        Node* tem=new Node();
        int a;
        cin>>a;
        tem->data=a;
        tem->Next=NULL;
        Node*temp = head;
        if(head=NULL){
            head=tem;
        }
        else{
        while(temp!=NULL){
            temp=temp->Next;
        };
        temp->Next=tem;
    };   
    }
    
}

int main()
{
    Node* head=NULL;
    int num;
    cin>>num;
    
    nodeadd(head,num);
    
    printlist(head);
    
    return 0;
}
