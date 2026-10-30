/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_001034D0(void *, int);
extern void func_00103790(void *);
extern void * func_001034E0(void *);
extern int func_00103748(int);
extern int Pes6PacketStream_AppendWord(int, int);
extern void func_001036F0(void *, int);
extern void Pes6PacketStream_AppendGsAD(void *, int, long long);
M2C_UNK func_00103538(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00103698(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00103778(M2C_UNK *, s128);             /* extern */
extern char D_00399380[];
extern M2C_UNK *D_003E9964;
extern char D_0052AF80[];
extern char D_0052B080[];
extern char D_0052B0C8[];
extern char D_0052B0D0[];
extern char D_0052B0D8[];
extern char D_0052B0E0[];
extern char D_0052B0E8[];
extern char D_0052B0F0[];

void func_001E5810(void) {
    D_003E9964 = ((void *)D_0052AF80);
    func_001034D0(((void *)D_0052B080), ((u64) ((s64) ((void *)D_0052AF80) << 0x24) >> 0x24) | 0x20000000);
    func_00103538(((void *)D_0052B080), 0);
    Pes6PacketStream_AppendWord((s32) ((void *)D_0052B080), 0x13000000);
    Pes6PacketStream_AppendWord((s32) ((void *)D_0052B080), 0x10000000);
    func_001036F0(((void *)D_0052B080), 0);
    func_00103778(((void *)D_0052B080), (*(s128 *)D_00399380));
    Pes6PacketStream_AppendGsAD(((void *)D_0052B080), 0x42, (*(s64 *)D_0052B0C8));
    Pes6PacketStream_AppendGsAD(((void *)D_0052B080), 8, (*(s64 *)D_0052B0D0));
    Pes6PacketStream_AppendGsAD(((void *)D_0052B080), 0x47, (*(s64 *)D_0052B0D8));
    Pes6PacketStream_AppendGsAD(((void *)D_0052B080), 0x14, (*(s64 *)D_0052B0E8));
    Pes6PacketStream_AppendGsAD(((void *)D_0052B080), 0x4E, (*(s64 *)D_0052B0E0));
    Pes6PacketStream_AppendGsAD(((void *)D_0052B080), 0x40, (*(s64 *)D_0052B0F0));
    func_00103790(((void *)D_0052B080));
    func_00103748((s32) ((void *)D_0052B080));
    func_00103698(((void *)D_0052B080), 0);
    func_001034E0(((void *)D_0052B080));
}
