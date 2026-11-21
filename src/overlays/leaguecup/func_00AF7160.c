/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0096F610(s32);
extern u8 *func_001F85A0(u16 *, u8 *);
extern char D_00B43520[];
extern char D_00B34380[];

int *func_00AF7160(int arg0) {
    int value;
    int *entry;

    value = func_0096F610(arg0);
    if (value == 0) {
        entry = (int *)0x0;
    } else {
        func_001F85A0((u16 *)(((arg0 & 0xffffU) - 6000) * 0x7c + (u32)D_00B34380),
                      (u8 *)D_00B43520);
        entry = (int *)D_00B43520;
    }
    return entry;
}
