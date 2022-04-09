#include "unity.h"
#include "function.h"

void setUp(void)
{
}
void tearDown(void)
{
}
void test_input( void )
{
    char *result;
    result = parse_identifier("B1");
    TEST_ASSERT_EQUAL_STRING( "B2", result );
    result = parse_identifier("B2");
    TEST_ASSERT_EQUAL_STRING( "B3", result );
    result = parse_identifier("B9");
    TEST_ASSERT_EQUAL_STRING( "C1", result );
    result = parse_identifier("Z9");
    TEST_ASSERT_EQUAL_STRING( "B1-B1", result );
    result = parse_identifier("B1-B1");
    TEST_ASSERT_EQUAL_STRING( "B1-B2", result );
    result = parse_identifier("B1-Z9");
    TEST_ASSERT_EQUAL_STRING( "B2-B1", result );
    result = parse_identifier("Z9-Z9-Z9-Z9-Z9-Z9-Z9-Z9-Z9-Z9");
    TEST_ASSERT_EQUAL_STRING( "Max identifier", result );
    result = parse_identifier("afavew");
    TEST_ASSERT_EQUAL_STRING( "Invalid identifier", result );
}
