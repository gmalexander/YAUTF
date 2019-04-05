#include "test.hh"

using namespace yautf;

template <typename T>
Test<T>::Test(std::string name, T expected)
{
    this->Name = name;
    this->Expected = expected;
    this->Result = nullptr;
}

template <typename T>
void Test<T>::SetActual(T actual)
{
    this->Actual = actual;
}

template <typename T>
void Test<T>::Assert()
{
    bool result;
    if (this->Expected == this->Actual)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    this->Result = new TestResult<T>(this->Expected, this->Actual, result);
}

template <typename T>
void Test<T>::DisplayResult()
{
    if(this->Result != nullptr)
    {
        std::cout << "For test: " << this->Name << "\n";
        this->Result.DisplayResult();
    }
}

template <typename T>
Test<T>::~Test()
{
    delete this->Result;
}