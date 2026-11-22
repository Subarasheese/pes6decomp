/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern void func_00B25BA0(void);
extern void func_00B25F30(void);
extern void **func_00B279D0(void);

void func_00B26A10(void) {
    void **resource;

    resource = func_00B279D0();
    if (resource != 0) {
        *resource = func_001D5A10(0x10313);
        func_00B25F30();
        func_00B25BA0();
    }
}
