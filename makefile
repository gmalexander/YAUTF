all: libyautf.o	libyautf.so

libyautf.o: yautf.cc yautf.hh testresult.hh testresult.cc testmanager.hh testmanager.cc test.cc test.hh
   g++ -c yautf.cc -fPIC -o libyautf.o

libyautf.so:
   g++ -shared libyautf.o -o libyautf.so
   rm libyautf.o

clean:
   rm *.o
   rm *.so