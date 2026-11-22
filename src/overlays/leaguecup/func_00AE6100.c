/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    void *resource;
    u8 pad_4[0x584];
    u8 selection;
    u8 option;
    u8 variant;
    u8 pad_58B[0x5];
    s32 setting;
} CupScreen;

extern void *func_001D5A10(s32);
extern s32 func_00958000(s32);
extern s32 func_00AE4F40(u8);
extern void func_00AE50E0(s32);
extern void func_00AE5330(s32);
extern s32 func_00AE5790(s32, u8);
extern void func_00AE5A20(void);
extern void func_00AE5BB0(void);
extern void func_00AE5D70(void);
s32 func_00AE72D0(u8);
extern CupScreen *func_00AE7320(void);

void func_00AE6100(void) {
    CupScreen *screen;

    screen = func_00AE7320();
    if (screen != 0) {
        screen->resource = func_001D5A10(0x10309);
        func_00AE5D70();
        func_00AE5BB0();
        func_00AE5A20();
        func_00AE5790(func_00AE72D0(screen->selection) & 0xFF, screen->variant);
        func_00AE5330(screen->setting);
        func_00AE50E0(screen->selection);
        func_00AE4F40(screen->option);
        func_00958000(0x60);
    }
}
