/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_00103790(void *);
extern int func_00103748(int);
extern void func_001CE7D0(void *, void *, void *);
extern void func_001036F0(void *, int);
extern void Pes6PacketStream_AppendGsAD(void *, int, long long);
M2C_UNK func_00103778(M2C_UNK *, s128);             /* extern */
extern char D_003992C0[];
extern char D_0052AAF0[];
extern char D_0052AAF8[];
extern char D_0052AB00[];
extern char D_0052AB10[];

void func_001CEAB0(void) {
    u8 sp1D;
    u8 sp1E;
    u8 sp1F;

    func_001036F0(((void *)D_0052AB10), 0);
    func_00103778(((void *)D_0052AB10), (*(s128 *)D_003992C0));
    Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 0x47, (*(s64 *)D_0052AAF0));
    Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 0x42, (*(s64 *)D_0052AAF8));
    Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 0x4A, (s64) (*(u8 *)D_0052AB00));
    func_001CE7D0(&sp1F, &sp1E, &sp1D);
    Pes6PacketStream_AppendGsAD(((void *)D_0052AB10), 0x3D, ((s64) sp1D << 0x10) | (sp1F | ((s64) sp1E << 8)));
    func_00103790(((void *)D_0052AB10));
    func_00103748((s32) ((void *)D_0052AB10));
}
