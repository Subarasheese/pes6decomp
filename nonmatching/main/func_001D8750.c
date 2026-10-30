/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6PacketStream_AppendGsAD(void *, int, long long);
extern void func_001E6310(s32, s32);
M2C_UNK func_00103538(void *, M2C_UNK);             /* extern */
s64 func_00138C10(void *, s32);                     /* extern */
M2C_UNK func_001D88B0(void *, void *);              /* extern */
M2C_UNK func_001E6360(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_0052AB68[];
extern char D_0052B0D0[];

void func_001D8750(void *arg0) {
    s16 *var_s2;
    s32 var_s3;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s4;

    temp_s1 = M2C_FIELD(arg0, void **, 0x48);
    temp_s4 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x1C);
    if (*M2C_FIELD(arg0, u8 **, 0x1C) != 0) {
        func_001E6360(temp_s4, 5, 2);
        Pes6PacketStream_AppendGsAD(temp_s4, 8, (*(s64 *)D_0052AB68));
        func_001E6310((s32) temp_s4, 5);
        temp_v0 = M2C_FIELD(temp_s1, u8 *, 3);
        if (temp_v0 != 0) {
            var_s2 = M2C_FIELD(temp_s1, s16 **, 8);
            var_s3 = 0;
            if ((temp_v0 & 0xFF) > 0) {
                do {
                    temp_s0 = M2C_FIELD((M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0x14) + (*var_s2 * 8)), void **, 4);
                    M2C_FIELD(temp_s0, s64 *, 0x10) = func_00138C10(temp_s4, M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 *, 0xC));
                    var_s3 += 1;
                    var_s2 += 2;
                } while (var_s3 < (s32) M2C_FIELD(temp_s1, u8 *, 3));
            }
        }
        func_00103538(temp_s4, 0);
        func_001E6360(temp_s4, 3, 0);
        func_001D88B0(temp_s4, arg0);
        func_001E6310((s32) temp_s4, 3);
        func_001E6360(temp_s4, 5, 2);
        Pes6PacketStream_AppendGsAD(temp_s4, 8, (*(s64 *)D_0052B0D0));
        func_001E6310((s32) temp_s4, 5);
    }
}
