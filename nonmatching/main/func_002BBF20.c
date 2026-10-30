/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002ADD60(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_002BBD00(s32 *);                       /* extern */
M2C_UNK func_002BC540(s32);                         /* extern */
extern char D_005E2F74[];
extern char D_005E2F78[];
extern char D_005E3290[];
extern char D_005E32AD[];
extern char D_005E32CA[];
extern char D_005E32E7[];

void func_002BBF20(s32 arg0) {
    s32 sp18;
    s32 *var_a1;
    s32 temp_a0;
    s32 var_v1;

    var_v1 = 8;
    var_a1 = &sp18;
    if (var_a1 != NULL) {
        do {
            *var_a1 = 0;
            var_v1 -= 1;
            var_a1 += 1;
        } while (var_v1 != 0);
    }
    if (arg0 != 0) {
        sp18 = arg0;
        if ((*(s32 *)D_005E2F74) & 1) {
            func_002ADD60(((void *)D_005E32AD), ((void *)D_005E3290), 0x1D);
        }
        if ((*(s32 *)D_005E2F74) & 2) {
            func_002ADD60(((void *)D_005E32E7), ((void *)D_005E32CA), 0x1D);
        }
        temp_a0 = (*(s32 *)D_005E2F74);
        (*(s32 *)D_005E2F74) = temp_a0 & ~3;
        func_002BC540(temp_a0);
        (*(s32 *)D_005E2F78) = -1;
        func_002BBD00(&sp18);
    }
}
