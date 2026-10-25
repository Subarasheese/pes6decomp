/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 mode;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
} Args;

extern s32 D_003E9D74;
extern s32 D_003E9D78;
void func_001C48E8(void *, s32, s32);
void func_0017F9A0(s32, void (*)(void), s32, s32, Args *);
void func_002D3790(void);

void func_002D37C0(void) {
    Args args;

    func_001C48E8(&args, 0, sizeof(args));
    args.mode = 1;
    D_003E9D74 = 0;
    func_0017F9A0(0x11ABA, func_002D3790, 0, 0, &args);
    D_003E9D78 = 100;
}
