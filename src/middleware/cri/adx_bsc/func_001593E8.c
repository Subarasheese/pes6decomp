/* compiler: ee-gcc-2.96-G0-g */
/* g-guthrie/mvc2-port-and-decomp src/w1_b.c (func_003F8BF0). See THIRD_PARTY.md. */
#include "types.h"
typedef int (*RuntimeStreamQuery)(unsigned char *, int *, int *, int *);
typedef void (*RuntimeStreamCommit)(unsigned char *, int, int);

void func_001593E8(u8 *p) {
    extern s32 func_0016A070();
    u8 *c = p + 0x48;
    u16 *src = *((u16 **)c);
    s32 n;
    s32 m;
    s32 i;
    u16 *d0;
    u16 *d1;
    if ((*((s32 *)(p + 4))) == 1) {
        if (func_0016A070(*((s32 *)(p + 8))) == 0) {
            (*((RuntimeStreamQuery *)(p + 0x78)))((u8 *)(*((void **)(p + 0x7C))), (int *)(p + 0x68),
                                                  (int *)(p + 0x6C), (int *)(p + 0x70));
            n = (*((s32 *)(c + 0x18))) - (*((s32 *)(c + 0x20)));
            if (n > (*((s32 *)(c + 0x24))))
                n = *((s32 *)(c + 0x24));
            if (n > (*((s32 *)(c + 4))))
                n = *((s32 *)(c + 4));
            d0 = (u16 *)((*((u8 **)(c + 0x14))) + ((*((s32 *)(c + 0x20))) * 2));
            if ((*((s8 *)(p + 0xE))) == 2) {
                d1 = (u16 *)((*((u8 **)(c + 0x14))) +
                             (((*((s32 *)(c + 0x1C))) + (*((s32 *)(c + 0x20)))) * 2));
                for (i = 0; i < n; i++) {
                    d0[i] = src[i * 2];
                    d1[i] = src[(i * 2) + 1];
                }

            } else {
                for (i = 0; i < n; i++) {
                    d0[i] = src[i];
                }
            }
            *((s32 *)(p + 4)) = 2;
            *((s32 *)(p + 0x90)) = n;
            *((s32 *)(p + 0x94)) = (n * (*((s8 *)(p + 0xE)))) * 2;
        }
    }
    if ((*((s32 *)(p + 4))) == 2) {
        (*((RuntimeStreamCommit *)(p + 0x80)))((u8 *)(*((void **)(p + 0x84))), *((s32 *)(p + 0x94)),
                                               *((s32 *)(p + 0x90)));
        *((s32 *)(p + 4)) = 3;
    }
}
