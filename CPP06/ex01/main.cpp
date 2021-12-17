#include <iostream>

struct   Data
{
    std::string type;
    float data;
} SData;


uintptr_t serialize(Data * ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
    return  reinterpret_cast<Data *>(raw);
}

int     main(void)
{
    Data * dat= new Data;
    dat->type = "data";
    dat->data = 24.5;
    uintptr_t u = serialize(dat);
    Data *newDat = deserialize(u);
    std::cout << dat << std::endl << newDat << std::endl;
    std::cout << newDat->type << " " << newDat->data << std::endl;
    delete newDat;
}