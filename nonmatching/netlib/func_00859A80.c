/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s64 func_00843F40(M2C_UNK, s32);                    /* extern */
M2C_UNK func_00843F50(s64);                         /* extern */
M2C_UNK func_00844D40(M2C_UNK, s32, s32, s32);      /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00858BC0(M2C_UNK, s16);                /* extern */
s64 func_00858C40(M2C_UNK);                         /* extern */
s32 func_00858FA0(void *);                          /* extern */
void *func_00858FD0(M2C_UNK *, s64);                /* extern */
extern char D_008B14D0[];
extern char D_008B21C0[];
extern char D_008B22C0[];
extern char D_008B230C[];

void func_00859A80(s64 arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_s0_2;
    s64 temp_s0;
    s64 temp_s1;

    func_008472D0();
    if (((*(s32 *)D_008B22C0) != 3) && ((*(s32 *)D_008B22C0) != 2) && ((*(s32 *)D_008B22C0) != 1)) {
        (*(s32 *)D_008B230C) = (*(s32 *)D_008B14D0);
        temp_s1 = (s64) (func_00843F40(3, (*(s32 *)D_008B22C0)) << 0x30) >> 0x30;
        temp_s0 = (s64) (arg0 << 0x30) >> 0x30;
        if (temp_s0 == ((s64) (func_00858C40(0) << 0x30) >> 0x30)) {
            temp_s0_2 = *func_008472D0();
            if (temp_s0_2 != ((s64) (func_00858C40(1) << 0x30) >> 0x30)) {
                func_00853B50(1, 0x12, 2, 0, (s64) (temp_s1 << 0x30) >> 0x30, 0, 0, 0);
                func_00858BC0(1, *func_008472D0());
            }
            (*(s32 *)D_008B22C0) = 4;
            func_00844D40(-3, arg2, arg3, arg4);
            return;
        }
        if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), arg0)) != 0) {
            func_00843F50(arg0);
            if (temp_s0 != ((s64) (func_00858C40(1) << 0x30) >> 0x30)) {
                M2C_FIELD(func_00858FD0(((void *)D_008B21C0), (s64) *func_008472D0()), s8 *, 8) = 3;
                func_00858BC0(1, (s16) arg0);
                func_00853B50(1, 0x12, 2, 0, (s64) (temp_s1 << 0x30) >> 0x30, 0, 0, 0);
            }
        } else {
            func_00858BC0(0, (s16) arg0);
        }
        (*(s32 *)D_008B22C0) = 5;
    }
}
