/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_0017E160(void);
extern void func_00131B40(float);
s32 func_001D3090(M2C_UNK *);                       /* extern */
extern char D_00375B30[];
extern char D_00375B40[];
extern char D_00375B50[];
extern char D_00375B60[];
extern char D_00396F70[];
extern s32 D_003E9848;
extern char D_00511010[];
extern char D_00511020[];
extern char D_00511030[];
extern char D_00511040[];

void func_0017B120(void) {
    func_0017E160();
    (*(s128 *)D_00511010) = (*(s128 *)D_00375B30);
    (*(s128 *)D_00511020) = (*(s128 *)D_00375B40);
    (*(s128 *)D_00511030) = (*(s128 *)D_00375B50);
    (*(s128 *)D_00511040) = (*(s128 *)D_00375B60);
    func_00131B40(60.0f);
    D_003E9848 = (func_001D3090(((void *)D_00396F70)) * 0x1E) + 0x188;
}
