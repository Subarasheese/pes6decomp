/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "types.h"
extern int sprintf(char *, const char *, ...);
void func_006509C0(char *text, s32 year, s32 month, s32 day) {
    sprintf(text, "%02d/%02d/%04d", day % 100, month % 100, year % 10000);
}
