/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x10];
    s32 handle;
} LobbyState;
extern LobbyState *D_00A7DBF0[];
extern s32 D_009FF198[];
extern void func_0099B470(s32 handle, s32 group, s32 value);
void func_009AF730(s32 value) {
    if (D_00A7DBF0[0] && value)
        func_0099B470(D_00A7DBF0[0]->handle, D_009FF198[0], value);
}
