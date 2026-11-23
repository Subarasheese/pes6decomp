/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern const char *func_001F08B0(s32 text);
extern int sprintf(char *, const char *, ...);
extern void func_00B8FB70(void *widget, const char *text);
void func_00BA2790(void *widget, s32 id, s32 value) {
    char buffer[128];
    const char *format = func_001F08B0(id);
    sprintf(buffer, format, value);
    func_00B8FB70(widget, buffer);
}
