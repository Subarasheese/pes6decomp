/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012E460(s32);
extern s32 func_0012E4B0(s32, void *);
extern s32 func_0012E520(s32, void *);
extern s32 func_0012E590(void *);
M2C_UNK func_0012DDA0(M2C_UNK *, s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0012DE80(M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_0012E370(s32, s32);                        /* extern */
s32 func_0012E3E0(s32, s32);                        /* extern */
M2C_UNK func_0012E710(s32, s32);                    /* extern */
s32 func_0012E7B0(s32);                             /* extern */
M2C_UNK func_0012E7F0(s32, s32);                    /* extern */
s32 func_0012E890(s32);                             /* extern */
M2C_UNK func_0012E8D0(s32, u8, u8, M2C_UNK *, s32); /* extern */
M2C_UNK func_0012EA50(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern char D_003FB4C0[];
extern char D_003FB4C1[];
extern char D_003FB4C2[];
extern char D_003FB4C4[];
extern char D_003FB540[];
extern char D_003FB5C0[];
extern char D_003FB648[];
extern char D_003FB64C[];

void func_0012E160(void) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s3;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s4;

    temp_s0 = (*(s32 *)D_003FB648);
    var_s3 = ((void *)D_003FB64C);
    if (func_0012E590(((void *)D_003FB5C0)) == 0) {
        func_0012E460(0);
        func_0012DE80(((void *)D_003FB64C), temp_s0, 0xC, 1);
        func_0012DDA0(((void *)D_003FB64C), temp_s0, 0xC, 1, ((void *)D_003FB5C0));
        var_s4 = 0;
        if (temp_s0 > 0) {
            var_s1 = ((void *)D_003FB5C0);
            do {
                temp_s2 = M2C_FIELD(var_s3, s32 *, 8);
                temp_v0 = func_0012E890(temp_s2);
                if (temp_v0 < 0) {
                    temp_s5 = temp_v0 & 0xFF;
                    if (func_0012E3E0(var_s4, temp_s5) == 0) {
                        func_0012E7F0(temp_s2, temp_s5);
                    }
                }
                temp_v0_2 = func_0012E7B0(temp_s2);
                if (temp_v0_2 < 0) {
                    temp_s5_2 = temp_v0_2 & 0xFF;
                    if (func_0012E370(var_s4, temp_s5_2) == 0) {
                        func_0012E710(temp_s2, temp_s5_2);
                    }
                }
                if (M2C_FIELD(var_s1, u8 *, 2) == 0) {

                } else if (func_0012E4B0(var_s4, ((void *)D_003FB540)) == 0) {
                    func_0012E460(0);
                    func_0012EA50(temp_s2, ((void *)D_003FB540), 7);
loop_21:
                    if (func_0012E520(var_s4, ((void *)D_003FB4C0)) == 0) {
                        func_0012E460(0);
                        if ((*(s8 *)D_003FB4C1) != 0) {
                            func_0012E8D0(temp_s2, (*(u8 *)D_003FB4C0), (*(u8 *)D_003FB4C2), ((void *)D_003FB4C4), (*(s8 *)D_003FB4C1) & 0xFF);
                            (*(s8 *)D_003FB4C1) = 0;
                            goto loop_21;
                        }
                    }
                }
                var_s4 += 1;
                var_s3 += 0xC;
                var_s1 += 1;
            } while (var_s4 < temp_s0);
        }
    }
}
