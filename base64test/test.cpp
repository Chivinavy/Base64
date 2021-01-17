#include "pch.h"
#include "gtest/gtest.h"
using namespace std;


TEST(Test1, TestName1) {
	char inputtest[1] = "";
	ASSERT_EQ("", encode(inputtest));
}
TEST(Test2, TestName2) {
	char inputtest[7] = "qwerty";
	ASSERT_EQ("cXdlcnR5", encode(inputtest));
}
TEST(Test3, TestName3) {
	char inputtest[2] = " ";
	ASSERT_EQ("IA==", encode(inputtest));
}
TEST(Test4, TestName4) {
	char inputtest[4] = "Man";
	ASSERT_EQ("TWFu", encode(inputtest));
}
TEST(Test5, TestName5) {
	char inputtest[270] = "Did I ever tell you what the definition of insanity is? Insanity is doing the exact... same fucking thing... over and over again expecting... shit to change... That. Is. Crazy.";
	ASSERT_EQ("RGlkIEkgZXZlciB0ZWxsIHlvdSB3aGF0IHRoZSBkZWZpbml0aW9uIG9mIGluc2FuaXR5IGlzPyBJbnNhbml0eSBpcyBkb2luZyB0aGUgZXhhY3QuLi4gc2FtZSBmdWNraW5nIHRoaW5nLi4uIG92ZXIgYW5kIG92ZXIgYWdhaW4gZXhwZWN0aW5nLi4uIHNoaXQgdG8gY2hhbmdlLi4uIFRoYXQuIElzLiBDcmF6eS4=", encode(inputtest));
}


TEST(Test6, TestName6) {
	char inputtest[1] = "";
	ASSERT_EQ("", decode(inputtest));
}
TEST(Test7, TestName7) {
	char inputtest[9] = "cXdlcnR5";
	ASSERT_EQ("qwerty", decode(inputtest));
}
TEST(Test8, TestName8) {
	char inputtest[5] = "IA==";
	ASSERT_EQ(" ", decode(inputtest));
}
TEST(Test9, TestName9) {
	char inputtest[5] = "TWFu";
	ASSERT_EQ("Man", decode(inputtest));
}
TEST(Test10, TestName10) {
	char inputtest[350] = "RGlkIEkgZXZlciB0ZWxsIHlvdSB3aGF0IHRoZSBkZWZpbml0aW9uIG9mIGluc2FuaXR5IGlzPyBJbnNhbml0eSBpcyBkb2luZyB0aGUgZXhhY3QuLi4gc2FtZSBmdWNraW5nIHRoaW5nLi4uIG92ZXIgYW5kIG92ZXIgYWdhaW4gZXhwZWN0aW5nLi4uIHNoaXQgdG8gY2hhbmdlLi4uIFRoYXQuIElzLiBDcmF6eS4=";
	ASSERT_EQ("Did I ever tell you what the definition of insanity is? Insanity is doing the exact... same fucking thing... over and over again expecting... shit to change... That. Is. Crazy.", decode(inputtest));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}