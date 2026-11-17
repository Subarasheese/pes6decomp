/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_0014A5A0(u32, void *, void *);
extern char D_0050AE30[];
extern void *D_0050AE3C;
extern u8 D_0050D18C;

void func_001494F0(u32 arg0) {
    void *a2;
    void *a1;

    a1 = D_0050AE3C;
    while (1) {
        a2 = M2C_FIELD(a1, void **, 0xC);
        if (M2C_FIELD(a1, u16 *, 0x20) == 0 && a1 == (void *)D_0050AE30) break;
        a1 = a2;
    }
    D_0050D18C = (u8)arg0;
    func_0014A5A0(arg0, a1, a2);
}
