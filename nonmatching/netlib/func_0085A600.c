/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00844050(s16);                             /* extern */
s32 func_0084FBE0();                                /* extern */
M2C_UNK func_00858BC0(M2C_UNK, s16);                /* extern */
M2C_UNK func_00C10370(s32, u8, u8);                 /* extern */
extern u8 D_003E7818;
extern u8 D_003E7819;
extern u8 D_003E781A;
extern u8 D_003E781B;
extern char D_008B1410[];
extern char D_008B1411[];
extern char D_008B1412[];
extern char D_008B1413[];
extern char D_008B1451[];
extern char D_008B14D0[];
extern char D_008B230C[];

s32 func_0085A600(void *arg0) {
    u8 sp5C;
    u8 sp5D;
    u8 sp5E;
    u8 sp5F;
    s32 var_s0;
    s32 var_s3;
    u8 *var_s2;
    void *var_s1;

    var_s1 = arg0;
    if (func_0084FBE0() != 1) {
        return -1;
    }
    if ((*(s8 *)D_008B1451) == -1) {
        (*(s8 *)D_008B1451) = M2C_FIELD(var_s1, s8 *, 4);
        if (M2C_FIELD(var_s1, s8 *, 4) < 4) {
            (*(s32 *)D_008B230C) = (*(s32 *)D_008B14D0);
            if (func_00844050(M2C_FIELD(var_s1, s16 *, 0x10)) != 0) {
                func_00858BC0(0, M2C_FIELD(var_s1, s16 *, 0x10));
            }
            var_s0 = 0;
            (*(u8 *)D_008B1410) = M2C_FIELD(var_s1, u8 *, 0x12);
            sp5C = D_003E7818;
            sp5D = D_003E7819;
            sp5E = D_003E781A;
            sp5F = D_003E781B;
            (*(u8 *)D_008B1411) = M2C_FIELD(var_s1, u8 *, 0x13);
            (*(u8 *)D_008B1412) = M2C_FIELD(var_s1, u8 *, 0x14);
            (*(u8 *)D_008B1413) = M2C_FIELD(var_s1, u8 *, 0x15);
            do {
                var_s3 = 0;
                var_s2 = &sp5C;
loop_10:
                func_00C10370(var_s0 & 0xFF, *var_s2, M2C_FIELD((var_s1 + var_s3), u8 *, 7));
                var_s3 += 1;
                var_s2 += 1;
                if (var_s3 < 4) {
                    goto loop_10;
                }
                var_s0 += 1;
                var_s1 += 4;
            } while (var_s0 < 2);
        }
    }
    return 0;
}
