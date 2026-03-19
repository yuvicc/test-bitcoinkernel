#include <iostream>

template <int i>
void a()
{
  a<i + 1>();
}

void bar()
{
  a<0>();
}

int main()
{
  int arr[10];

  arr[100] = 100;
  cout << "Hi I am Yuvicc";
}
