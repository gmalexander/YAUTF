#include "yautf.hh"

using namespace yautf;

template <typename T>
Yautf<T>::Yautf()
{
    this->Tests = new std::vector<Test<T>>();
}

template <typename T>
Yautf<T>::~Yautf()
{
    auto start = this->Tests->begin();
    auto end = this->Tests->end();
    this->Tests->erase(start, end);
    delete this->Tests;
}

template <typename T>
void Yautf<T>::LoadTest(Test<T>* tst)
{
    this->Tests->push_back(*tst);
}

template <typename T>
void Yautf<T>::VerifyTests()
{
    for(auto it = this->Tests->begin(); it != this->Tests->end(); it++)
    {
        it->Assert();
    }
}

template <typename T>
void Yautf<T>::DisplayAllResults()
{
    std::cout << "TEST RESULTS:" << "\n";
    for(auto it = this->Tests->begin(); it != this->Tests->end(); it++)
    {
        std::cout << "\n";
        it->DisplayResult();
        std::cout << "\n\n";
    }
}