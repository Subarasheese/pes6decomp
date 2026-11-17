/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern int func_0014AD10(int, int, int, void *);
extern void func_00151080(s32, s32);
extern void func_001C4730(s32, s32, s64);
extern void func_001C48E8(s32, s32, s32);

void func_001D9E40(void *arg0) {
    s64 sp78;
    s32 s2;
    s32 s1;
    s32 s3;
    s32 s4;
    s32 sz;
    void *s0;
    void *v1;

    v1 = M2C_FIELD(arg0, void **, 0xC);
    s0 = *M2C_FIELD(arg0, void ***, 8);
    sz = M2C_FIELD(v1, u16 *, 2);
    sp78 = (s64) M2C_FIELD(s0, u32 *, 0);
    func_001C4730(0x70000000, M2C_FIELD(v1, s32 *, 4), (s64) sz);
    s3 = ((sz + 0xF) & ~0xF) + 0x70000000;
    func_0014AD10(0x70000000, s3, sz, &sp78);
    s2 = s3 + (s32) ((sp78 + 0xF) & ~0xF);
    s1 = s2;
    func_001C48E8(s2, 0, M2C_FIELD(s0, u8 *, 6) * M2C_FIELD(s0, u8 *, 7));
    s4 = 0;
    if ((s32) M2C_FIELD(s0, u8 *, 5) > 0) {
        do {
            func_001C4730(s1, s3, (s64) M2C_FIELD(s0, u8 *, 4));
            s4 += 1;
            s3 += M2C_FIELD(s0, u8 *, 4);
            s1 += M2C_FIELD(s0, u8 *, 6);
        } while (s4 < (s32) M2C_FIELD(s0, u8 *, 5));
    }
    func_00151080(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 8), s2);
}
