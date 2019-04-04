#include "test.hh"

using namespace yautf;

template <typename T>
Test<T>::Test(std::string name, T expected)
{
    this->Name = name;
    this->Expected = expected;
}

template <typename T>
void Test<T>::SetActual(T actual)
{
    this->Actual = actual;
}

template <typename T>
TestResult<T> Test<T>::Assert()
{
    if (this->Expected == this->Actual)
    {
        this->Result = true;
    }
    else
    {
        this->Result = false;
    }
    return TestResult<T>(this->Expected, this->Actual, this->Result);
}