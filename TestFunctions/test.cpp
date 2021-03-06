#include "pch.h"
#include "../Calculator/Sum.cpp"
#include "../Calculator/Diff.cpp"
#include "../Calculator/Multi.cpp"
#include "../Calculator/Div.cpp"
#include "../Calculator/Root.cpp"
#include "../Calculator/Expon.cpp"
#include "../Calculator/Delete.cpp" 
#include "../Calculator/Clear.cpp" 
#include <string>

TEST(TestSumInt, TestPozitive) {
	ASSERT_EQ(12, Sum(7, 5));
	ASSERT_EQ(50, Sum(12, 38));
	ASSERT_EQ(111, Sum(11, 100));
}

TEST(TestSumInt, TestNegative) {
	ASSERT_EQ(-47, Sum(-50, 3));
	ASSERT_EQ(0, Sum(11, -11));
	ASSERT_EQ(-5, Sum(-2, -3));
}

TEST(TestSumFloat, TestPozitive) {
	ASSERT_DOUBLE_EQ(1276.899, Sum(11.95, 1264.949));
	ASSERT_DOUBLE_EQ(50, Sum(24.999, 25.001));
	ASSERT_DOUBLE_EQ(0.67871, Sum(0.002, 0.67671));
}

TEST(TestSumFloat, TestNegative) {
	ASSERT_DOUBLE_EQ(-0.0012, Sum(-0.0007, -0.0005));
	ASSERT_DOUBLE_EQ(-150.555, Sum(-188.777, 38.222));
	ASSERT_DOUBLE_EQ(-11798.0065, Sum(-8369.00059, -3429.00591));
}

TEST(TestDiffInt, TestPozitive) {
	ASSERT_EQ(12, Diff(17, 5));
	ASSERT_EQ(570, Diff(790, 220));
	ASSERT_EQ(12049, Diff(20014, 7965));
}

TEST(TestDiffInt, TestNegative) {
	ASSERT_EQ(-12, Diff(-7, 5));
	ASSERT_EQ(-682, Diff(-1350, -668));
	ASSERT_EQ(123862, Diff(95953, -27909));
}

TEST(TestDiffFloat, TestPozitive) {
	ASSERT_DOUBLE_EQ(1.9777, Diff(1.9826, 0.0049));
	ASSERT_DOUBLE_EQ(-287.1076, Diff(596.1184, 883.226));
	ASSERT_DOUBLE_EQ(5524698.63579, Diff(6479520.00089, 954821.3651));
}

TEST(TestDiffFloat, TestNegative) {
	ASSERT_DOUBLE_EQ(-5.00008, Diff(-0.00008, 5));
	ASSERT_DOUBLE_EQ(-219.3775, Diff(-125.347, 94.0305));
	ASSERT_DOUBLE_EQ(21419508.747447, Diff(21482163.000007, 62654.25256));
}

TEST(TestMultiInt, TestPozitive) {
	ASSERT_EQ(144, Multi(18, 8));
	ASSERT_EQ(307330, Multi(365, 842));
	ASSERT_EQ(520297666, Multi(20489, 25394));
}

TEST(TestMultiInt, TestNegative) {
	ASSERT_EQ(-380, Multi(-20, 19));
	ASSERT_EQ(-32830050, Multi(6666, -4925));
	ASSERT_EQ(3295229168, Multi(-34568, -95326));
}

TEST(TestMultiFloat, TestPozitive) {
	ASSERT_DOUBLE_EQ(0.002535, Multi(0.003, 0.845));
	ASSERT_DOUBLE_EQ(33.40479555, Multi(35.34899, 0.945));
	ASSERT_DOUBLE_EQ(254714364.734326, Multi(554932.652, 459.0005));
}

TEST(TestMultiFloat, TestNegative) {
	ASSERT_DOUBLE_EQ(-0.04960032, Multi(-62.0004, 0.0008));
	ASSERT_DOUBLE_EQ(9391.141987812, Multi(-28.20084, -333.0093));
	ASSERT_DOUBLE_EQ(-20459598.15243894, Multi(2604.954, -7854.11111));
}

TEST(TestDivInt, TestPozitive) {
	ASSERT_EQ(18, Div(432, 24));
	ASSERT_EQ(3351, Div(17589399, 5249));
	ASSERT_EQ(6251, Div(41599298573, 6654823));
}

TEST(TestDivInt, TestNegative) {
	ASSERT_EQ(-5, Div(-25, 5));
	ASSERT_EQ(-362, Div(2998808, -8284));
	ASSERT_EQ(32416, Div(-20244764480, -624530));
}

TEST(TestDivFloat, TestPozitive) {
	ASSERT_DOUBLE_EQ(0.0624, Div(0.003905616, 0.06259));
	ASSERT_DOUBLE_EQ(24.541, Div(12882.822491, 524.951));
	ASSERT_DOUBLE_EQ(764.0038, Div(2559324.64036186, 3349.8847));
}

TEST(TestDivFloat, TestNegative) {
	ASSERT_DOUBLE_EQ(-62.0004, Div(-0.04960032, 0.0008));
	ASSERT_DOUBLE_EQ(28.20084, Div(-9391.141987812, -333.0093));
	ASSERT_DOUBLE_EQ(-2604.954, Div(20459598.15243894, -7854.11111));
}

TEST(TestRoot, TestInt) {
	ASSERT_EQ(2, Root(4));
	ASSERT_EQ(268, Root(71824));
	ASSERT_EQ(92492, Root(8554770064));
}

TEST(TestRoot, TestFloat) {
	ASSERT_DOUBLE_EQ(0.008, Root(0.000064));
	ASSERT_DOUBLE_EQ(245.332, Root(60187.790224));
	ASSERT_DOUBLE_EQ(989637.0187, Root(979381428781.4241));
}

TEST(TestExponInt, TestPozitive) {
	ASSERT_EQ(1, Expon(1));
	ASSERT_EQ(841, Expon(29));
	ASSERT_EQ(8549406369, Expon(92463));
}

TEST(TestExponInt, TestNegative) {
	ASSERT_EQ(36, Expon(-6));
	ASSERT_EQ(60516, Expon(-246));
	ASSERT_EQ(133577092324, Expon(-365482));
}

TEST(TestExponFloat, TestPozitive) {
	ASSERT_DOUBLE_EQ(0.00008836, Expon(0.0094));
	ASSERT_DOUBLE_EQ(1093.32067716, Expon(33.0654));
	ASSERT_DOUBLE_EQ(340545485533.4848, Expon(583562.75201));
}

TEST(TestExponFloat, TestNegative) {
	ASSERT_DOUBLE_EQ(1.110922324009, Expon(-1.054003));
	ASSERT_DOUBLE_EQ(2116.5051101401, Expon(-46.00549));
	ASSERT_DOUBLE_EQ(511527665674.29419, Expon(-715211.623));
}

TEST(TestData, TestDelete) {
	string s1 = "1984", s2 = "198", s3 = "19+448=", s4 = "19+448";
	ASSERT_STRCASEEQ(s2.c_str(), Delete(s1).c_str());
	ASSERT_STRCASEEQ(s4.c_str(), Delete(s3).c_str());
}

TEST(TestData, TestClear) {
	ASSERT_STRCASEEQ("0", Clear().c_str());
	ASSERT_STRCASEEQ("0", Clear().c_str());
	ASSERT_STRCASEEQ("0", Clear().c_str());
}