/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

M2C_UNK func_002ADD60(char *, char *, M2C_UNK);
M2C_UNK func_002BBD00(s32 *);
M2C_UNK func_002BC540(s32);
extern s32 D_005E2F74[];
extern s32 D_005E2F78[];
extern char D_005E3290[];
extern char D_005E32AD[];
extern char D_005E32CA[];
extern char D_005E32E7[];

void func_002BBF20(s32 arg0) {
    s32 sp18[2];
    s32 temp_a0;
    u8 *var_a1;
    s32 var_v1;

    var_v1 = 8;
    var_a1 = (u8 *)sp18;
    if (var_a1 != NULL) {
        do {
            *var_a1++ = 0;
        } while (--var_v1 != 0);
    }
    if (arg0 != 0) {
        sp18[0] = arg0;
        if (D_005E2F74[0] & 1) {
            func_002ADD60(D_005E32AD, D_005E3290, 0x1D);
        }
        if (D_005E2F74[0] & 2) {
            func_002ADD60(D_005E32E7, D_005E32CA, 0x1D);
        }
        temp_a0 = D_005E2F74[0];
        D_005E2F74[0] = temp_a0 & ~3;
        func_002BC540(temp_a0);
        D_005E2F78[0] = -1;
        func_002BBD00(sp18);
    }
}
