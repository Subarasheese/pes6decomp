/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct {
    u8 reserved[0x18];
    s32 (*next)(void);
} NetConfigState;
extern s32 D_011E21FC;
extern char D_011E2210[];
extern s32 func_001586F0(void), func_00158B68(void), func_00156048(void);
extern void func_00158A50(void);
extern void func_00159480(const char *);
s32 func_00155FC8(NetConfigState *state) {
    if (!func_001586F0() && !func_00158B68()) {
        if (D_011E21FC > 0) {
            --D_011E21FC;
            return 0;
        }
        func_00158A50();
        func_00159480(D_011E2210);
        state->next = func_00156048;
        return 0;
    }
    return 0;
}