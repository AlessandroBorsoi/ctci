#pragma once

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>
#include <cppunit/TestCaller.h>
#include <cppunit/ui/text/TestRunner.h>
#include "Q1.1.h"
#include "Q1.2.h"
#include "Q1.3.h"
#include "Q1.4.h"

class Chapter1TestCase : public CppUnit::TestCase {
public:
 Chapter1TestCase() {}
 Chapter1TestCase(std::string name) : CppUnit::TestCase(name) {}

 void testUniqueCharacters();
 void testReverseString();
 void testRemoveDuplicates();
 void testIsAnagram();

 static CppUnit::Test *suite ();
};