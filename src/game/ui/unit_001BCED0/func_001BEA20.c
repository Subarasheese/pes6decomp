/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 Pes6Process_Start(s32);
s32 Pes6Process_Create(void *, void *, void *, s32, s32, void *);
extern char D_003986E4[];
extern char D_003D18F0[];
extern s32 D_003E9934;
extern void mnNowloadingMainInit(void);
extern void func_001C0060(void);
extern void func_001C0120(void);

void func_001BEA20(void) {
    s32 temp_v0;

    if (D_003E9934 == 0) {
        temp_v0 = Pes6Process_Create(&func_001C0120, &mnNowloadingMainInit, &func_001C0060, 0x8C, 0, ((void *)D_003D18F0));
        Pes6Process_Start(temp_v0);
        D_003E9934 = temp_v0;
        (*(s32 *)D_003986E4) = 1;
    }
}
