#include <iostream>
#include <stdint.h>
#include "Serializer.hpp"

int main()
{
    Data data;
    data.num = 42;
    data.text = "Hello 1337";

    Data* originalPtr = &data;

    uintptr_t raw = Serializer::serialize(originalPtr);
    std::cout << "Raw pointer : " << raw << std::endl;

    Data* newPtr = Serializer::deserialize(raw);

    std::cout << "Original pointer : " << originalPtr << std::endl;
    std::cout << "Deserialized ptr : " << newPtr << std::endl;

    if (originalPtr == newPtr)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    std::cout << "Data: " << newPtr->num
              << ", " << newPtr->text << std::endl;

    return 0;
}
