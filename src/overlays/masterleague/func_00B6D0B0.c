/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
typedef struct {
    u8 reserved[0x58];
    void *label;
    u8 selection;
    u8 reserved5d[15];
    void *grid;
} ClubGrid;
extern ClubGrid *func_00B6DB70(void);
extern u16 func_00B6DB40(u8);
extern const char *func_0021F280(s32, s32);
extern void func_00972040(void *, s32, u32), func_009737E0(void *, s32, ...);
void func_00B6D0B0(void) {
    ClubGrid *grid = func_00B6DB70();
    if (grid) {
        u8 selection = grid->selection;
        s32 column = (s32)selection % 8;
        u32 row = (selection & 255U) >> 3;
        func_00972040(grid->grid, column, row);
        grid->selection = column + row * 8;
        func_009737E0(grid->label, 2, func_0021F280((u16)func_00B6DB40(grid->selection), 0));
    }
}
