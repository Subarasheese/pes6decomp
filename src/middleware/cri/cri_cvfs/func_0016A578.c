/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/u0_c.c (func_00405DF0). See THIRD_PARTY.md. */
#include "types.h"
extern void *func_001C48E8(void *, s32, u32);
typedef struct {
    s32 a;
    s32 b;
} E8;
typedef struct {
    s32 pad;
    u8 b[12];
} E16;
extern volatile s32 D_00385088[];
extern s32 D_00385094;
extern E8 D_0050E440[];
extern E16 D_0050E580[];
extern u8 D_0050E780[];

void func_0016A578(void) {
    s32 i;
    (void)D_00385088[0];
    if (D_00385094 == 0) {
        for (i = 0; i < 40; i++) {
            D_0050E440[i].a = 0;
            D_0050E440[i].b = 0;
        }

        for (i = 0; i < 32; i++)
            D_0050E580[i].b[0] = 0;

        func_001C48E8(D_0050E780, 0, 9);
        D_0050E780[0] = 0;
    }
    D_00385094++;
}
