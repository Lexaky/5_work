#include "pch.h"
#include "head.hpp"
#include "point.cpp"

TEST(operatorTest, plusOperator) {
	Point* newPoint1 = new Point(1, 2);
	Point* newPoint2 = new Point(2, 1);
		*newPoint1 = *newPoint1 + *newPoint2;
	EXPECT_EQ(3, newPoint1->getX());
	EXPECT_EQ(3, newPoint1->getY());
}

TEST(operatorTest, minusOperator)
{
	Point* newPoint1 = new Point(4, 3);
	Point* newPoint2 = new Point(3, 2);
		*newPoint1 = *newPoint1 - *newPoint2;
	EXPECT_EQ(1, newPoint1->getX());
	EXPECT_EQ(1, newPoint1->getY());
	EXPECT_EQ('0', newPoint1->getName());
}

TEST(operatorTest, multiplicationOperator)
{
	Point* newPoint1 = new Point(-4, 10);
	Point* newPoint2 = new Point(3, -9);
		*newPoint1 = *newPoint1 * *newPoint2;
	EXPECT_EQ(-12, newPoint1->getX());
	EXPECT_EQ(-90, newPoint1->getY());
	EXPECT_EQ('0', newPoint1->getName());
}

TEST(operatorTest, divideOperator)
{
	Point* newPoint1 = new Point(-45, 99);
	Point* newPoint2 = new Point(3, -9);
		*newPoint1 = *newPoint1 / *newPoint2;
	EXPECT_EQ(-15, newPoint1->getX());
	EXPECT_EQ(-11, newPoint1->getY());
	EXPECT_EQ('0', newPoint1->getName());
}

TEST(operatorTest, inverseOperator)
{
	Point* newPoint = new Point(32, 64, 'A');
		*newPoint = !*newPoint;
	EXPECT_EQ(~32, newPoint->getX());
	EXPECT_EQ(~64, newPoint->getY());
	EXPECT_EQ('A', newPoint->getName());
}

TEST(opeartorTest, lessThanOperator)
{
	Point *newPoint1 = new Point(3, 3);
	Point *newPoint2 = new Point(5, 5);
	EXPECT_EQ(true, *newPoint1 < *newPoint2); // (3;3) < (5;5);
		newPoint2->setY(1);
	EXPECT_EQ(false, *newPoint1 < *newPoint2); // (3;3) < (5;1);
		newPoint2->setX(0);
		newPoint2->setY(2);
	EXPECT_EQ(false, *newPoint1 < *newPoint2); // (3;3) < (0;2)
		newPoint2->setX(0);
		newPoint2->setY(0);
	EXPECT_EQ(false, *newPoint1 < *newPoint2); // (3;3) < (0;0)
}

TEST(operatorTest, moreThanOperator)
{
	Point* newPoint1 = new Point(1, 1);
	Point* newPoint2 = new Point(2, 2);
	EXPECT_EQ(false, *newPoint1 > *newPoint2); // (1;1) > (2;2);
		newPoint2->setY(1);
	EXPECT_EQ(false, *newPoint1 > *newPoint2); // (1;1) > (2;1);
		newPoint2->setX(0);
		newPoint2->setY(2);
	EXPECT_EQ(false, *newPoint1 > *newPoint2); // (1;1) > (0;2)
		newPoint2->setX(0);
		newPoint2->setY(0);
	EXPECT_EQ(true, *newPoint1 > *newPoint2); // (1;1) > (0;0)
}

TEST(operatorTest, middleValueOperator)
{
	Point* newPoint1 = new Point(4, 3);
	Point* newPoint2 = new Point(10, 10);
	EXPECT_EQ(7, (*newPoint1 ^ *newPoint2).getX());
	EXPECT_EQ(6, (*newPoint1 ^ *newPoint2).getY());
}

TEST(constructorTest, constructorLowDescription)
{
	Point* newPoint = new Point();
	EXPECT_EQ('0', newPoint->getName());
	EXPECT_EQ(0, newPoint->getX());
	EXPECT_EQ(0, newPoint->getY());
}

TEST(constructorTest, constructorMiddleDescription)
{
	Point* newPoint = new Point(100, 200);
	EXPECT_EQ('0', newPoint->getName());
	EXPECT_EQ(100, newPoint->getX());
	EXPECT_EQ(200, newPoint->getY());
}

TEST(constructorTest, constructorFullDescription)
{
	Point* newPoint = new Point(112, 911, 'N');
	EXPECT_EQ('N', newPoint->getName());
	EXPECT_EQ(112, newPoint->getX());
	EXPECT_EQ(911, newPoint->getY());
}

TEST(methodTest, methodSetX_GetX)
{
	Point* newPoint = new Point();
	newPoint->setX(123);
	EXPECT_EQ(123, newPoint->getX());
}
TEST(methodTest, methodSetY_GetY)
{
	Point* newPoint = new Point();
	newPoint->setY(123);
	EXPECT_EQ(123, newPoint->getY());
}

TEST(methodTest, methodSetName_GetName)
{
	Point* newPoint = new Point();
	newPoint->setName('K');
	EXPECT_EQ('K', newPoint->getName());
}
