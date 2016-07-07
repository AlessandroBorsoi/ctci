CC = g++
CFLAGS = -Wall -g
EXEC = tester
OBJS = TestChapter1.o Q1.1.o Q1.2.o Q1.3.o Q1.4.o
CPPUNIT = -L/usr/local/lib -lcppunit

$(EXEC): $(OBJS)
	@echo "linking..."
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS) $(CPPUNIT)
$(OBJS): TestChapter1.h Q1.1.h Q1.2.h Q1.3.h Q1.4.h
clean:
	rm $(EXEC) $(OBJS)
