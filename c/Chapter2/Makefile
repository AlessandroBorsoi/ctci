CC = g++
CFLAGS = -Wall -g
EXEC = tester
OBJS = TestChapter2.o Q2.1.o Q2.2.o Q2.3.o Q2.4.o Q2.5.o
CPPUNIT = -L/usr/local/lib -lcppunit

$(EXEC): $(OBJS)
	@echo "linking..."
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS) $(CPPUNIT)
$(OBJS): TestChapter2.h Chapter2.h
clean:
	rm $(EXEC) $(OBJS)
