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
extern int func_0013E2C0(void);
extern void func_001036F0(void *, int);
extern void Pes6PacketStream_AppendGsAD(void *, int, long long);
extern int func_001403E0(void);
M2C_UNK func_00103538(void *, M2C_UNK);             /* extern */
M2C_UNK func_00103778(void *, s128);                /* extern */
s32 func_00129B00(s32, M2C_UNK, M2C_UNK);           /* extern */
extern char D_00376150[];
extern char D_004FD140[];
extern char D_004FD144[];

void func_0013AE70(void *arg0) {
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 var_s0;
    s64 temp_s2_2;
    s64 temp_s3_2;

    var_s0 = func_0013E2C0();
    if (var_s0 > 0) {
        do {
            if ((*(s32 *)D_004FD140) == 0) {
                (*(s32 *)D_004FD144) -= 1;
            } else {
                (*(s32 *)D_004FD144) += 1;
            }
            var_s0 -= 1;
            (*(s32 *)D_004FD144) = func_00129B00((*(s32 *)D_004FD144), 0, 0x10);
        } while (var_s0 > 0);
    }
    temp_s0 = (*(s32 *)D_004FD144);
    if (temp_s0 != 0) {
        temp_s3 = func_00140410();
        temp_s5 = func_001403F0();
        temp_s2 = func_00140400();
        temp_s4 = func_001403E0();
        func_00103538(arg0, 0);
        func_001036F0(arg0, 0);
        func_00103778(arg0, (*(s128 *)D_00376150));
        Pes6PacketStream_AppendGsAD(arg0, 0x47, 0x50003);
        Pes6PacketStream_AppendGsAD(arg0, 1, 0);
        temp_s3_2 = (s64) (((temp_s3 * 0x10) - 8) << 0x20) >> 0x20;
        Pes6PacketStream_AppendGsAD(arg0, 5, temp_s3_2 | (((s64) (((temp_s2 * 0x10) - 8) << 0x20) >> 0x20) << 0x10) | (0xFFFF << 0x20));
        temp_s2_2 = (s64) (((temp_s5 * 0x10) - 8) << 0x20) >> 0x20;
        Pes6PacketStream_AppendGsAD(arg0, 5, temp_s2_2 | (((s64) ((((temp_s2 + temp_s0) * 0x10) - 8) << 0x20) >> 0x20) << 0x10) | (0xFFFF << 0x20));
        Pes6PacketStream_AppendGsAD(arg0, 5, temp_s3_2 | (((s64) ((((temp_s4 - temp_s0) * 0x10) - 8) << 0x20) >> 0x20) << 0x10) | (0xFFFF << 0x20));
        Pes6PacketStream_AppendGsAD(arg0, 5, temp_s2_2 | ((temp_s4 * 0x10) << 0x10) | (0xFFFF << 0x20));
        func_00103790(arg0);
        func_00103748((s32) arg0);
    }
}
