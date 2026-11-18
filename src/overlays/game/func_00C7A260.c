/* compiler: mwcc-3.0.1b198 */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern void func_001D7D80(void *, s16);
extern void func_001C48E8(void *, s32, s32);
extern void func_00C7A2F0(void);
extern void func_00C88DD0(s32, void *, s32);
extern void func_00C88EC0(s32, void *, void *);
extern void *D_003EA848;
extern char D_00CCBEE0[];
extern void func_00C7A080(void);
extern void func_00C7A140(void);
extern void func_00C7A1A0(void);

void func_00C7A260(void) {
    if (D_003EA848 == NULL) {
        func_001C48E8(D_00CCBEE0, 0, 0x3C);
        func_00C7A2F0();
        func_00C88EC0(0x10, (void *)func_00C7A1A0, (void *)func_00C7A140);
        func_00C88DD0(0x10, (void *)func_00C7A080, 0);
        D_003EA848 = D_00CCBEE0;
        func_001D7D80((void *)func_002F9370(*(void **)D_00CCBEE0), 0);
    }
}
