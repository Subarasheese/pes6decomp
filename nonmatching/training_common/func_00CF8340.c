/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_00271E40();                            /* extern */
M2C_UNK func_009B6810();                            /* extern */
M2C_UNK func_00CD7960(M2C_UNK);                     /* extern */
extern char D_00591BE4[];
extern char D_00591DB4[];
extern char D_00591DB5[];
extern char D_00591DD5[];
extern char D_00591E10[];
extern char D_00591F24[];
extern char D_005E3828[];

void func_00CF8340(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    if ((*(u8 *)D_00591DD5) == 0) {
        func_00271E40();
        func_009B6810();
        if ((*(s8 *)D_00591DB5) == 0) {
            func_00204D90();
        }
    } else {
        (*(u8 *)D_00591DD5) = 0;
        func_00264790(arg0, 6U);
    }
    if (((*(s32 *)D_005E3828) != 0) && ((((*(s16 *)D_00591E10) > 0) && ((*(s16 *)D_00591E10) < (s32) (*(u8 *)D_00591BE4))) || ((*(u8 *)D_00591F24) == 3))) {
        (*(s8 *)D_00591DB4) = 0;
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x18);
        if ((temp_v0 != 1) && (temp_v0 != 0)) {

        } else {
            func_00CD7960(0x20);
        }
        func_00264790(arg0, 3U);
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x34);
        switch (temp_a0) {                          /* irregular */
        case 1:
            (*(s8 *)D_00591DB4) = 0;
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18);
            if ((temp_v0_2 != 1) && (temp_v0_2 != 0)) {

            } else {
                func_00CD7960(0x20);
            }
            func_00264790(arg0, 3U);
            return;
        case 2:
            (*(s8 *)D_00591DB4) = 0;
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x18);
            if ((temp_v0_3 != 1) && (temp_v0_3 != 0)) {

            } else {
                func_00CD7960(0x20);
            }
            M2C_FIELD(arg0, s32 *, 0x214) = 2;
            func_00264790(arg0, 3U);
            return;
        }
    }
}
