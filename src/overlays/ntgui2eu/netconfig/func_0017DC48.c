/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x98];
    s32 state;
    u8 reserved9c[0x874];
    void *control;
    u8 reserved914[0x91c];
    u64 x, y, currentX, currentY, previousX, previousY;
} GuiState;
extern void (*D_005C14EC)(void);
extern void func_0017D910(GuiState *), func_00165C40(void *);
void func_0017DC48(GuiState *g) {
    u64 x, y;
    D_005C14EC();
    x = g->x;
    y = g->y;
    g->previousX = g->currentX = x;
    g->previousY = g->currentY = y;
    func_0017D910(g);
    func_00165C40(g->control);
    g->state = 2;
}
