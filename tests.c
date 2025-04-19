#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <criterion/criterion.h>
#include "counts.h"

void runFileTest(char * filename, char * target, int expected) {
  int actual = countWord(filename, target);
  cr_assert_eq(expected,actual, "expected: %d, got: %d", expected, actual );
}

Test(lex20, test_01) { runFileTest("data/file01", "therefore", 2); }
Test(lex20, test_02) { runFileTest("data/file01", "the", 0); }
Test(lex20, test_03) { runFileTest("data/file02", "therefore", 1); }#include <stdio.h>








