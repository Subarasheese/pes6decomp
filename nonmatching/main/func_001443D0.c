/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7444;
extern char D_004FDF08[];
extern char D_004FDF80[];
extern char D_004FDFB8[];

void func_001443D0(void) {
    M2C_FIELD(D_003E7444, s64 *, 0) = (s64) (0x8004 | (0x20000000 << 0x20));
    M2C_FIELD(D_003E7444, s64 *, 8) = 0x41;
    M2C_FIELD(D_003E7444, s64 *, 0x10) = (s64) (0x8003 | (0x10364000 << 0x20));
    M2C_FIELD(D_003E7444, s64 *, 0x18) = 0xE;
    M2C_FIELD(D_003E7444, s64 *, 0x20) = (s64) (*(u32 *)D_004FDFB8);
    M2C_FIELD(D_003E7444, s64 *, 0x28) = 1;
    M2C_FIELD(D_003E7444, s64 *, 0x30) = (s64) (*(s64 *)D_004FDF80);
    M2C_FIELD(D_003E7444, s64 *, 0x38) = 0x42;
    M2C_FIELD(D_003E7444, s64 *, 0x40) = (s64) (*(u32 *)D_004FDF08);
    M2C_FIELD(D_003E7444, s64 *, 0x48) = 0x3D;
}
