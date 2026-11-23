/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern void func_00B9A950(void);
extern s32 func_00B9A960(void);
extern s32 func_00B9F840(s8);
extern void func_00BC3FB0(s32);
extern void func_00BC6910(s32);
extern void func_00BC7390(s32);
extern void func_00BC8450(void);
extern void func_00C1B3C0(u32);

extern s32 func_00BC80A0(void);
extern u32 D_003EAFA8;
extern s32 D_003EAFAC;

static inline s32 pollFirstPrompt(void) {
    s32 handled = 0;
    if (!D_003EAFAC) {
        func_00B9A950();
        D_003EAFAC = 1;
    } else if (func_00B9A960() == 1) {
        func_00C1B3C0(1);
        D_003EAFAC = 0;
        handled = 1;
    }
    return handled;
}
static inline s32 pollSecondPrompt(void) {
    s32 handled = 0;
    if (func_00BC80A0()) {
        func_00C1B3C0(0);
        handled = 1;
    }
    return handled;
}
s32 func_00BC82F0(s8 mode) {
    s32 closed = 0;
    switch (D_003EAFA8) {
    case 0:
        func_00C1B3C0(0);
        D_003EAFA8 = 1; /* fall through */
    case 1:
        func_00BC7390(5);
        D_003EAFA8 = 2;
        func_00BC6910(0x20001c);
        func_00BC3FB0(3); /* fall through */
    case 2:
        func_00BC8450();
        break;
    case 3:
        if (pollFirstPrompt()) {
            func_00BC7390(5);
            D_003EAFA8 = 1;
        }
        break;
    case 4:
        if (pollSecondPrompt()) {
            func_00BC7390(5);
            D_003EAFA8 = 1;
        }
        break;
    case 5:
        if (func_00B9F840(mode)) {
            func_00BC7390(15);
            D_003EAFA8 = 6;
        }
        break;
    case 6:
        D_003EAFA8 = 0;
        closed = 1;
        break;
    }
    return closed;
}
