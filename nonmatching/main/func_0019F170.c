/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001864E0(s32);
extern void func_001CE800(s32);
extern void func_001901A0(void);
extern void func_00181FE0(int, int);
extern void func_00181F20(s32, s32, s32);
M2C_UNK func_001867C0(M2C_UNK);                     /* extern */
M2C_UNK func_0018C1B0(M2C_UNK);                     /* extern */
M2C_UNK func_00194DD0(M2C_UNK);                     /* extern */
M2C_UNK func_001974E0(M2C_UNK);                     /* extern */
M2C_UNK func_001CE810();                            /* extern */
extern char D_00520343[];

char *func_0019F170(char *arg0) {
    char *p;
    s32 op;
    s32 m;
    s32 t;
    s32 i;

    func_001CE810();
    op = *(s32 *)arg0;
    p = arg0 + 4;
    if (op == (s32)0xFF000005) {
        if (*(s32 *)p & 1) {
            func_001CE800(op);
        }
        return p + 4;
    }
    if (op == (s32)0xFF000004) {
        m = *(s32 *)p;
        if (m & 3) {
            func_001867C0(2);
            if (m & 1) {
                func_001974E0(0);
            } else {
                func_001974E0(1);
            }
            func_001864E0(2);
        }
        if (m & 0xC) {
            func_001867C0(4);
            if (m & 4) {
                func_00194DD0(0);
            } else {
                func_00194DD0(1);
            }
            func_001864E0(4);
        }
        if ((*(s8 *)D_00520343) == 0 && (m & 0x10)) {
            func_001867C0(8);
            func_001864E0(8);
        }
        if (m & 0x40) {
            func_001867C0(0x40);
            func_001864E0(0x40);
        }
        if (m & 0x80) {
            func_001867C0(0x80);
            func_0018C1B0(4);
            func_001864E0(0x80);
        }
        if (m & 0x100) {
            func_001867C0(0x400);
            func_001864E0(0x400);
        }
        if (m & 0x20) {
            func_001867C0(0x10);
            func_001901A0();
            func_001864E0(0x10);
        }
        if (m & 0x200) {
            func_001867C0(0x800);
            func_001864E0(0x800);
        }
        if (m & 0x400) {
            func_001867C0(0x1000);
            func_001864E0(0x1000);
        }
        if (m & 0x800) {
            func_001867C0(0x20000);
            func_001864E0(0x20000);
        }
        return p + 4;
    }
    if (op == (s32)0xFF000003) {
        do {
            t = *(s32 *)p;
            m = *(s32 *)(p + 4);
            for (i = 0; i < 10; i++) {
                if (m & (1 << i)) {
                    func_00181F20(t, i, 0);
                }
            }
            p += 8;
        } while ((*(s32 *)p & 0xFF000000) == 0xFF000000);
        return p;
    }
    if (op == (s32)0xFF000002) {
        m = *(s32 *)p;
        for (i = 0; i < 0x1B; i++) {
            if (m & (1 << i)) {
                func_00181FE0(i, 0);
            }
        }
        return p + 4;
    }
    return p;
}
