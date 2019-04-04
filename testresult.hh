template <typename T>
class TestResult
{
    public:
        TestResult(T expected, T actual, bool result);
        void DisplayResult();
    private:
        T Expected;
        T Actual;
        bool Result;
};