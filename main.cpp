#include <iostream>
#include <set>
#include <list>
#include <vector>
#include <iterator>     // std::next

template<class T>
void print_container(T cont){
  /*for(const auto& i:cont) std::cout << i << " ";
  std::cout << std::endl;*/
  for(auto it = cont.begin(); it != cont.end(); it = std::next(it)) std::cout << *it << " ";
  std::cout << std::endl;
  /*for(auto it = cont.begin(); it != cont.end(); it++) std::cout << *it << " ";
  std::cout << std::endl;*/
}

int main() {
  std::set<std::string> test_set = { "one", "two", "three", "four" };
  print_container(test_set); // four one three two. помните почему такой порядок? :)

  std::list<std::string> test_list = { "one", "two", "three", "four" };
  print_container(test_list); // one, two, three, four

  std::vector<std::string> test_vector = { "one", "two", "three", "four" };
  print_container(test_vector); // one, two, three, four
}
