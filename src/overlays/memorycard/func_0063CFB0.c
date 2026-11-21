/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00153FC0(s32, s32, s32);
extern s32 func_0017F850(s32);
extern s32 func_0017F9A0(s32, s32 *, s32 *, s32, s32 *);
extern void func_0063D010(void *);

extern char D_00659360[];
extern s32 D_00659368[];

void func_0063CFB0(void) {
    D_00659368[0] = func_00153FC0(7, 0x40, func_0017F850(0x1037F));
    func_0017F9A0(0x1037F, (s32 *)func_0063D010, NULL, 0, ((void *)D_00659360));
}
