/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void func_00B0B620(void);
extern void func_00B0B6E0(void);
extern void **func_00B0BEF0(void);

void func_00B0BB10(void) {
    void **resource;

    resource = func_00B0BEF0();
    if (resource != 0) {
        *resource = func_001D5A10(0x10301);
        func_00B0B6E0();
        func_00B0B620();
    }
}
