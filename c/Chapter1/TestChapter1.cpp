#include "TestChapter1.h"

void Chapter1TestCase::testUniqueCharacters() {
    CPPUNIT_ASSERT(0 == uniqueChars("Alessandro"));
    CPPUNIT_ASSERT(1 == uniqueChars("Mario"));
}

void Chapter1TestCase::testReverseString() {
    char string[] = "Alessandro";
    CPPUNIT_ASSERT_EQUAL(10, len(string));
    reverseString(string);
    CPPUNIT_ASSERT_EQUAL(10, len(string));
    CPPUNIT_ASSERT_EQUAL(10, len("ordnasselA"));
    CPPUNIT_ASSERT(strcmp("ordnasselA", string) == 0);
}

void Chapter1TestCase::testRemoveDuplicates() {
    char string1[] = "Alessandro";
    char string2[] = "aaaaabbbbbccccc";
    removeDuplicates(string1);
    removeDuplicates(string2);
    CPPUNIT_ASSERT(strcmp("Alesandro", string1) == 0);
    CPPUNIT_ASSERT(strcmp("abc", string2) == 0);
}

void Chapter1TestCase::testIsAnagram() {
    char string1[] = "Alessandro";
    char string2[] = "anna";
    CPPUNIT_ASSERT(0 == isAnagram(string1));
    CPPUNIT_ASSERT(1 == isAnagram(string2));
}

CppUnit::Test *Chapter1TestCase::suite () {
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite("Chapter1TestCase");
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testUniqueCharacters", &Chapter1TestCase::testUniqueCharacters));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testReverseString", &Chapter1TestCase::testReverseString));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testRemoveDuplicates", &Chapter1TestCase::testRemoveDuplicates));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testIsAnagram", &Chapter1TestCase::testIsAnagram));
    return suiteOfTests;
}

int main (int argc, char* argv[]) {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(Chapter1TestCase::suite());
    runner.run();
    return 0;
}
 