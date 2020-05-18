#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "parity.h"


/*test lowest possible input*/
void test_parity1(void)
{
    CU_ASSERT(parity(0x0) == 0);
}

/*test a input with odd parity*/
void test_parity2(void)
{
    CU_ASSERT(parity(0xEFFFFFFF) == 1);
}

/*test highest possible input*/
void test_parity3(void)
{
    CU_ASSERT(parity(0xFFFFFFFF) == 0);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("parity", 0, 0);

    CU_add_test(suite, "parity1", test_parity1);
    CU_add_test(suite, "parity2", test_parity2);
    CU_add_test(suite, "parity3", test_parity3);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}