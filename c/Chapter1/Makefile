CC = g++
CFLAGS = -Wall -g
EXEC = tester
OBJS = TestChapter1.o Q1.1.o Q1.2.o Q1.3.o Q1.4.o Q1.5.o Q1.6.o Q1.7.o Q1.8.o
CPPUNIT = -L/usr/local/lib -lcppunit

$(EXEC): $(OBJS)
	@echo "linking..."
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS) $(CPPUNIT)
$(OBJS): TestChapter1.h Chapter1.h
clean:
	rm $(EXEC) $(OBJS)
