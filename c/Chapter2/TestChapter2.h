#pragma once

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include <cppunit/ui/text/TestRunner.h>
#include "Chapter2.h"

class Chapter2TestCase : public CppUnit::TestCase {
public:
    Chapter2TestCase() {}
    Chapter2TestCase(std::string name) : CppUnit::TestCase(name) {}

    void testRemoveUniques();
    void testNthToLast();
    void testRemoveNode();
    void testSumList();

    static CppUnit::Test *suite ();
};