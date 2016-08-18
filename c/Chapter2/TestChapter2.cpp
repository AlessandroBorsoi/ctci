#include "TestChapter2.h"

void Chapter2TestCase::testRemoveUniques() {
    /* 
    IN:     1 -> 8 -> 3 -> 1 -> 5 -> 7 -> 7
    OUT:    1 -> 8 -> 3 -> 5 -> 7
    */
    int in[] = {1, 8, 3, 1, 5, 7, 7};
    node* listIn = createList(in, 7);
    removeDuplicates(&listIn);
    int out[] = {1, 8, 3, 5, 7};
    node* listOut = createList(out, 5);
    CPPUNIT_ASSERT_EQUAL(0, listCmp(listIn, listOut));
}

void Chapter2TestCase::testNthToLast() {
    int in[] = {1, 8, 3, 1, 5, 7, 7};
    node* list = createList(in, 7);
    int element = nthToLast(list, 3);
    CPPUNIT_ASSERT_EQUAL(1, element);
}

void Chapter2TestCase::testRemoveNode() {
    int in[] = {1, 2, 3, 4, 5};
    node* listIn = createList(in, 5);
    removeNode(listIn->next->next);
    int out[] = {1, 2, 4, 5};
    node* listOut = createList(out, 4);
    CPPUNIT_ASSERT_EQUAL(0, listCmp(listIn, listOut));
}

CppUnit::Test *Chapter2TestCase::suite () {
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite("Chapter2TestCase");
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter2TestCase>("testRemoveUniques", &Chapter2TestCase::testRemoveUniques));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter2TestCase>("testNthToLast", &Chapter2TestCase::testNthToLast));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter2TestCase>("testRemoveNode", &Chapter2TestCase::testRemoveNode));
    return suiteOfTests;
}

int main (int argc, char* argv[]) {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(Chapter2TestCase::suite());
    runner.run();
    return 0;
}
 