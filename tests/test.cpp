
TEST(ConstructorTests, testDefault) {
    EXPECT_NOT_THROW(Rectangle *aRectangle());
}

TEST(ConstructorTests, testParam) {
    EXPECT_NOT_THROW(Rectangle *aRectangle(5, 6));
}

TEST(ConstructorTests, testDefaultValues) {
    Rectangle *aRectangle();
    EXPECT_EQ(aRectangle->getHeight(), 0);
    EXPECT_EQ(aRectangle->getWidth(), 0);
}

TEST(ConstructorTests, testParamValues) {
    Rectangle *aRectangle(5, 6);
    EXPECT_EQ(aRectangle->getHeight(), 5);
    EXPECT_EQ(aRectangle->getWidth(), 6);
}

//AreaTests
TEST(AreaTests, testDafault) {
    Rectangle *aRectangle();
    EXPECT_EQ(aRectangle->area(), 0);
}

TEST(AreaTests, testParam) {
    Rectangle *aRectangle(5, 6);
    EXPECT_EQ(aRectangle->area(), 30);
}

TEST(AreaTests, testParamEqual) {
    Rectangle *aRectangle(4, 4);
    EXPECT_EQ(*aRectangle->area(), 16);
}

//PerimeterTests
TEST(PerimeterTests, testDefault) {
    Rectangle *aRectangle();
    EXPECT_EQ(aRectangle->perimeter(), 0);
}

TEST(PerimeterTests, testParam) {
    Rectangle *aRectangle(5, 6);
    EXPECT_EQ(aRectangle->perimeter(), 22);
}

TEST(PerimeterTests, testParamEqual) {
    Rectangle *aRectangle(4, 4);
    EXPECT_EQ(aRectangle->perimeter(), 16);
}