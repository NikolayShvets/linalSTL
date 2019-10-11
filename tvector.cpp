#include "tvector.h"

tVector::tVector()
{
    this->data.resize(0);
}
tVector::tVector(int elemCount)
{
    this->resize(elemCount);
}
tVector::tVector(const tVector &rVector)
{
    this->data.assign(rVector.data.begin(), rVector.data.end());
}
int tVector::size() const
{
    return this->data.size();
}
void tVector::resize(int elemCount)
{
    this->data.resize(elemCount);
}
long double tVector::operator [](int elemPlace) const
{
    return this->data.at(elemPlace);
}
long double& tVector::operator [](int elemPlace)
{
    return this->data.at(elemPlace);
}
void tVector::print() const
{
    std::copy(this->data.begin(), this->data.end(), std::ostream_iterator<int>(std::cout, " "));
}
tVector & tVector::operator = (const tVector & rVector)
{
    this->data = rVector.data;
    return *this;
}
tVector tVector::operator + (const tVector & rVector) const
{
    tVector resVector;
    std::transform(this->data.begin(), this->data.end(),
                   rVector.data.begin(),std::back_inserter(resVector.data),
                   std::plus<long double>());
    return resVector;
}
tVector tVector::operator - (const tVector & rVector) const
{
    tVector resVector;
    std::transform(this->data.begin(), this->data.end(),
                   rVector.data.begin(),std::back_inserter(resVector.data),
                   std::minus<long double>());
    return resVector;
}
