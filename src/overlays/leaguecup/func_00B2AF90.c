/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void func_00B2A310(void);
extern void func_00B2A6A0(void);
extern void **func_00B2BF70(void);

void func_00B2AF90(void) {
    void **resource;

    resource = func_00B2BF70();
    if (resource != 0) {
        *resource = func_001D5A10(0x10314);
        func_00B2A6A0();
        func_00B2A310();
    }
}
