/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


extern void *D_003E7E1C;
extern s32 D_003EB2B4;
extern s32 D_003EB2B8;
extern s32 D_003EB2C0;
extern s32 D_003EB2C4;
extern char D_00CFEF90[];
extern char D_00CFEFA0[];
extern char D_00CFEFB0[];
extern char D_00CFEFB8[];
extern char D_00CFEFC0[];
extern char D_00CFEFD0[];
extern char D_00CFEFE0[];
extern char D_00CFEFE8[];

void func_00CE4470(void) {
    (*(s128 *)D_00CFEF90) = (*(s128 *)D_00CFEFC0);
    (*(s128 *)D_00CFEFA0) = (*(s128 *)D_00CFEFD0);
    (*(s64 *)D_00CFEFB0) = (*(s64 *)D_00CFEFE0);
    (*(s32 *)D_00CFEFB8) = (*(s32 *)D_00CFEFE8);
    D_003EB2C4 = M2C_FIELD(D_003E7E1C, s32 *, 0x188);
    D_003EB2C0 = M2C_FIELD(D_003E7E1C, s32 *, 0x18C);
    D_003EB2B4 = 1;
    D_003EB2B8 = M2C_FIELD(D_003E7E1C, s32 *, 0x14C);
}
