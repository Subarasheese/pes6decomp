/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00338A60(void *, void *);
extern s32 func_00338530(s32);
extern int func_003387D0(void *, void (*)(void));
void *func_00338AD0(s32, void (*)(void), s32, char *); /* extern */
extern char D_003E17B0[];
extern void func_0032D340(void);
extern void func_0032DDF0(void);

s32 func_0032DE80(void *arg0) {
    s32 (**table)(void *);
    s32 (**p)(void *);
    void *obj;
    s32 acc;
    s32 i;
    s32 ok;
    s32 mode;

    acc = 0;
    i = 0;
    table = M2C_FIELD(arg0, s32 (***)(void *), 0x3C);
    obj = M2C_FIELD(arg0, void **, 0x40);
    p = table;
    do {
        if (*p != NULL) {
            acc |= (*p)((u8 *)arg0 + 0x3C);
        }
        i += 1;
        p += 1;
    } while (i < 5);
    if (acc == 0) {
        return 0;
    }
    if (M2C_FIELD(obj, u8 *, 8) == 0) {
        return 0;
    }
    mode = M2C_FIELD(obj, s32 *, 0x74);
    ok = 0;
    if (mode == 5 || mode == 4) {
        if (M2C_FIELD(obj, s32 *, 0xB4) == 1) {
            u8 t = M2C_FIELD(obj, u8 *, 0xD5);
            if (t == 5 || t == 1) {
                ok = 1;
            }
        }
    } else if (mode == 1) {
        u8 t = M2C_FIELD(obj, u8 *, 0x95);
        if (t == 5 || t == 1) {
            ok = 1;
        }
    }
    if (ok == 0) {
        return 0;
    }
    if (M2C_FIELD(table, s32 *, 0x28) == 0) {
        func_003387D0(arg0, func_0032DDF0);
        return 0;
    }
    if (func_00338530(0x8000000B) != 0) {
        return 0;
    }
    func_00338A60(func_00338AD0(0x8000000B, func_0032D340, 5, D_003E17B0), arg0);
    return 0;
}
