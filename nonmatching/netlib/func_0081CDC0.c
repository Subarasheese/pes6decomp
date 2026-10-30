/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0081A040(void *, s32);
extern s32 func_0081C1B0(void *);
extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_008198D0(s32);                         /* extern */
M2C_UNK func_0081A0D0(void *);                      /* extern */
M2C_UNK func_0081BB70(s32);                         /* extern */
extern char D_008A3CE0[];
extern void *D_008A3CE8;
extern char D_008A3CF0[];
extern void *D_008A3CF8;
extern char D_008A3D08[];
extern char D_008A3D18[];
extern char D_008A3D20[];
extern char D_008A3D28[];
extern char D_008A3D30[];

s32 func_0081CDC0(void) {
    u32 sp28;
    s32 sp2C;
    s32 temp_lo;
    s32 temp_s0;
    s8 var_v1;
    u32 temp_v1;

    if ((*(s32 *)D_008A3D08) == 0) {
        return 1;
    }
    if ((*(s32 *)D_008A3D18) == 0) {
        var_v1 = 0;
    } else {
        var_v1 = (*(s8 *)D_008A3D20);
    }
    if (var_v1 == 1) {
        func_00110E58(func_001105C8(), &sp2C, &sp28);
        temp_v1 = (sp28 / 1000U) + (sp2C * 0x3E8);
        if (temp_v1 >= (u32) (*(u32 *)D_008A3D28)) {
            temp_lo = (s32) (temp_v1 - (*(u32 *)D_008A3D28)) / 1000;
            if (temp_lo >= 0) {
                temp_s0 = (*(s32 *)D_008A3D30) - temp_lo;
                if ((*(s32 *)D_008A3D18) != 0) {
                    func_0081A040(D_008A3CE8, temp_s0);
                }
                if (temp_s0 <= 0) {
                    if ((*(s32 *)D_008A3D18) != 0) {
                        func_0081A040(D_008A3CE8, 0);
                    }
                    if ((*(s32 *)D_008A3D18) != 0) {
                        (*(s8 *)D_008A3D20) = 0;
                        (*(u32 *)D_008A3D28) = 0;
                        goto block_25;
                    }
                }
            } else {
                if ((*(s32 *)D_008A3D18) != 0) {
                    func_0081A040(D_008A3CE8, 0);
                }
                if ((*(s32 *)D_008A3D18) != 0) {
                    (*(s8 *)D_008A3D20) = 0;
                    (*(u32 *)D_008A3D28) = 0;
                    goto block_25;
                }
            }
        } else {
            if ((*(s32 *)D_008A3D18) != 0) {
                func_0081A040(D_008A3CE8, 0);
            }
            if ((*(s32 *)D_008A3D18) != 0) {
                (*(s8 *)D_008A3D20) = 0;
                (*(u32 *)D_008A3D28) = 0;
block_25:
                (*(s32 *)D_008A3D30) = 0;
            }
        }
    }
    func_008198D0((*(s32 *)D_008A3CE0));
    func_0081A0D0(D_008A3CE8);
    func_0081BB70((*(s32 *)D_008A3CF0));
    func_0081C1B0(D_008A3CF8);
    return 0;
}
