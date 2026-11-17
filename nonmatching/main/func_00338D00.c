/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_005F1CC0[];
extern char D_005F1CC1[];

s32 func_00338D00(void) {
    char *base = D_005F1CC0;
    char *s0;
    char *a1;
    char *a2;
    char *p;
    s32 v;
    s32 a0;
    s32 i;

    if (*(u8 *)D_005F1CC1 != 0) {
        if (*(s32 (**)(void))(base + 0xC) == NULL) {
            return 0;
        }
        if ((*(s32 (**)(void))(base + 0xC))() == 0) {
            return 0;
        }
        *(u8 *)(base + 1) = 0;
        *(s32 *)(base + 0xC) = 0;
    }
    s0 = base + 0x94;
    if (*(s32 *)(base + 0x9C) != 0x21) {
        do {
            if (*(u8 *)(s0 + 0x1A) == 0) {
                int run = 1;
                if (*(u8 *)(s0 + 0x1B) != 0) {
                    v = *(s32 *)(s0 + 0x20) - 1;
                    *(s32 *)(s0 + 0x20) = v;
                    if (v != 0) {
                        run = 0;
                    } else {
                        *(u8 *)(s0 + 0x1B) = 0;
                    }
                }
                if (run) {
                    if ((*(s32 *)(s0 + 0x28) % *(s32 *)(s0 + 0x1C)) == 0 && *(u8 *)(s0 + 0x18) == 0) {
                        void (*fn)(void *) = *(void (**)(void *))(s0 + 0);
                        if (fn != NULL) {
                            fn(s0);
                        }
                    }
                    {
                        void *n = *(void **)(s0 + 4);
                        if (n != NULL) {
                            *(void **)(s0 + 0) = n;
                            *(s32 *)(s0 + 4) = 0;
                        }
                    }
                }
            }
            *(s32 *)(s0 + 0x28) = *(s32 *)(s0 + 0x28) + 1;
            s0 = *(char **)(s0 + 0x14);
        } while (*(s32 *)(s0 + 8) != 0x21);
    }
    a1 = base + 0x94;
    if (*(s32 *)(base + 0x9C) != 0x21) {
        do {
            a2 = *(char **)(a1 + 0x14);
            if (*(u8 *)(a1 + 0x19) != 0) {
                *(s32 *)(a1 + 0xC) = 0;
                *(void **)(*(char **)(a1 + 0x10) + 0x14) = *(void **)(a1 + 0x14);
                *(void **)(*(char **)(a1 + 0x14) + 0x10) = *(void **)(a1 + 0x10);
                *(void **)(a1 + 0x14) = *(void **)(*(char **)(base + 0x14C) + 0x14);
                *(void **)(*(char **)(base + 0x14C) + 0x14) = a1;
                *(s32 *)(a1 + 0x10) = 0;
                *(u8 *)(a1 + 0x19) = 0;
                *(s32 *)(base + 8) = *(s32 *)(base + 8) - 1;
            }
            a1 = a2;
        } while (*(s32 *)(a2 + 8) != 0x21);
    }
    i = 0;
    a0 = 0;
    if (*(s32 *)(base + 0x10) > 0) {
        p = base;
        do {
            v = *(s32 *)(p + 0x14) - 1;
            *(s32 *)(p + 0x14) = v;
            if (v < 0) {
                *(s32 *)(p + 0x18) = 0;
                a0 += 1;
            }
            i += 1;
            p += 8;
        } while (i < *(s32 *)(base + 0x10));
    }
    *(s32 *)(base + 0x10) = *(s32 *)(base + 0x10) - a0;
    return 1;
}
