/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00858FD0(s32 *, s16);
extern char D_008B21C0[];
extern char D_008B22BC[];

int func_00859EB0(short arg0, int arg1) {
    func_00858FD0((int *)D_008B21C0, arg0);
    *(int *)(arg0 * 8 + (u32)D_008B22BC) = arg1;
    return 0;
}
