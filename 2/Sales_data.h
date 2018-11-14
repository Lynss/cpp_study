//
// Created by admin on 2018/11/9.
//

#ifndef CPP_STUDY_SALES_DATA_H
#define CPP_STUDY_SALES_DATA_H

#include <string>
struct Sales_data{
    std::string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif //CPP_STUDY_SALES_DATA_H
