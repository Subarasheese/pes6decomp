/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 selection;
    u8 reserved01[4];
    s8 field05;
    u8 reserved06[0x3a];
} LobbySelection;
extern LobbySelection *D_00A7E020[];
extern void *func_0099C7E0(s32 size);
void func_009F2950(s8 selection) {
    LobbySelection *state;
    if (!D_00A7E020[0]) {
        state = func_0099C7E0(sizeof(*state));
        D_00A7E020[0] = state;
        if (state) {
            state->selection = selection;
            D_00A7E020[0]->field05 = 0;
        }
    }
}
