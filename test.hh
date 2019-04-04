#include <string>
#include "testresult.cc"

template <typename T>
class Test
{
    public:
        Test(std::string name);
        void SetActual(T actual);
        TestResult<T> Assert();
    private:
        std::string Name;
        T Expected;
        T Actual;
        bool Result;
};