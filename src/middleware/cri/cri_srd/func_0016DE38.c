/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/k4b.c (func_00408D48). See THIRD_PARTY.md. */
#include "types.h"
extern s32 D_0038511C;
extern char D_003CA3E8[];
extern char D_003CA400[];
extern char D_00385120[];
extern void func_001610B0();
extern void func_001C48E8(void *, s32, s32);

void func_0016DE38(void) {
    func_001610B0(D_003CA3E8, D_0038511C);
    if (D_0038511C == 0)
        func_001C48E8(D_00385120, 0, 0x800);
    D_0038511C++;
    func_001610B0(D_003CA400);
}
