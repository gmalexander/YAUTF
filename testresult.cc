#include "testresult.hh"

using namespace yautf;

template <typename T>
TestResult<T>::TestResult() {}

template <typename T>
TestResult<T>::TestResult(T expected, T actual, bool result)
{
    this->Expected = expected;
    this->Actual = actual;
    this->Result = result;
}

template <typename T>
void TestResult<T>::DisplayResult()
{
    std::string resultReadable;
    if (this->Result)
    {
       resultReadable = "SUCCESS";
    }
    else
    {
        resultReadable = "FAILURE";
    }
    std::cout << "RESULT: " << resultReadable << "\n";
    std::cout << "Expected: " << this->Expected << " Actual: " << this->Actual << "\n";
}