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

void Chapter1TestCase::testReplaceSpaces() {
    char string0[] = "Alessandro";
    char string1[] = "Hello World!";
    char string2[] = "     ";
    char* s0 = replaceSpaces(string0);
    char* s1 = replaceSpaces(string1);
    char* s2 = replaceSpaces(string2);
    CPPUNIT_ASSERT(strcmp("Alessandro", s0) == 0);
    CPPUNIT_ASSERT(strcmp("Hello%20World!", s1) == 0);
    CPPUNIT_ASSERT(strcmp("%20%20%20%20%20", s2) == 0);
}

void Chapter1TestCase::testRotateMatrix() {
    /*
    1   2   5   4   5
    6   7   8   9   10
    11  12  13  14  15
    16  17  18  19  20
    21  22  23  24  25

    21  16  11  6   1
    22  17  12  7   2
    23  18  13  8   5
    24  19  14  9   4
    25  20  15  10  5
    */
    int matrix[N][N];
    int k = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = k++;
        }
    }
    rotateMatrix(matrix);
    CPPUNIT_ASSERT_EQUAL(21, matrix[0][0]);
    CPPUNIT_ASSERT_EQUAL(17, matrix[1][1]);
    CPPUNIT_ASSERT_EQUAL(13, matrix[2][2]);
    CPPUNIT_ASSERT_EQUAL(9, matrix[3][3]);
    CPPUNIT_ASSERT_EQUAL(5, matrix[4][4]);
}

CppUnit::Test *Chapter1TestCase::suite () {
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite("Chapter1TestCase");
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testUniqueCharacters", &Chapter1TestCase::testUniqueCharacters));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testReverseString", &Chapter1TestCase::testReverseString));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testRemoveDuplicates", &Chapter1TestCase::testRemoveDuplicates));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testIsAnagram", &Chapter1TestCase::testIsAnagram));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testReplaceSpaces", &Chapter1TestCase::testReplaceSpaces));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testRotateMatrix", &Chapter1TestCase::testRotateMatrix));
    return suiteOfTests;
}

int main (int argc, char* argv[]) {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(Chapter1TestCase::suite());
    runner.run();
    return 0;
}
 