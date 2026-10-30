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
extern char D_00376160[];
extern char D_004FD158[];
extern char D_004FD164[];
extern char D_004FD168[];
extern char D_004FD16C[];

void func_0013B0D0(void *arg0) {
    f32 temp_f1;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a0;
    s64 temp_s4;

    temp_f1 = 0.5f + (*(f32 *)D_004FD158);
    if (!(temp_f1 >= 2.1474836e9f)) {
        var_a0 = (s32) temp_f1;
    } else {
        var_a0 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    }
    temp_s4 = 0x80 - var_a0;
    if (temp_s4 != 0) {
        temp_s3 = func_00140410();
        temp_s2 = func_00140400();
        temp_s1 = func_001403F0();
        temp_s0 = func_001403E0();
        func_00103538(arg0, 0);
        func_001036F0(arg0, 0);
        func_00103778(arg0, (*(s128 *)D_00376160));
        Pes6PacketStream_AppendGsAD(arg0, 0x42, 0x44);
        Pes6PacketStream_AppendGsAD(arg0, 0x47, 0x50003);
        Pes6PacketStream_AppendGsAD(arg0, 1, (((u64) (temp_s4 << 0x20) >> 0x20) << 0x18) | (((s64) (*(u32 *)D_004FD16C) << 0x10) | ((*(u32 *)D_004FD164) | ((s64) (*(u32 *)D_004FD168) << 8))));
        Pes6PacketStream_AppendGsAD(arg0, 5, (temp_s3 * 0x10) | ((temp_s2 * 0x10) << 0x10) | (0xFFFF << 0x20));
        Pes6PacketStream_AppendGsAD(arg0, 5, (temp_s1 * 0x10) | ((temp_s0 * 0x10) << 0x10) | (0xFFFF << 0x20));
        func_00103790(arg0);
        func_00103748((s32) arg0);
    }
}
