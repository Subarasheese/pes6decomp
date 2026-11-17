/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern s32 func_00332FA0(void);
void *func_00338AD0(s32, void (*)(void), s32, char *);
extern char D_003E61B0[];
extern void func_00345A00(void);
extern void func_00345F80(void);

s32 func_003461A0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;

    if (func_00332FA0() != 0) {
        return 0;
    }
    temp_v1 = *(s32 *)((char *)arg0 + 0x2C);
    if (temp_v1 == 1) {
        temp_v0 = *(s32 *)((char *)arg0 + 0x30) + 1;
        *(s32 *)((char *)arg0 + 0x30) = temp_v0;
        if (temp_v0 >= 0x1E) {
            func_00338A60(func_00338AD0(0x8000005C, func_00345A00, *(s32 *)((char *)arg0 + 8), D_003E61B0), arg0);
            *(s32 *)((char *)arg0 + 0x2C) = *(s32 *)((char *)arg0 + 0x2C) + 1;
        }
    } else if (temp_v1 == 0) {
        func_00338A60(func_00338AD0(0x8000005B, func_00345F80, *(s32 *)((char *)arg0 + 8), D_003E61B0), arg0);
        *(s32 *)((char *)arg0 + 0x2C) = *(s32 *)((char *)arg0 + 0x2C) + 1;
    }
    return 1;
}
