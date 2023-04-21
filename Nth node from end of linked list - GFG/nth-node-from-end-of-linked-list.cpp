//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


/* Function to get the nth node from the last of a linked list*/
int getNthFromLast(struct Node* head, int n);



/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n>>k;
        int firstdata;
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }

    cout<<getNthFromLast(head, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends


/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
        Node* temp = head;
        int len = 0;
       while(temp != NULL){
           len++;
           temp= temp->next;
       }
           //Checking the edge case when the 'n' i.e. node to be deleted
      //from end of the list is equal to the number of nodes in the 
      //linked list.
      /*For Example :- 
                       Input : [7,4] , n=2
                       Output: [4]
      */
      if(len==n)
      {
          Node *node=head;
          return node->data;
      }
        
        if(n>len){ return -1;}
       int des = len-n-1;
        temp = head;
       for(int i = 0;i<des;i++){
          temp = temp->next;
          
       }
       Node *node=temp->next;
//   temp->next = node->next;
//   delete node;

    
   return node->data;
}

