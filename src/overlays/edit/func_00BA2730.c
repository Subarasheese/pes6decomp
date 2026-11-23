/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern const char *func_001F08B0(s32 text);
extern s32 func_001D6D30(s32 group, s32 id);
extern int sprintf(char *, const char *, ...);
extern void func_00B8FB70(void *widget, const char *text);
void func_00BA2730(void *widget, s32 group, s32 id, s32 value) {
    char buffer[128];
    const char *format = func_001F08B0(func_001D6D30(group, id));
    sprintf(buffer, format, value);
    func_00B8FB70(widget, buffer);
}
