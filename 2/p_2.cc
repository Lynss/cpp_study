//
// Created by admin on 2018/6/22.
//

#include <assert.h>
#include <iostream>
#include "Sales_data.h"

using namespace std;

void p_212() {
  unsigned u1 = 10, u2 = 42;
  cout << u1 - u2 << endl << u2 - u1 << endl;
//    assert(i == 4294967264);
//    assert(j == 32);
}

void p_231() {
  int i = 0, &ri = i;
  double j = 0.1, &rj = j;
  rj = 0.2;
  cout << j;
  j = 0.3;
  cout << rj;
  rj = ri;
  cout << j;
  cout << rj;
  rj = 0.2;
  i = rj;
  cout << i;
  cout << ri;
  ri = rj;
  cout << i;
  cout << ri;
}

void p_18() {
  int a = 1, b = 2, *c = &a;
  c = &b;
  *c = 3;
  cout << b;
}

void p_20() {
  int i = 42, *p1 = &i;
  *p1 = *p1 * *p1;
  cout << "i=" << i << "p1=" << p1;
}

void p_232() {
  p_18();
  p_20();
}

int j = 0;
void test_const() {
  int a = 1;
  const int c = 2;
  const int *b = &a;
  b = &c;
  int *const d = &a;
  *d = 2;
  constexpr int e = 3;
  constexpr int *f = &j;
  *f = 3;
  constexpr const int *k = &j;
}

void test_auto() {
  auto a = 1, *c = &a;
  decltype(a) *b = &a;
  decltype(c) d = &a;
  decltype(*c) e = a;
  *b = 2;
  cout << a << " " << b;
}

int test_struct() {
  Sales_data a, b;
  double price;
  cin >> a.book_no >> a.units_sold >> price;
  a.revenue = a.units_sold * price;
  cin >> b.book_no >> b.units_sold >> price;
  b.revenue = b.units_sold * price;
  if (a.book_no == b.book_no) {
    unsigned total_cnt = a.units_sold + b.units_sold;
    double total_revenue = a.revenue + b.revenue;
    cout << a.book_no << " " << total_cnt << " " << total_revenue;
    return 0;
  } else {
    cerr << "not the same book no" << endl;
    return -1;
  }
}

extern const int const1 = 1;