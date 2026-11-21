/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00AF5FD0(void);
extern void func_002F4E10(void *);

void func_00AF6200(void) {
    u32 *entry;

    entry = (u32 *)func_00AF5FD0();
    if (entry != (u32 *)0x0) {
        func_002F4E10((void *)*entry);
    }
}
