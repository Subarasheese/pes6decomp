/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001C4730(void *, const void *, unsigned int);

extern char D_003AEA10[];

void func_002CE470(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_001C4730((char *) arg1, ((char *)D_003AEA10) + (arg0 * 4), 4U);
    }
}
