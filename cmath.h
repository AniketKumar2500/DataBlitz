#ifndef CMATH_DATAB
#define CMATH_DATAB

#include <Csq/core.h>

auto square=[&](Cell num){
    Cell c;
    c.fval = num.fval * num.fval;
    return c;
};

//
auto plot=[&](Cell x, Cell y){
    string x_, y_;
    x_ = "[";
    y_ = x_;
    for(Cell i : x.array){
        x_ += to_string(i.fval) + ",";
    }
    x_.pop_back();
    x_ += "]";
    for(Cell i : y.array){
        y_ += to_string(i.fval) + ",";
    }
    y_.pop_back();
    y_ += "]";
    
    string command = "python3 -c 'import matplotlib.pyplot as plt;plt.plot(" + x_ + "," + y_ + ");plt.show()'";
    // printf("%s\n",command.c_str());
    system(command.c_str());
};

auto pie=[&](Cell x, Cell y){
    string x_, y_;
    x_ = "[";
    y_ = x_;
    y_ += "\"";
    for(Cell i : x.array){
        x_ += to_string(i.fval) + ",";
    }
    x_.pop_back();
    x_ += "]";
    for(Cell i : y.array){
        y_ += i.sval + "\",\"";
    }
    y_.pop_back();
    y_.pop_back();
    y_ += "]";
    
    string command = "python3 -c 'import matplotlib.pyplot as plt;plt.pie(" + x_ + ",labels = "+ y_ + ");plt.show()'";
    // printf("%s\n",command.c_str()); 
    system(command.c_str());
};



#endif
