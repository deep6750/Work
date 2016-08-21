#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
};
class llist
{
    node *start=NULL;
    public:
        node *create_node();
    void insert_beg();
    void insert_end();
    void insert_after();
    void insert_before();
    void display();
};
node *llist::create_node()
{
    int item;
    cin>>item;
    node *new1=new(node);
    new1->data=item;
    new1->next=NULL;
    return new1;
}
void llist::insert_beg()
{
    node *new2=create_node();
    if(start==NULL)
        start=new2;
    else
    {
       new2->next=start;
       start=new2;
    }
}
void llist::insert_end()
{
    node *new2=create_node();
    if(start==NULL)
    {
        start=new2;
    }
    else
    {
    node *temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        }
        temp->next=new2;

    }
}
void llist::insert_after()
{
    int n;
      cout<<"enter the element you have to insert";
    node *new2=create_node();
    cout<<"enter the element after which  you have to insert";
    cin>>n;

    node *temp=start;
    while(temp->data!=n)
    {
        temp=temp->next;
    }
    new2->next=temp->next;
    temp->next=new2;

}
void llist::insert_before()
{
    int n;
    cout<<"enter the element you have to insert";
    node *new2=create_node();
    cout<<"enter the element after which you have to insert";
    cin>>n;
    node *temp=start;
    node *temp1;
    while(temp->data!=n)
    {
        temp1=temp;
        temp=temp->next;

    }
    temp1->next=new2;
    new2->next=temp;
}
void llist::display()
{
    node *temp=start;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    int n;
    llist l1;
cout<<"enter the number of elements";
cin>>n;
cout<<"enter the elements";
for(int i=0;i<n;i++)
    //l1.insert_beg();
    l1.insert_end();
    l1.display();
//    l1.insert_after();
    l1.insert_before();
    l1.display();
}
