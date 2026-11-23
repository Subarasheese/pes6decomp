/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct TextWidget TextWidget;
extern int func_0019DB18(char *out, u32 size, const char *format, ...);
extern void func_00153F78(TextWidget *widget, const char *text);
extern const char D_005FCD28[];
void func_00153FD0(TextWidget *widget, s32 number) {
    char text[600];
    func_0019DB18(text, sizeof(text), D_005FCD28, number);
    func_00153F78(widget, text);
}
