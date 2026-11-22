/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void **func_00B30A60(void);
extern void func_00B30BB0(void);
extern void func_00B31330(void);

void func_00B316D0(void) {
    void **resource;

    resource = func_00B30A60();
    if (resource != 0) {
        *resource = func_001D5A10(0x10301);
        func_00B31330();
        if (func_00B30A60() != 0) {
            func_00B30BB0();
        }
    }
}
