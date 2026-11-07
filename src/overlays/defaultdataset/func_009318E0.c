/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_00362580(void *, s32);
extern void func_001C4730(s32, void *, s32);
extern char D_0052D610[];
extern char D_00530C84[];
extern char D_009E3AF0[];
void func_009318E0(void) {
    s32 n; char *p; s32 j, k; s32 i; u8 *q;
    for (n = 0, p = D_009E3AF0; n < 0xCC; n++, p += 0x16C) func_00362580(p, (u16)n);
    for (i = 0, q = (u8 *)D_0052D610; i < 0xCC; i++, q += 0x34) {
        for (j = 0; j < 10; j++) {
            for (k = j + 1; k < 10; k++) {
                if (q[j] == q[k]) { j = 10; break; }
            }
        }
    }
    func_001C4730(*(s32 *)D_00530C84, D_009E3AF0, 0x12210);
}
