/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001D4F40(s32);
int func_001D5A10(int argument_0);

int func_008B33C0(int param_1) {
    int value;

    value = func_001D5A10(param_1);
    func_001D4F40(value);
    return value;
}
