/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct NetworkRequestState NetworkRequestState;
struct NetworkRequestState {
    u8 reserved[0x18];
    s32 (*next)(NetworkRequestState *);
};
extern s32 D_011E3910;
extern void func_00158A50(void), func_00158D20(s32 mode, s32 option);
extern s32 func_00158B68(void), func_00157FF8(NetworkRequestState *);
s32 func_00157FA0(NetworkRequestState *state) {
    if (func_00158B68())
        return 0;
    func_00158A50();
    func_00158D20(2, D_011E3910);
    state->next = func_00157FF8;
    return 0;
}