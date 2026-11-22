/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001C4730(void *, const void *, unsigned int);

extern char D_00CE48F0[];

s32 func_00BBC000(s32 arg0, s32 arg1) {
    func_001C4730((char *) arg1, ((char *)D_00CE48F0) + (arg0 * 0x10), 0x10U);
    return arg1;
}
