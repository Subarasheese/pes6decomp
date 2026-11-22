/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001BB080(char *);
extern void *func_001C48E8(void *, int, unsigned int);
extern char D_00CCCE30[];
extern char D_00CCD088[];

void func_00C88E50(u32 arg0) {
    char *temp_s0;

    if (((*(s32 *)D_00CCD088) != 0) && (arg0 < 0x21U)) {
        temp_s0 = ((char *)D_00CCCE30) + (arg0 << 5) + 0x25C;
        func_001BB080(temp_s0);
        func_001C48E8(temp_s0, 0, 0x20);
    }
}
