#include <vector>
#include "test.cc"

namespace yautf {
    template <typename T>
    class Yautf
    {
        public:
            Yautf();
            ~Yautf();
            void LoadTest(Test<T>* tst);
            void VerifyTests();
            void DisplayAllResults();
        private:
            std::vector<Test<T>>* Tests;
    }
}