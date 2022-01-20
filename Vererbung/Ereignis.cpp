//
// Created by aazat on 18.07.2021.
//
#include <string>
using namespace std;
class Ereignis{
public:
    virtual ~Ereignis() = default;
    virtual string operator()()=0;
    virtual Ereignis& operator =(const Ereignis& o) = 0;
};