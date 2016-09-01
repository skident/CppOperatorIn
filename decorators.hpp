#ifndef DECORATORS_HPP
#define DECORATORS_HPP

#include <vector>

#define in +

template <class T>
bool operator in(T elem, std::vector<T> container)
{
    for (const T& e : container)
    {
        if (elem == e)
            return true;
    }
    return false;
}

#endif // DECORATORS_HPP
