#pragma once

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include <cppunit/ui/text/TestRunner.h>
#include "Chapter1.h"

class Chapter1TestCase : public CppUnit::TestCase {
public:
    Chapter1TestCase() {}
    Chapter1TestCase(std::string name) : CppUnit::TestCase(name) {}

    void testUniqueCharacters();
    void testReverseString();
    void testRemoveDuplicates();
    void testIsAnagram();
    void testReplaceSpaces();
    void testRotateMatrix();

    static CppUnit::Test *suite ();
};