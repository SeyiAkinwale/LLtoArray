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
std::vector<std::string> linkedListValues(Node* head) 
{
  std::vector<std::string> temp;
  
  Node* current = head;
  while (current!=nullptr)
  {
    temp.push_back(current->val);
    current=current->next;
  }
  return temp;
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