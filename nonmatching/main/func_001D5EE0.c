/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

M2C_UNK func_0017F9A0(s32, void *, void *, s32, void *, void *); /* extern */
extern void *D_003E9944;
extern void func_001D6150(void);

void func_001D5EE0(s32 arg0, void *arg1) {
    s32 sp10[5];
    s32 i;
    u8 *p;
    void *node;

    p = (u8 *)sp10;
    for (i = 0; i < 20; i++) {
        p[i] = 0;
    }
    node = D_003E9944;
    while (node != NULL) {
        if (M2C_FIELD(node, s32 *, 8) == arg0) {
            return;
        }
        node = M2C_FIELD(node, void **, 4);
    }
    sp10[3] = M2C_FIELD(arg1, s32 *, 0);
    sp10[4] = M2C_FIELD(arg1, s32 *, 4);
    func_0017F9A0(arg0, (void *)func_001D6150, (u8 *)arg1 + 4, 4, sp10, arg1);
}
