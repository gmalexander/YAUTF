#include <iostream>
#include <string>
#include <vector>

namespace yautf
{
    template <typename T>
    class TestResult
    {
        public:
            TestResult(T expected, T actual, bool result);
            TestResult();
            void DisplayResult();
        private:
            T Expected;
            T Actual;
            bool Result;
    };
}