#include "TestChapter1.h"

void Chapter1TestCase::testUniqueCharacters() {
    CPPUNIT_ASSERT(0 == uniqueChars("Alessandro"));
    CPPUNIT_ASSERT(1 == uniqueChars("Mario"));
}

void Chapter1TestCase::testUniqueCharacters2() {
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
    char string2[] = "aaaaa";
    char string3[] = "aaaaabbbbbccccc";
    char string4[] = "";
    char string5[] = "abababa";
    removeDuplicates(string1);
    removeDuplicates(string2);
    removeDuplicates(string3);
    removeDuplicates(string4);
    removeDuplicates(string5);
    CPPUNIT_ASSERT(strcmp("Alesandro", string1) == 0);
    CPPUNIT_ASSERT(strcmp("a", string2) == 0);
    CPPUNIT_ASSERT(strcmp("abc", string3) == 0);
    CPPUNIT_ASSERT(strcmp("", string4) == 0);
    CPPUNIT_ASSERT(strcmp("ab", string5) == 0);
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
    23  18  13  8   3
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
    CPPUNIT_ASSERT_EQUAL(16, matrix[0][1]);
    CPPUNIT_ASSERT_EQUAL(11, matrix[0][2]);
    CPPUNIT_ASSERT_EQUAL(6, matrix[0][3]);
    CPPUNIT_ASSERT_EQUAL(1, matrix[0][4]);
    CPPUNIT_ASSERT_EQUAL(22, matrix[1][0]);
    CPPUNIT_ASSERT_EQUAL(17, matrix[1][1]);
    CPPUNIT_ASSERT_EQUAL(12, matrix[1][2]);
    CPPUNIT_ASSERT_EQUAL(7, matrix[1][3]);
    CPPUNIT_ASSERT_EQUAL(2, matrix[1][4]);
    CPPUNIT_ASSERT_EQUAL(23, matrix[2][0]);
    CPPUNIT_ASSERT_EQUAL(18, matrix[2][1]);
    CPPUNIT_ASSERT_EQUAL(13, matrix[2][2]);
    CPPUNIT_ASSERT_EQUAL(8, matrix[2][3]);
    CPPUNIT_ASSERT_EQUAL(3, matrix[2][4]);
    CPPUNIT_ASSERT_EQUAL(24, matrix[3][0]);
    CPPUNIT_ASSERT_EQUAL(19, matrix[3][1]);
    CPPUNIT_ASSERT_EQUAL(14, matrix[3][2]);
    CPPUNIT_ASSERT_EQUAL(9, matrix[3][3]);
    CPPUNIT_ASSERT_EQUAL(4, matrix[3][4]);
    CPPUNIT_ASSERT_EQUAL(25, matrix[4][0]);
    CPPUNIT_ASSERT_EQUAL(20, matrix[4][1]);
    CPPUNIT_ASSERT_EQUAL(15, matrix[4][2]);
    CPPUNIT_ASSERT_EQUAL(10, matrix[4][3]);
    CPPUNIT_ASSERT_EQUAL(5, matrix[4][4]);
}

void Chapter1TestCase::testMatrixZeros() {
    /*
    1   2   5   4   5
    6   7   8   9   10
    0   12  13  14  15
    16  17  18  0   20
    21  22  23  24  25
    26  27  28  29  30

    0   2   5   0   5
    0   7   8   0   10
    0   0   0   0   0
    0   0   0   0   0
    0   22  23  0   25
    0   27  28  0   30
    */
    int matrix[M][N];
    int k = 1;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = k++;
        }
    }
    matrix[2][0] = 0;
    matrix[3][3] = 0;
    matrixZeros(matrix);
    for (int i = 0; i < M; i++) {
        CPPUNIT_ASSERT_EQUAL(0, matrix[i][0]);
    }
    for (int i = 0; i < M; i++) {
        CPPUNIT_ASSERT_EQUAL(0, matrix[i][3]);
    }
    for (int j = 0; j < N; j++) {
        CPPUNIT_ASSERT_EQUAL(0, matrix[2][j]);
    }
    for (int j = 0; j < N; j++) {
        CPPUNIT_ASSERT_EQUAL(0, matrix[3][j]);
    }
}

void Chapter1TestCase::testRotationString() {
    char string[] = "waterbottle";
    char rotation2[] = "erbottlewat";
    char rotation3[] = "waterboTTle";
    char sub[] = "ttle";
    char nosub[] = "TTle";
    CPPUNIT_ASSERT_EQUAL(1, isSubstring(string, sub));
    CPPUNIT_ASSERT_EQUAL(0, isSubstring(string, nosub));
    CPPUNIT_ASSERT_EQUAL(0, isSubstring("aBc", "abc"));
    CPPUNIT_ASSERT_EQUAL(1, isRotationString(string, rotation2));
    CPPUNIT_ASSERT_EQUAL(0, isRotationString(string, rotation3));
}

CppUnit::Test *Chapter1TestCase::suite () {
    CppUnit::TestSuite *suiteOfTests = new CppUnit::TestSuite("Chapter1TestCase");
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testUniqueCharacters", &Chapter1TestCase::testUniqueCharacters));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testUniqueCharacters2", &Chapter1TestCase::testUniqueCharacters2));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testReverseString", &Chapter1TestCase::testReverseString));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testRemoveDuplicates", &Chapter1TestCase::testRemoveDuplicates));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testIsAnagram", &Chapter1TestCase::testIsAnagram));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testReplaceSpaces", &Chapter1TestCase::testReplaceSpaces));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testRotateMatrix", &Chapter1TestCase::testRotateMatrix));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testMatrixZeros", &Chapter1TestCase::testMatrixZeros));
    suiteOfTests->addTest(new CppUnit::TestCaller<Chapter1TestCase>("testRotationString", &Chapter1TestCase::testRotationString));
    return suiteOfTests;
}

int main (int argc, char* argv[]) {
    CppUnit::TextUi::TestRunner runner;
    runner.addTest(Chapter1TestCase::suite());
    runner.run();
    return 0;
}
 