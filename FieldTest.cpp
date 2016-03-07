/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, safePosiition)
{
	Field minefield;
         minefield.isSafe(6,6);
        ASSERT_TRUE( minefield.isSafe(6,6) );	
}

TEST(FieldTest, safePosiition1)
{
	Field minefield;
        minefield.isSafe(3,4);
        ASSERT_TRUE( minefield.isSafe(3,4) );	
}

TEST(FieldTest, safePosiitionLeft)
{
	Field minefield;
        minefield.isSafe(3,5);
        ASSERT_TRUE( minefield.isSafe(3,5) );	
}

TEST(FieldTest, safePosiitionRight)
{
	Field minefield;
        minefield.isSafe(3,6);
        ASSERT_TRUE( minefield.isSafe(3,6) );	
}
TEST(FieldTest, placeMine)
{
	Field minefield;
        minefield.isSafe(2,5);
        ASSERT_TRUE(minefield.isSafe(2,5) );	
}

TEST(FieldTest, placeMineInBound)
{
	Field minefield;
        minefield.isSafe(6,1);
        ASSERT_TRUE(minefield.isSafe(6,1) );	
}
