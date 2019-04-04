#include <iostream>
#include "testresult.hh"

TestResult<typename T>::TestResult(T expected, T actual, bool result)
{
    this->Expected = expected;
    this->Actual = actual;
    this->Result = result;
}

void TestResult<typename T>::Render()
{
    std::cout << "RESULT: " << this->Result << "\n";
    std::cout << "Expected: " << this->Expected << " Actual: " << this->Actual;
}