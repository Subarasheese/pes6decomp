/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern int func_00140400(void);
extern void func_00103790(void *);
extern int func_001403F0(void);
extern int func_00103748(int);
extern int func_00140410(void);
extern void func_001036F0(void *, int);
extern void Pes6PacketStream_AppendGsAD(void *, int, long long);
extern int func_001403E0(void);
M2C_UNK func_00103538(void *, M2C_UNK);             /* extern */
M2C_UNK func_00103778(void *, s128);                /* extern */
extern char D_00375D20[];
extern char D_004FD120[];

void func_00139F10(void *arg0) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_s4_2;
    s64 temp_fp;
    s64 temp_s3;
    s64 temp_s6;
    s64 temp_s7;

    temp_s3 = func_00140410() * 0x10;
    temp_s6 = func_00140400() * 0x10;
    temp_s7 = func_001403F0() * 0x10;
    temp_fp = func_001403E0() * 0x10;
    func_00103538(arg0, 0);
    func_001036F0(arg0, 0);
    func_00103778(arg0, (*(s128 *)D_00375D20));
    Pes6PacketStream_AppendGsAD(arg0, 0x3B, 0x400080);
    Pes6PacketStream_AppendGsAD(arg0, 0x47, 0x30003);
    var_s4 = M2C_FIELD(((void *)D_004FD120), s32 *, 0);
    if (var_s4 <= 0) {
        if (M2C_FIELD(((void *)D_004FD120), s32 *, 4) <= 0) {
            if (M2C_FIELD(((void *)D_004FD120), s32 *, 8) > 0) {
                goto block_3;
            }
        } else {
            goto block_3;
        }
    } else {
block_3:
        if (var_s4 <= 0) {
            var_s4 = 0;
        }
        var_s1 = M2C_FIELD(((void *)D_004FD120), s32 *, 4);
        if (var_s1 <= 0) {
            var_s1 = 0;
        }
        var_s0 = M2C_FIELD(((void *)D_004FD120), s32 *, 8);
        if (var_s0 <= 0) {
            var_s0 = 0;
        }
        Pes6PacketStream_AppendGsAD(arg0, 0x42, 0x68 | (0x80 << 0x20));
        Pes6PacketStream_AppendGsAD(arg0, 1, (((s64) ((s64) var_s0 << 0x20) >> 0x20) << 0x10) | (((s64) ((s64) var_s4 << 0x20) >> 0x20) | (((s64) ((s64) var_s1 << 0x20) >> 0x20) << 8)));
        Pes6PacketStream_AppendGsAD(arg0, 4, ((s64) (temp_s3 << 0x20) >> 0x20) | (((s64) (temp_s6 << 0x20) >> 0x20) << 0x10));
        Pes6PacketStream_AppendGsAD(arg0, 4, ((s64) (temp_s7 << 0x20) >> 0x20) | (((s64) (temp_fp << 0x20) >> 0x20) << 0x10));
    }
    if ((M2C_FIELD(((void *)D_004FD120), s32 *, 0) < 0) || (M2C_FIELD(((void *)D_004FD120), s32 *, 4) < 0) || (M2C_FIELD(((void *)D_004FD120), s32 *, 8) < 0)) {
        if (M2C_FIELD(((void *)D_004FD120), s32 *, 0) >= 0) {
            var_s1_2 = 0;
        } else {
            var_s1_2 = -M2C_FIELD(((void *)D_004FD120), s32 *, 0);
        }
        if (M2C_FIELD(((void *)D_004FD120), s32 *, 4) >= 0) {
            var_s4_2 = 0;
        } else {
            var_s4_2 = -M2C_FIELD(((void *)D_004FD120), s32 *, 4);
        }
        if (M2C_FIELD(((void *)D_004FD120), s32 *, 8) >= 0) {
            var_s0_2 = 0;
        } else {
            var_s0_2 = -M2C_FIELD(((void *)D_004FD120), s32 *, 8);
        }
        Pes6PacketStream_AppendGsAD(arg0, 0x42, 0x62 | (0x80 << 0x20));
        Pes6PacketStream_AppendGsAD(arg0, 1, (((s64) ((s64) var_s0_2 << 0x20) >> 0x20) << 0x10) | (((s64) ((s64) var_s1_2 << 0x20) >> 0x20) | (((s64) ((s64) var_s4_2 << 0x20) >> 0x20) << 8)));
        Pes6PacketStream_AppendGsAD(arg0, 4, ((s64) (temp_s3 << 0x20) >> 0x20) | (((s64) (temp_s6 << 0x20) >> 0x20) << 0x10));
        Pes6PacketStream_AppendGsAD(arg0, 4, ((s64) (temp_s7 << 0x20) >> 0x20) | (((s64) (temp_fp << 0x20) >> 0x20) << 0x10));
    }
    Pes6PacketStream_AppendGsAD(arg0, 0x47, 0x50003);
    func_00103790(arg0);
    func_00103748((s32) arg0);
}
