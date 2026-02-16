#include "Serializer.hpp"

//Use serialize() on the address of the Data object and pass its return value to
//deserialize(). Then, ensure the return value of deserialize() compares equal to the
//original pointer.
//Do not forget to turn in the files of your Data structure

int main()
{
    Data data;
    data.str = "Hello World";
    uintptr_t raw = Serializer().serialize(&data);
    Data* ptr = Serializer().deserialize(raw);
    std::cout << "Data: " << data.str << std::endl;
    std::cout << "Raw: " << raw << std::endl;
    std::cout << "Ptr: " << ptr->str << std::endl;
    return 0;
}