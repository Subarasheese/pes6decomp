/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_player.h"

typedef struct ShortRow {
    s16 v[378];
} ShortRow;

extern ShortRow *D_00CB3300[];

s16 func_0030E840(u8 row, u8 col)
{
    return D_00CB3300[0][row].v[col];
}
