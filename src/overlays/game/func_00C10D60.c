/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    float cell[8][6];
} Values;
float func_00C10D60(const Values *v, u32 row, u32 column) {
    float result = 0.0f;
    int valid = v && row < 8;
    if (valid)
        valid = column < 6;
    if (valid)
        result = v->cell[row][column];
    return result;
}
