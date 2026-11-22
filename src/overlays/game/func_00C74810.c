/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef void (*ResponseHandler)(void);

extern s32 func_009A2A70(void);
extern s32 func_009A2A80(void);
extern void func_009A2A90(s32 stage);
extern void func_009A1EA0(void);
extern void func_00120D90(ResponseHandler handler, s32 priority);
extern void func_00120D00(ResponseHandler handler);

void func_00C74810(void) {
    if (func_009A2A70() != 0) {
        if (func_009A2A80() == 1) {
            func_00120D90(func_009A1EA0, 10);
            func_009A2A90(0);
        }
    } else {
        if (func_009A2A80() == 0) {
            func_00120D00(func_009A1EA0);
            func_009A2A90(1);
        }
    }
}
