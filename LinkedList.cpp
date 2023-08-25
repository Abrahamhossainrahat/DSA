#include<bits/stdc++.h>
using namespace std;

int size,len;
class node{
public :
    int data;
    node *next;
    node(int val){
        data = val;
        next = NULL;
    }
};

// Insert an elelment
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        size++;
        return;
    }
    n->next = head;
    head = n;
    size++;
}

void inserAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        size++;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    size++;
}

void insertAtPosition(node* &head, int val, int position){
    if(position == 1){
        insertAtHead(head,val);
    }
    else if(position == size+1){
        inserAtTail(head,val);
    }
    else if(position>size+1){
        cout<<"Don't posible to insert"<<endl;
        return;
    }
    else{
        node* n = new node(val);
        node* temp = head,*post = NULL;
        int k=1;
        while(temp != NULL){
            if(k == position-1){
                post = temp->next;
                temp->next = n;
                n->next = post;
                size++;
                break;
            }
            temp = temp->next;
            k++;
        }
    }
}

// Delete an element
void delation(node* &head,int val){
    if(head->data == val){
        head = head->next;
        size--;
        return;
    }
    node* temp = head;
    while(temp!=NULL){
        if(temp->next->data == val){
            temp->next = temp->next->next;
            size--;
            break;
        }
        temp = temp->next;
    }
}

//Sort element of LinkedList
void sortLinkedList(node* &head){
    node* i=head,*j=NULL;
    int temp=0;

    while(i!=NULL){
        j = i->next;
        while(j!=NULL){
            if(i->data > j->data){
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }

   /* for(i = head; i!=NULL;i=i->next){
        for(j = i->next;j!=NULL;j=j->next){
            if(i->data > j->data){
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }*/
}

// Search an element from LinkedList
void searchAnElement(node* head, int val){
    int k=0;
    while(head!=NULL){
        if(head->data == val){
            cout<<"Data can found : "<<head->data<<endl;
            k=1;
            break;
        }
        head = head->next;
    }
    if(k!=1){
        cout<<"Data can't found."<<endl;
    }
}

// Dispaly/Traversing  all element of LinkedList
void display(node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

// For merged two LinkedList
void mergeLinkedList(node* &head, node* &head1, node* &head2){
    node* temp1=head,*temp2=head1;

    if(head2 == NULL){
        node* n = new node(temp1->data);
        head2 = n;
        len++;
        }

    while(temp1->next!=NULL){
        node* n = new node(temp1->next->data);
        node* temp = head2;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        temp1 = temp1->next;
        len++;
    }
    while(temp2!=NULL){
        node* n = new node(temp2->data);
        node* temp = head2;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        temp2 = temp2->next;
        len++;
    }
}

int main()
{
    node* head = NULL,*head1=NULL,*head2=NULL;
    insertAtHead(head,5);
  //  display(head);
    insertAtHead(head,4);
   // display(head);
    insertAtHead(head,9);
   // display(head);
    inserAtTail(head,45);
   // display(head);
    inserAtTail(head,34);
   // display(head);
    insertAtPosition(head,23,4);
   // display(head);
    insertAtPosition(head,29,2);
    cout<<"First LinkedList :\n";
    display(head);
   /*delation(head,9);
    display(head);
    delation(head,34);
    display(head);
    delation(head,5);
    display(head);*/
    sortLinkedList(head);
    cout<<"Sorted First LinkedList :\n";
    display(head);
    searchAnElement(head,4);
    inserAtTail(head1,51);
    inserAtTail(head1,55);
    inserAtTail(head1,59);
    inserAtTail(head1,61);
    cout<<"Secound LinkedList :\n";
    display(head1);
    mergeLinkedList(head,head1,head2);
    cout<<"Merged First & Secound LinkedList :\n";
    display(head2);

}
