/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_00103790(void *);
extern int func_00103748(int);
extern void func_001036F0(void *, int);
extern void Pes6PacketStream_AppendGsAD(void *, int, long long);
M2C_UNK func_00103778(M2C_UNK *, s128);             /* extern */
extern char D_003992D0[];
extern char D_0052AB10[];
extern char D_0052AB38[];
extern char D_0052AB40[];

void func_001D4260(s32 arg0, void *arg1, s32 *arg2, void *arg3, u32 *arg4, u32 *arg5) {
    s8 spA8;
    s8 spA9;
    s8 spAA;
    s8 spAB;
    s32 spAC;
    s32 *var_s4;
    s32 temp_fp;
    s32 var_s6;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    u32 *var_s1;
    u32 *var_s2;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void *var_s3;
    void *var_s5;

    var_s5 = arg1;
    var_s4 = arg2;
    var_s3 = arg3;
    var_s2 = arg4;
    var_s1 = arg5;
    func_001036F0(((void *)D_0052AB10), 0);
    func_00103778(((void *)D_0052AB10), (*(s128 *)D_003992D0));
    Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 8, 5);
    Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 0x14, (*(s64 *)D_0052AB40));
    Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 6, (*(s64 *)D_0052AB38));
    var_s6 = 0;
    if (arg0 > 0) {
        do {
            temp_fp = *var_s4;
            Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 2, *var_s2 | ((s64) *var_s1 << 0x20));
            temp_v1 = M2C_FIELD(var_s3, u8 *, 0);
            if (temp_v1 != 0xFF) {
                var_v0 = (s32) temp_v1 >> 1;
            } else {
                var_v0 = 0x80;
            }
            temp_v1_2 = M2C_FIELD(var_s3, u8 *, 1);
            spA8 = (s8) var_v0;
            if (temp_v1_2 != 0xFF) {
                var_v1 = (s32) temp_v1_2 >> 1;
            } else {
                var_v1 = 0x80;
            }
            spA9 = (s8) var_v1;
            temp_v1_3 = M2C_FIELD(var_s3, u8 *, 2);
            if (temp_v1_3 != 0xFF) {
                var_v1_2 = (s32) temp_v1_3 >> 1;
            } else {
                var_v1_2 = 0x80;
            }
            spAA = (s8) var_v1_2;
            temp_v1_4 = M2C_FIELD(var_s3, u8 *, 3);
            if (temp_v1_4 != 0xFF) {
                var_v1_3 = (s32) temp_v1_4 >> 1;
            } else {
                var_v1_3 = 0x80;
            }
            spAB = (s8) var_v1_3;
            spAC = temp_fp;
            Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 1, (s64) spA8);
            Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 4, ((s64) M2C_FIELD(var_s5, s32 *, 0xC) << 0x38) | (((s64) M2C_FIELD(var_s5, s32 *, 8) << 0x20) | (M2C_FIELD(var_s5, s32 *, 0) | ((s64) M2C_FIELD(var_s5, s32 *, 4) << 0x10))));
            var_s6 += 1;
            var_s3 += 4;
            var_s2 += 4;
            var_s1 += 4;
            var_s4 += 4;
            var_s5 += 0x10;
        } while (var_s6 < arg0);
    }
    func_00103790(((void *)D_0052AB10));
    func_00103748((s32) ((void *)D_0052AB10));
}
