/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00152130(s32, s8);
extern int func_002DCA30(void);
M2C_UNK func_00855290(M2C_UNK, s32, M2C_UNK);       /* extern */
s32 func_0099D470(M2C_UNK);                         /* extern */
M2C_UNK func_0099D490(s32, M2C_UNK);                /* extern */
s32 func_009A04F0();                                /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
u8 func_00AFBAB0(u8);                               /* extern */
s32 func_00B29C50();                                /* extern */
s32 func_00B29C80();                                /* extern */
M2C_UNK func_00C01540(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C019F0();                            /* extern */
extern char D_00591C09[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00592702[];
extern char D_00592703[];
extern char D_00CBCC6A[];

void func_00BFE430(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s3;

    temp_v1 = func_009E1C90(2) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    default:
        func_009E1D30(2, 0);
        /* fallthrough */
    case 0:
        var_s0 = 0;
        if (((*(u8 *)D_00591C09) == 5) && (func_00B29C80() != 0)) {
            goto block_9;
        }
        if (func_00152130(1, 0x10) != 0) {
block_9:
            var_s0 = 1;
        }
        if (var_s0 != 0) {
            func_009E1CB0(2);
            return;
        }
        return;
    case 1:
        if ((*(u8 *)D_00592703) & 1) {
            temp_s0 = func_0099D470(0) & 0xFF;
            (*(u8 *)D_00591E4D) = func_00AFBAB0((*(u8 *)D_00591E4D));
            temp_v0 = temp_s0 & 0xFF;
            var_a0 = 0;
            if ((temp_v0 > 0) && (temp_v0 < 0x17)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                (*(u8 *)D_00591E4D) += temp_s0;
            }
            func_0099D490(((*(u8 *)D_00591E4D) - (func_00AFBAB0((*(u8 *)D_00591E4D)) & 0xFF)) & 0xFF, 0);
            (*(s8 *)D_00CBCC6A) = 1;
        }
        if (((s32) (*(u8 *)D_00592703) >> 1) & 1) {
            temp_s0_2 = func_0099D470(1) & 0xFF;
            (*(u8 *)D_00591E4E) = func_00AFBAB0((*(u8 *)D_00591E4E));
            temp_v0_2 = temp_s0_2 & 0xFF;
            var_a0_2 = 0;
            if ((temp_v0_2 > 0) && (temp_v0_2 < 0x17)) {
                var_a0_2 = 1;
            }
            if (var_a0_2 != 0) {
                (*(u8 *)D_00591E4E) += temp_s0_2;
            }
            func_0099D490(((*(u8 *)D_00591E4E) - (func_00AFBAB0((*(u8 *)D_00591E4E)) & 0xFF)) & 0xFF, 1);
            (*(s8 *)D_00CBCC6A) = 1;
        }
        (*(u8 *)D_00592703) = 0;
        func_009E1CB0(2);
        /* fallthrough */
    case 2:
        func_00C019F0();
        if (func_009A04F0() != 0) {
            var_s3 = 0x2E;
            if (func_009A04F0() != 0) {
                var_s3 = 0x20;
            }
            if ((*(u8 *)D_00591C09) != 5) {
                goto block_19;
            }
            if (func_00B29C50() != 0) {
block_19:
                if (var_s3 < 0x2E) {
                    func_00C01540(var_s3, 0x17, 0x17, 0xC, 6);
                }
            }
            (*(s8 *)D_00CBCC6A) = 1;
        }
        func_009E1CB0(2);
        /* fallthrough */
    case 3:
        (*(s8 *)D_00592702) = 1;
        func_009E1D30(1, 0xC);
        if (func_002DCA30() != 0) {
            func_00855290(3, func_009E1C90(1) & 0xFF, 1);
        }
        break;
    }
}
