#if !defined(DATAFRAME_H)
#define DATAFRAME_H

#include <Csq/core.h>

auto DataFrame=[&](Cell cols, Cell data){
    Cell c;
    c.array.push_back(cols);
    c.array.push_back(data);
    c.type = COMPOUND;
    return c;
};


#endif // DATAFRAME_H
