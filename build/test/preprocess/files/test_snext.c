#include "src/function.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


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

    UnityAssertEqualString((const char*)(("B2")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(14));

    result = parse_identifier("B2");

    UnityAssertEqualString((const char*)(("B3")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(16));

    result = parse_identifier("B9");

    UnityAssertEqualString((const char*)(("C1")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(18));

    result = parse_identifier("Z9");

    UnityAssertEqualString((const char*)(("B1-B1")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(20));

    result = parse_identifier("B1-B1");

    UnityAssertEqualString((const char*)(("B1-B2")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(22));

    result = parse_identifier("B1-Z9");

    UnityAssertEqualString((const char*)(("B2-B1")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(24));

    result = parse_identifier("Z9-Z9-Z9-Z9-Z9-Z9-Z9-Z9-Z9-Z9");

    UnityAssertEqualString((const char*)(("Max identifier")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(26));

    result = parse_identifier("afavew");

    UnityAssertEqualString((const char*)(("Invalid identifier")), (const char*)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(28));

}
