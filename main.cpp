#include <iostream>
#include "Heap.tpp"

int main() {
  // Create a heap of integers
  Heap<int> heap;

  // Insert values into the heap
  heap.insert(5);
  heap.insert(2);
  heap.insert(10);
  heap.insert(1);

  // Get the smallest value from the heap
  int minValue = heap.getMin();
  std::cout << "Smallest value: " << minValue << std::endl;

  // Remove a value from the heap
  heap.remove(2);

  return 0;
}
