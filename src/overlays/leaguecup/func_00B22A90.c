/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void func_00B21C20(void);
extern void func_00B21FB0(void);
extern void **func_00B23A40(void);

void func_00B22A90(void) {
    void **resource;

    resource = func_00B23A40();
    if (resource != 0) {
        *resource = func_001D5A10(0x10312);
        func_00B21FB0();
        func_00B21C20();
    }
}
