#include "monom.h"
#include <gtest.h>

TEST(Monoms, can_create_monom)
{
	ASSERT_NO_THROW(Monom m(3,123,NULL));
}

TEST(Monoms, cant_create_monom_with_negative_degree)
{
	ASSERT_ANY_THROW(Monom m(3,-1,NULL));
}

TEST(Monoms, cant_create_monom_with_degree_more_that_9)
{
	ASSERT_ANY_THROW(Monom m(3,1000,NULL));
}

TEST(Monoms, can_create_copied_monom)
{
	Monom m(3,111,NULL);
	ASSERT_NO_THROW(Monom m1(m));
}

TEST(Monoms, copied_monom_is_equal_to_source_one) 
{
	Monom m1(3, 111, NULL);
	Monom m2(m1);
	EXPECT_EQ(m1, m2);
}

TEST(Monoms, can_get_coeff)
{
	Monom m(3,111,NULL);
	EXPECT_EQ(3 ,m.GetCoeff());
}

TEST(Monoms, can_get_index)
{
	Monom m(3,111,NULL);
	EXPECT_EQ(111,m.GetDegree());
}

TEST(Monoms, can_set_coeff)
{
	Monom m(3,111,NULL);
	m.SetCoeff(1);
	EXPECT_EQ(1,m.GetCoeff());
}

TEST(Monoms, can_set_index)
{
	Monom m(3,111,NULL);
	m.SetDegree(999);
	EXPECT_EQ(999,m.GetDegree());
}

TEST(Monoms, throws_when_set_element_with_negative_degree)
{
	Monom m;
	ASSERT_ANY_THROW(m.SetDegree(-1));
}

TEST(Monoms, throws_when_set_element_with_too_large_degree)
{
	Monom m;
	ASSERT_ANY_THROW(m.SetDegree(1000));
}

TEST(Monoms, can_get_next)
{
	Monom *p = new Monom;
	Monom m(3,111,p);
	EXPECT_EQ(p,m.GetNext());
}

TEST(Monoms, can_set_next)
{
	Monom m(3,111,NULL);
	Monom *p = new Monom;
	m.SetNext(p);
	EXPECT_EQ(p,m.GetNext());
}
TEST(Monoms, can_assign_monom_to_itself)
{
	Monom m(3,111,NULL);
	ASSERT_NO_THROW(m = m);
}

TEST(Monoms, compare_monom_with_itself_return_true)
{
	Monom m(3,111,NULL);
	EXPECT_EQ(true,m==m);
}

TEST(Monoms, compare_equal_monoms_return_true)
{
	Monom m1(3,111,NULL);
	Monom m2(m1);
	EXPECT_EQ(true, m1==m2);
}

TEST(Monoms, compare_different_monoms)
{
	Monom m1(3,111,NULL);
	Monom m2(2,123,NULL);
	EXPECT_EQ(false,m1==m2);
	
}