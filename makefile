all:	libyautf.o	libyautf.so

test:	libyautf.o	libyautf.so	yautf_test

libyautf.o:
	g++ -Wall -c src/yautf.cc -fPIC -o bin/libyautf.o

libyautf.so:
	g++ -Wall -shared bin/libyautf.o -o bin/libyautf.so

yautf_test:
	g++ -Wall src/yautf_test.cc -o bin/yautf_test -L/home/srv/dev/YAUTF/bin -lyautf

clean:
	rm -f bin/*.o
	rm -f bin/*.so
	rm -f bin/yautf_test
