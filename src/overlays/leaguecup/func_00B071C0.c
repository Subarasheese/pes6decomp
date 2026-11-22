/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void func_00B06590(void);
extern void func_00B06970(void);
extern void **func_00B080B0(void);

void func_00B071C0(void) {
    void **resource;

    resource = func_00B080B0();
    if (resource != 0) {
        *resource = func_001D5A10(0x102B2);
        func_00B06970();
        func_00B06590();
    }
}
