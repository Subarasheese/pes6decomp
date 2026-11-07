/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00213920(s32, s32, s32, void *, s32);
M2C_UNK func_002136B0(s32, s16);                    /* extern */
extern char D_00A7E004[];
extern char D_00A7E008[];
extern char D_00A7E00C[];
typedef struct { u8 a:1, b:1, c:6; } Fl;
extern char D_00A7E010[];

void func_009ED5D0(void *arg0, s32 arg1, s16 arg2, s32 arg3) {
    if (((Fl *)D_00A7E010)->b == 0) {
        func_00213920((*(s32 *)D_00A7E00C), arg3, 0, arg0, arg1);
        func_002136B0((*(s32 *)D_00A7E00C), arg2);
        (*(s16 *)D_00A7E008) = arg2;
        (*(s32 *)D_00A7E004) = arg1;
        ((Fl *)D_00A7E010)->b = 1;
    }
}
