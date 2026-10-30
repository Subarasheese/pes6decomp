/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00225680(s32);                         /* extern */
s32 func_00225820();                                /* extern */
s32 func_00984AD0(M2C_UNK, s32);                    /* extern */
s32 func_0099B630(M2C_UNK);                         /* extern */
extern s32 D_003EAE9C;
extern s32 D_003EAEA0;
extern s32 D_003EAEA4;
extern s32 D_003EAEA8;

void func_00B52DD0(s32 arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5) {
    s32 temp_s0;
    s32 temp_s1;

    temp_s1 = func_00225820() & 0xFF;
    func_00225680(temp_s1);
    if (arg1 == 1) {
        temp_s0 = arg0 & 0xFF;
        D_003EAE9C = 0;
        D_003EAEA0 = 0;
        D_003EAEA4 = 0;
        D_003EAEA8 = 0;
        if ((temp_s0 >= (func_0099B630(9) & 0xFF)) && (func_00984AD0(9, temp_s1) == 1)) {
            D_003EAE9C = 1;
        }
        if ((temp_s0 >= (func_0099B630(8) & 0xFF)) && (func_00984AD0(8, temp_s1) == 1)) {
            D_003EAEA0 = 1;
        }
        if ((temp_s0 >= (func_0099B630(7) & 0xFF)) && (func_00984AD0(7, temp_s1) == 1)) {
            D_003EAEA4 = 1;
        }
        if ((temp_s0 >= (func_0099B630(6) & 0xFF)) && (func_00984AD0(6, temp_s1) == 1)) {
            D_003EAEA8 = 1;
        }
    }
    if (arg2 != NULL) {
        *arg2 = D_003EAE9C;
    }
    if (arg3 != NULL) {
        *arg3 = D_003EAEA0;
    }
    if (arg4 != NULL) {
        *arg4 = D_003EAEA4;
    }
    if (arg5 != NULL) {
        *arg5 = D_003EAEA8;
    }
}
