#ifndef TVECTOR_H
#define TVECTOR_H
#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>
#include <iostream>

class tVector
{
private:
    std::vector<long double> data;
public:
    tVector();
    tVector(int elemCount);
    tVector(const tVector & rVector);
    void resize(int elemCount);
    int size() const;
    long double operator [] (int elemPlace) const;
    long double& operator [] (int elemPlace);
    void print () const;
    friend void print(const tVector & printVector)
    {
        std::copy(printVector.data.begin(), printVector.data.end(), std::ostream_iterator<int>(std::cout, " "));
    }
    tVector & operator = (const tVector & rVector);
    tVector operator + (const tVector & rVector) const;
    tVector operator - (const tVector & rVector) const;

};


#endif // TVECTOR_H
