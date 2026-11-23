/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct NetworkRequestState NetworkRequestState;
struct NetworkRequestState {
    u8 reserved[0x18];
    s32 (*next)(NetworkRequestState *);
};
extern s32 D_011E3910;
extern void func_00158A50(void), func_00158D20(s32 mode, s32 option);
extern s32 func_00158B68(void), func_00157E20(NetworkRequestState *);
s32 func_00157DC8(NetworkRequestState *state) {
    if (func_00158B68())
        return 0;
    func_00158A50();
    func_00158D20(1, D_011E3910);
    state->next = func_00157E20;
    return 0;
}
