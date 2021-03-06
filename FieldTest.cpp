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
	Field safePosition;
        safePosition.isSafe(6,6);
        ASSERT_TRUE( safePosition.isSafe(6,6) );

	
}

TEST(FieldTest, placeMine)
{
	Field placeMine;
        placeMine.isSafe(2,5);
        ASSERT_TRUE(placeMine.isSafe(2,5) );	
}

TEST(FieldTest, placeMineInBound)
{
	Field minefield;
        minefield.isSafe(6,1);
        ASSERT_TRUE(minefield.isSafe(6,1) );	
}
TEST(FieldTest, placeMineOutOfBound)
{
	Field placeMineOutOfBound;
        placeMineOutOfBound.isSafe(6,1);
        ASSERT_TRUE(placeMineOutOfBound.isSafe(6,11) );	
}
