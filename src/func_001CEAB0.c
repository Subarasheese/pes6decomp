/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef unsigned int u_long128 __attribute__((mode(TI)));
extern void func_001036F0(void *, s32);
extern void func_00103778(void *, u_long128);
extern void Pes6PacketStream_AppendGsAD(void *, s32, s64);
extern void func_001CE7D0(u8 *, u8 *, u8 *);
extern void func_00103790(void *);
extern void func_00103748(void *);
extern char D_0052AB10[];
extern u_long128 D_003992C0[];
extern s64 D_0052AAF0[];
extern s64 D_0052AAF8[];
extern u8 D_0052AB00[];

void func_001CEAB0(void) {
    u8 a, b, c;
    func_001036F0(D_0052AB10, 0);
    func_00103778(D_0052AB10, D_003992C0[0]);
    Pes6PacketStream_AppendGsAD(D_0052AB10, 0x47, D_0052AAF0[0]);
    Pes6PacketStream_AppendGsAD(D_0052AB10, 0x42, D_0052AAF8[0]);
    Pes6PacketStream_AppendGsAD(D_0052AB10, 0x4A, D_0052AB00[0]);
    func_001CE7D0(&a, &b, &c);
    Pes6PacketStream_AppendGsAD(D_0052AB10, 0x3D, ((s64)c << 16) | (a | ((s64)b << 8)));
    func_00103790(D_0052AB10);
    func_00103748(D_0052AB10);
}
