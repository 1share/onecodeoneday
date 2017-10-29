obj = main.o mystring.o
ok: $(obj)
	g++ -o ok $(obj)

main.o: main.cpp
mystring.o:mystring.cpp

clean:
	rm -rf ok $(obj)

