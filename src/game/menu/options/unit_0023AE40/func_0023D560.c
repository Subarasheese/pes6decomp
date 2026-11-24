/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_0023D560(s32 *values, s32 first, s32 last) {
    s32 i, j;
    s32 pivot, temp;
    if (first >= last)
        return;
    pivot = values[(first + last) / 2];
    i = first - 1;
    j = last + 1;
    for (;;) {
        while (values[++i] < pivot) {
        }
        while (values[--j] > pivot) {
        }
        if (i >= j)
            break;
        temp = values[i];
        values[i] = values[j];
        values[j] = temp;
    }
    func_0023D560(values, first, i - 1);
    func_0023D560(values, j + 1, last);
}
