/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001540C0(void);
extern void *func_001DBB80(s32 font, s32 arg1, s32 arg2, const char *text, s32 context);

void *func_001DBD70(s32 font, s32 arg1, s32 arg2, const char *text) {
    return func_001DBB80(font, arg1, arg2, text, func_001540C0());
}
