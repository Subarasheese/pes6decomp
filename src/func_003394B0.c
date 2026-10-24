/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 cur;
    s32 prev;
} Hist;

typedef struct {
    s32 mode;
    Hist hist[2];
} Row;

typedef struct {
    u8 pad0[0x60];
    Row rows[1];
} Board;

s32 func_003394B0(Board *board, s32 row, s32 col, s32 *out) {
    *out = board->rows[row].hist[col].cur;
    return 1;
}
