#include "test.hh"

Test<typename T>::Test(std::string name, T expected)
{
    this->Name = name;
    this->Expected = expected;
}

void Test<typename T>::SetActual(T actual)
{
    this->Actual = actual;
}

TestResult Assert()
{
    if (this->Expected == this->Actual)
    {
        this->Result = true;
    }
    else
    {
        this->Result = false;
    }
    return new TestResult(this->Expected, this->Actual, this->Result);
}