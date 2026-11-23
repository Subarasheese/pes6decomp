/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    float x, y;
    u8 reserved[10];
    s16 slot;
} ScoreLayout;
typedef struct {
    u8 reserved[20];
    u16 width;
} Text;
typedef struct {
    u8 reserved[20];
    Text *text[2];
} Scores;
extern ScoreLayout D_00CA88D0[];
extern const char D_00CB4F88[];
extern Scores D_00CCD4C0[];
extern int sprintf(char *, const char *, ...);
extern void *func_001DBD70(s32, s32, s32, const char *);
extern void func_00C89360(s32, Text *, float, float), func_00C897C0(u32, s8);
void func_00C8BB40(s32 first, s32 second) {
    s32 score[2];
    char buffer[24];
    s32 i;
    score[0] = first;
    score[1] = second;
    for (i = 0; i < 2; i++) {
        ScoreLayout *layout = (ScoreLayout *)((u8 *)D_00CA88D0 + ((u32)i + 3U) * 20U);
        s32 id = layout->slot;
        Text *text;
        s32 value = score[i];
        if (value < 0)
            value = 0;
        if (value > 99)
            value = 99;
        sprintf(buffer, D_00CB4F88, value);
        text = func_001DBD70(23, 0, 0, buffer);
        func_00C89360(id, text, layout->x - (float)text->width, layout->y);
        func_00C897C0(id, 1);
        D_00CCD4C0[0].text[i] = text;
    }
}
