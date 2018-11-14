//
// Created by admin on 2018/6/22.
//

#include "p_1.h"
#include <iostream>
#include "Sales_item.h"

int add_item(){
    Sales_item item1, item2;
    using namespace std;
    cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()) {
        cout << item1 + item2 << endl;
    } else {
        cerr << "error!the book must have the same isbn";
        return -1;
    }
    cin.get();
    return 0;
}


