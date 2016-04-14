#include "polinom.h"
#include <gtest.h>
using namespace std;

TEST(Polinoms, can_create_polinom)
{
	ASSERT_NO_THROW(Polinom p);
}

TEST(Polinoms, can_create_copied_polinom)
{
	Polinom p1;
	ASSERT_NO_THROW(Polinom p2(p1));
}

TEST(Polinoms, copied_polinom_is_equal_to_source_one)
{
	Polinom p1;
	for (int i = 1; i < 5; i++)
		p1.AddMonom(i,i*111);
	Polinom p2(p1);
	EXPECT_EQ(p2,p1);
}


TEST(Polinoms, can_assign_polinom_to_itself)
{
	Polinom p;
    p.AddMonom(3,111);
	ASSERT_NO_THROW(p = p);
}

TEST(Polinoms, compare_equal_polinoms_return_true)
{
	Polinom p1;
	for (int i = 1; i < 5; i++)
		p1.AddMonom(i, i * 111);
	Polinom p2(p1);
	EXPECT_EQ(true,p1==p2);
}

TEST(Polinoms, compare_polinom_with_itself_return_true)
{
	Polinom p;
	p.AddMonom(3,111);
	EXPECT_EQ(true,p==p);
}

TEST(Polinoms, compare_different_polinoms_return_false)
{
	Polinom p1,p2;
	p1.AddMonom(3,111);
	p2.AddMonom(2,222);
	EXPECT_EQ(false,p1==p2);
}

TEST(Polinoms, input) 
{
	Polinom p1,p2;
	p1.AddMonom(3,111);
	stringstream s;
	s << "3xyz";
	s >> p2;
	EXPECT_EQ(p1, p2);
}

TEST(Polinoms, output)
{
	Polinom p;
	p.AddMonom(3,100);
	stringstream s;
	s << p;
	string str;
	getline(s, str);
	EXPECT_EQ(string("3x\0"), str);
}

TEST(Polinoms, can_clean_polinom)
{
	Polinom p;
	p.AddMonom(1,111);
	p.AddMonom(2,222);
	p.AddMonom(3,333);
	p.Clean();
	EXPECT_EQ(true,p.GetHead()==NULL);
}

TEST(Polinoms, can_sort_polinom)
{
	Polinom p1;
	p1.AddMonom(1,333);
	p1.AddMonom(1,444);
	p1.AddMonom(1,123);
	Polinom p2;
	p2.AddMonom(1,123);
	p2.AddMonom(1,333);
	p2.AddMonom(1,444);
	EXPECT_EQ(p1,p2);
}

TEST(Polinoms, can_add_polinoms_with_equal_Degree)
{
	Polinom p1,p2;
	p1.AddMonom(3,123);
	p2.AddMonom(2,123);	
	Polinom res;
	res.AddMonom(5,123);
	EXPECT_EQ(res,p1+p2);
}

TEST(Polinoms, can_add_polinoms_with_not_equal_Degree)
{
	Polinom p1,p2;
	p1.AddMonom(3,123);
	p2.AddMonom(1,321);
	Polinom res;
	res.AddMonom(1,321);
	res.AddMonom(3,123);
	EXPECT_EQ(res,p1+p2);
}

TEST(Polinoms, can_substract_polinoms_with_equal_Degree)
{	
	Polinom p1, p2;
	p1.AddMonom(3, 123);
	p2.AddMonom(2, 123);
	Polinom res;
	res.AddMonom(1, 123);
	EXPECT_EQ(res, p1 - p2);
}

TEST(Polinoms, can_substract_polinoms_with_not_equal_Degree)
{
	Polinom p1, p2;
	p1.AddMonom(3, 123);
	p2.AddMonom(1, 321);
	Polinom res;
	res.AddMonom(-1, 321);
	res.AddMonom(3, 123);
	EXPECT_EQ(res, p1 - p2);
}

TEST(Polinoms, can_multiply_polinoms)
{
	Polinom p1,p2,res;
	p1.AddMonom(3,123);
	p2.AddMonom(2,321);
	p1 = p1*p2;
	res.AddMonom(6,444);
	EXPECT_EQ(p1,res);
}

TEST(Polinoms, throws_when_multiply_polinoms_with_large_degrees)
{
	Polinom p1,p2;
	p1.AddMonom(1,700);
	p2.AddMonom(1,700);
	ASSERT_ANY_THROW(p1*p2);
}
