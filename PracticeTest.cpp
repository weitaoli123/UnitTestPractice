/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_case_sensitive)
{
    Practice obj;
    bool actual = obj.isPalindrome("baB");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, consider_spaces)
{
    Practice obj;
    bool actual = obj.isPalindrome("a ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, sorts_desecend)
{
    Practice obj;
    int one = 1;
    int two = 1;
    int three = 2;
    obj.sortDescending(one,two,three);
    ASSERT_LE(one,two);
    ASSERT_LE(two,three);
}
