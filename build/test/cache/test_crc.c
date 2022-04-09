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

}
