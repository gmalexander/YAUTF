#include "testresult.cc"

/**************************************************************************************************
*    YAUTF, Yet Another Unit Testing Framework. A microframework for quick C++ unit testing.      *
*    Copyright (C) 2019  Grant Alexander                                                          *
*                                                                                                 *
*    This program is free software: you can redistribute it and/or modify                         *
*    it under the terms of the GNU Lesser General Public License as published by                  *
*    the Free Software Foundation, either version 3 of the License, or                            *
*    (at your option) any later version.                                                          *
*                                                                                                 *
*    This program is distributed in the hope that it will be useful,                              *
*    but WITHOUT ANY WARRANTY; without even the implied warranty of                               *
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                                *
*    GNU General Public License for more details.                                                 *
*                                                                                                 *
*    You should have received a copy of the GNU General Public License                            *
*    along with this program.  If not, see <https://www.gnu.org/licenses/>.                       *
***************************************************************************************************/

namespace yautf
{
    template <typename T>
    class Test
    {
        public:
            Test(std::string name, T expected);
            ~Test();
            void SetActual(T actual);
            void Assert();
            void DisplayResult();
        private:
            std::string Name;
            T Expected;
            T Actual;
            TestResult<T>* Result;
    };
}