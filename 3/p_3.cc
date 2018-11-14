//
// Created by admin on 2018/11/9.
//

#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

void init_string() {
  string a;
  string b = "b";
  string c(10, 'c');
  string d = c;
  d = "d";
  string e("e");
  cout << a << b << c << d << e << endl;
}

void cin_string() {
  string a, b;
  cin >> a >> b;
  cout << a << "," << b << endl;
}

void getlines_string() {
  string a;
  while (getline(cin, a)) {
    if (!a.empty()) {
      cout << a << endl;
    }
  }
}

void for_string() {
  string a("fuck!world!!!!!!");
  decltype(a.size()) b = 0;
  for (char &i:a) {
    cout << i << endl;
    i = static_cast<char>(toupper(i));
    if (ispunct(i)) {
      b++;
    }
  }
  cout << b << " punct in " << a;
}

void init_vector() {
  vector<int> v1, v3{10}, v4(10);
  vector<string> v2{"1", "2", "3"}, v5{"hi"};
  cout << v3.size() << endl << v4.size() << endl;
  for (auto &v:v2) {
    cout << v;
    v = "3";
  }
  for (const auto &v:v3) {
    cout << v;
  }
  for (const auto &v:v4) {
    cout << v;
  }
  for (const auto &v:v5) {
    cout << v;
  }
  for (int i = 1; i < 100; i++) {
    v1.push_back(i);
  }
  v1 = {2, 2, 2};
  ++v1[2];
  for (const auto &v:v1) {
    cout << v;
  }
}

void test_iter() {
  string a = "hello world!";
  for (string::iterator b = a.begin(); b != a.end(); b++) {
    if (!isspace(*b)) {
      *b = static_cast<char>(toupper(*b));
    }
  }
  cout << a;
}

void readonly_iter() {
  vector<string> a{"hello", "", "world"};
  for (vector<string>::const_iterator b = a.cbegin(); b != a.cend() && !b->empty(); b++) {
    cout << (*b) << endl;
  }
}

unsigned init_array_a = 10;
constexpr unsigned init_array_b = 10;

void init_array(){
//  int c[init_array_a]; 据说不可以，但实际尝试却可以的。。。
  int *d[init_array_b];
  int e[10];

  char a1[3] = {'c', '+', '+'};
  char a2[4] = "c++";
  char a3[4] = {'c', '+', '+','\0'};

  char (*p1)[3] = &a1;//指向数组元素的指针
  char a = 'a', b = 'b', c = 'c';
  char *p2[3] = {&a, &b, &c};//指针的数组
  char (&r1)[3] = a1;//数组的引用
  char *(&r2)[3] = p2;//指针数组的引用
}

void point_array(){
  int a1[]{1, 2, 3, 4, 5, 6};
  int *p1 = a1;
  int *b = begin(a1), *c = end(a1), *d = &a1[0], *e = &a1[6];
  cout << (b == p1) << endl;
  cout << (b == d) << endl;
  cout << (c == e) << endl;
}

void array_vector(){
  int a1[]{1, 2, 3, 4, 5, 6};
  vector<int> v1{begin(a1), end(a1)};
  for (auto v:v1) {
    cout << v << endl;
  }
}

void multiple_array(){
  int a32a[3][2] = {{0, 1}, {2, 3}, {4, 5}};
  //等价于上面
  int a32b[3][2] = {0, 1, 2, 3, 4, 5};
  for (int (*p)[2] =&a32a[0]; p != a32a + 3; p++) {
    for (int *q = &(*p[0]); q != *p + 2; q++) {
      cout << *q << ' ';
    }
  }
  cout << '\n';
  //等价于上面
  for (auto p = a32a; p != a32a + 3; p++) {
    for (auto q = *p; q != *p + 2; q++) {
      cout << *q << ' ';
    }
  }
}