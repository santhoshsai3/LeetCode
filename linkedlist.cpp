#include<iostream>
using namespace std;

class node{
    public:
        int value;
        node* next;
        node(int value)
        {
            this->value = value;
            this->next = NULL;
        }
        
};

node* createNode(int value){
            node* temp = new node(value);
            return temp;
        }
void PrintLinkedList(node* head){
    while(head)
    {
        cout<<head->value<<ends;;
        head = head->next;
    }
}


int main()
{
 //driver code
#pragma region 
node* t1 = new node(2);
node* head1 = new node(4);
node* head2 = new node(3);
node* t2 = new node(5);
node* head4 = new node(6);
node* head7 = new node(4);
t1->next = head1;
head1->next = head2;
t2->next = head4;
head4->next = head7;
#pragma endregion


PrintLinkedList(t1);
cout<<endl;
PrintLinkedList(t2);
//main logic
node* newList = nullptr ;
node* p = newList;
int carry= 0;
int a,b;
int sum=0;
while(t1!=nullptr || t2!=nullptr || carry!=0){
 a = t1!=nullptr?t1->value:0;
 b = t2!=nullptr?t2->value:0;
 sum = a + b + carry;
 carry = sum/10;
 if(p==nullptr){
    p = createNode(sum%10);
    newList = p;
 }
 else{
     p->next = createNode(sum%10);
     p=p->next;
 }
 if(t1) 
    t1=t1->next;

 if(t2) 
    t2=t2->next;
}
PrintLinkedList(newList);

return 0;

}