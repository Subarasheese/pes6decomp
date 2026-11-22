/* compiler: ee-gcc-2.9-Os-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x4d0];
    s32 cursor;
    u8 reserved4D4[0x440];
    s32 lineCount;
    char *text, *secondary;
    u32 reserved920;
    const char *pendingText, *pendingSecondary;
} NetworkTextBox;
extern char *func_001896B8(const char *text);
extern void func_0016E170(NetworkTextBox *box, s32 line, const char *text, s32 length);
void func_0016E038(NetworkTextBox *box) {
    char *line, *cursor;
    s32 i;
    if (box->pendingText)
        box->text = func_001896B8(box->pendingText);
    else
        box->text = 0;
    box->pendingText = 0;
    if (box->pendingSecondary)
        box->secondary = func_001896B8(box->pendingSecondary);
    else
        box->secondary = 0;
    box->pendingSecondary = 0;
    box->cursor = 0;
    box->lineCount = 0;
    line = box->text;
    if (line) {
        cursor = line;
        if (*line) {
            do {
                if (*cursor == '\n') {
                    func_0016E170(box, box->lineCount, line, cursor - line);
                    line = cursor + 1;
                    box->lineCount++;
                }
                ++cursor;
            } while (*cursor && box->lineCount < 40);
        }
        if (box->lineCount < 40 && cursor != line) {
            func_0016E170(box, box->lineCount, line, cursor - line);
            box->lineCount++;
        }
    }
    for (i = box->lineCount; i < 40; ++i) {
        func_0016E170(box, i, 0, 0);
    }
}
