/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern const char *func_001F08B0(s32);
extern char *func_001C7F58(char *, const char *);
extern void func_002C9D20(char *);
void func_008B2B00(char *text, s32 position) {
    s32 message = -1;
    if (position >= 0x17) {
        message = 0x3D0021;
    }
    if (position == 0x16) {
        message = 0x3D0020;
    }
    if ((-1) != message) {
        func_001C7F58(text, func_001F08B0(message));
    } else {
        func_002C9D20(text);
        return;
    }
}
