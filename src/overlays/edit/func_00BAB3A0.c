/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001C4730(void *, const void *, unsigned int);

extern char D_00CE47DC[];

s32 func_00BAB3A0(s32 arg0) {
    func_001C4730((void *) arg0, ((void *)D_00CE47DC), 0x10U);
    return arg0;
}
