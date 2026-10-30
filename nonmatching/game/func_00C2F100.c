/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002CA180(s32);
extern int func_002DCA30(void);
void *func_002C7D80(s32);                           /* extern */
s32 func_009A0270();                                /* extern */
M2C_UNK func_00C2F020(void *);                      /* extern */
s32 func_00C2FC70(void *, void *, void *);          /* extern */
M2C_UNK func_00C305F0(void *);                      /* extern */
s32 func_00C32210(void *);                          /* extern */
extern char Pes6MatchSquads[];

s32 func_00C2F100(void) {
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a1;
    void *temp_a2;
    void *temp_s0;
    void *temp_v0;

    var_s3 = 0;
    if (func_002DCA30() == 0) {
        var_s2 = 0;
        do {
            temp_s0 = func_002CA180(var_s2);
            temp_v0 = func_002C7D80(var_s2);
            if (func_00C32210(temp_v0) != 0) {
                func_00C2F020(temp_v0);
                var_v0 = 0;
                var_v1 = 0;
                M2C_FIELD(temp_v0, u8 *, 0x15) = 0U;
                temp_a2 = ((void *)Pes6MatchSquads) + (M2C_FIELD(temp_v0, u8 *, 0) * 0x6900);
                do {
                    temp_a1 = temp_a2 + (M2C_FIELD((temp_v0 + var_v1), u8 *, 0x8C) * 0x348);
                    if (M2C_FIELD(temp_a1, u8 *, 0xD4) == 0) {

                    } else {
                        var_v0 += 1;
                        M2C_FIELD(temp_v0, u8 *, 0x15) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x15) + (M2C_FIELD(temp_a1, u8 *, 0x89) & 7));
                    }
                    var_v1 += 1;
                } while (var_v1 < 0xB);
                if (var_v0 > 0) {
                    M2C_FIELD(temp_v0, u8 *, 0x15) = (u8) ((u8) M2C_FIELD(temp_v0, u8 *, 0x15) / (u32) var_v0);
                }
                if (func_00C2FC70(temp_v0, temp_s0, temp_a2) == 0) {
                    var_v1_2 = 0;
                } else {
                    var_v1_2 = 1;
                    M2C_FIELD(temp_v0, s32 *, 0xC) = (s32) (func_009A0270() & 0xFF);
                }
            } else {
                var_v1_2 = 0;
            }
            var_s3 |= var_v1_2;
            func_00C305F0(func_002C7D80(var_s2));
            var_s2 += 1;
        } while (var_s2 < 2);
        return var_s3;
    }
    return 0;
}
