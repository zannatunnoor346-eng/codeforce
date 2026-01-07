  #include <iostream>
   using namespace std;

   struct Node{
    int data;
     Node*next;


   };

   int main (){
      Node*head = new Node{1 , nullptr};
      head->next =new Node{4, nullptr};
      head->next->next = new Node {6 , nullptr};
      head->next->next->next = new Node{7, nullptr};
      head->next->next->next->next = new Node {9, nullptr};
      head->next->next->next->next->next = new Node{11 , nullptr};


      while (head!= nullptr && head->data%2==0){

        Node * del = head;
        head=head->next;
        delete del;

      }

      Node*temp =head ;
      while(temp!=nullptr && temp->next!= nullptr){
        if(temp->next->data%2 ==0){
            Node*del= temp->next;
            temp->next = temp->next->next;
            delete del;
        }else{
            temp = temp->next;
        }

      }

        Node*t = head;
        while (t!=nullptr){
            cout<<t->data;
            if(t->next!=nullptr)cout<<"->";
           t = t->next;
        }
        return 0;



   }
