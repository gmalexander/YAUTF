#include <string>
#include "testresult.cc"

namespace yautf {

    template <typename T>
    class Test
    {
        public:
            Test(std::string name, T expected);
            void SetActual(T actual);
            void Assert();
            void DisplayResult();
        private:
            std::string Name;
            T Expected;
            T Actual;
            TestResult<T> Result;
    };
}