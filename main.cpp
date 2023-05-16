#include <vector>
#include <string>
#include <iostream>

class Node {
  public:
    std::string val;
    Node* next;

    Node(std::string initialVal) {
      val = initialVal;
      next = nullptr;
    }
};


//recursive
void linkedListValues(Node* head, std::vector<std::string> &values) 
{
  if(head == nullptr){
    return;
  }
  values.push_back(head->val);
  linkedListValues(head->next, values);
}

std::vector<std::string> linkedListValues(Node* head)
{
  std::vector<std::string> values;
  linkedListValues(head, values);
  return values;
}


void run() {

}

int main ()
{
  Node a("A");
  Node b("B");
  Node c("C");
  Node d("D");
  a.next=&b;
  b.next=&c;
  c.next=&d;
  Node e("E");
  std::vector<std::string>output=linkedListValues(&a);
for(std::string elem:output)std::cout<<elem<<" ";
}