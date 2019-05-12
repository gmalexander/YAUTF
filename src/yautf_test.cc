#include "yautf.hh"

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
template <typename T>
void testInstantiationForType(T actual, T expected, std::string name)
{
   yautf::TestManager<T>* mgmt = new yautf::TestManager<T>();
   yautf::Test<T>* tst = new yautf::Test<T>(name, expected);
   tst->SetActual(actual);
   mgmt->LoadTest(tst);
   mgmt->VerifyTests();
   mgmt->DisplayAllResults();
   delete mgmt;
}

int main()
{
   testInstantiationForType<int>(1, 1, "Testing Integer Instantiation");
   testInstantiationForType<char>('a', 'a', "Testing Character Instantiation");
   testInstantiationForType<std::string>("a", "a", "Testing String Instantiation");
   testInstantiationForType<long>(1l, 1l, "Testing Long Instantiation");
   testInstantiationForType<bool>(true, true, "Testing Boolean Instantiation");
   testInstantiationForType<double>(1.0, 1.0, "Testing Double Instantiation");
   testInstantiationForType<float>(1.0f, 1.0f, "Testing Float Instantiation");
   return 0;
}
