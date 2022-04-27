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

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, zzz_repeats)
{
		Practice testObject;

    ASSERT_EQ(testObject.count_starting_repeats("zzz"), 3);
}

TEST(PracticeTest, a10_repeats)
{
	Practice testObject;

	ASSERT_EQ(testObject.count_starting_repeats("aaaaaaaaaa"), 10);
}

TEST(PracticeTest, b_no_repeats)
{
	Practice testObject;

	ASSERT_EQ(testObject.count_starting_repeats("b_no_other_same_chars"), 1);
}

TEST(PracticeTest, case_check_repeats)
{
	Practice testObject;

	ASSERT_EQ(testObject.count_starting_repeats("Aaaaaaaaa"), 1);
}

TEST(PracticeTest, empty_string_repeats)
{
	Practice testObject;

	ASSERT_EQ(testObject.count_starting_repeats(""), 0);
}

TEST(PracticeTest, palindrome_x)
{
		Practice testObject;

		ASSERT_EQ(testObject.isPalindrome("x"), true);
}

TEST(PracticeTest, palindrome_xx)
{
		Practice testObject;

		ASSERT_EQ(testObject.isPalindrome("xx"), true);
}

TEST(PracticeTest, palindrome_xX)
{
		Practice testObject;

		ASSERT_EQ(testObject.isPalindrome("xX"), true);
}

TEST(PracticeTest, palindrome_xy)
{
		Practice testObject;

		ASSERT_EQ(testObject.isPalindrome("xy"), false);
}

TEST(PracticeTest, palindrome_xyx)
{
		Practice testObject;

		ASSERT_EQ(testObject.isPalindrome("xyx"), true);
}

TEST(PracticeTest, palindrome_xyz)
{
		Practice testObject;

		ASSERT_EQ(testObject.isPalindrome("xyz"), false);
}

TEST(PracticeTest, sortDescending_positive)
{
		Practice testObject;
		int a = 1;
		int b = 2;
		int c = 3;

		testObject.sortDescending(a, b, c);

		ASSERT_EQ(a, 3);
		ASSERT_EQ(b, 2);
		ASSERT_EQ(c, 1);

}

TEST(PracticeTest, sortDescending_negative)
{
		Practice testObject;
		int a = -1;
		int b = -2;
		int c = -3;

		testObject.sortDescending(a, b, c);

		ASSERT_EQ(a, -1);
		ASSERT_EQ(b, -2);
		ASSERT_EQ(c, -3);

}

TEST(PracticeTest, sortDescending_same_number)
{
		Practice testObject;
		int a = 5;
		int b = 5;
		int c = 5;

		testObject.sortDescending(a, b, c);

		ASSERT_EQ(a, 5);
		ASSERT_EQ(b, 5);
		ASSERT_EQ(c, 5);
}

TEST(PracticeTest, sortDescending_2nd_smallest)
{
	Practice testObject;
	int a = 5;
	int b = 1;
	int c = 10;

	testObject.sortDescending(a, b, c);

	ASSERT_EQ(a, 10);
	ASSERT_EQ(b, 5);
	ASSERT_EQ(c, 1);
}

TEST(PracticeTest, sortDescending_2nd_biggest)
{
	Practice testObject;
	int a = 6;
	int b = 10;
	int c = 4;

	testObject.sortDescending(a, b, c);

	ASSERT_EQ(a, 10);
	ASSERT_EQ(b, 6);
	ASSERT_EQ(c, 4);
}

TEST(PracticeTest, nosleep_allnighter)
{
	Practice testObject;
	int sleep[7] = {0, 0, 0, 0, 0, 0, 0};

	int *night = testObject.allnighter(sleep);
	int *result = 0;

	ASSERT_EQ(night, result);
}
