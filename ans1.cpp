 # include <iostream>
   using namespace std;


   struct Node{

     int data ;
     Node* next;

   };


   int main (){

     Node*head = new Node{34 , nullptr};
     head->next = new Node{12, nullptr};
     head->next->next = new Node {55 , nullptr};
     head->next->next->next = new Node {42,nullptr};
     head->next->next->next->next = new Node {11 , nullptr};


     int count = 0 ;
     Node*temp = head ;

     while (temp!=nullptr){

         count ++;
         temp = temp ->next;

     }
     cout<<count << endl;
     return 0;

   }
