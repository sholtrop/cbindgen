#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

struct NotReprC_Box_i32;

typedef struct NotReprC_Box_i32 Foo;

struct MyStruct {
  int32_t *number;
};

void delete(int32_t *x);

void root(const Foo *a, const struct MyStruct *with_box);