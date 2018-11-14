#include <iostream>
#include "1/p_1.h"
#include "2/p_3.h"
#include "3/p_3_r.h"
using namespace std;

void test() {
  cout << "how many times greets would you want to greet?\n";
  string greet;
  int times;
  cin >> times >> greet;
  for (int i = 0; i < times; i++) {
    cout << greet << endl;
  }
  cin.get();
}

int test116() {
  int sum = 0, value = 0;
  using std::cin;
  using std::cout;
  cout << "please input the numbers you want to add";
  while (cin >> value) {
    sum += value;
  }
  return sum;
}

int main() {
//  add_item();
//  p_212();
//  p_231();
//  p_232();
//  cout << const1;
//  cout << test116();
//  test_auto();
//  cout << test_struct();
//  init_string();
//  cin_string();
//  getlines_string();
//  for_string();
//  init_vector();
//  test_iter();
//  readonly_iter();
//  init_array();
//  point_array();
//  array_vector();
  multiple_array();
  return 0;
}