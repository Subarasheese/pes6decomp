/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    u8 reserved00[0xf0];
    struct LobbyLabel *first;
    struct LobbyLabel *second;
} LobbyRecord;
typedef struct LobbyLabel {
    u8 reserved00[12];
    void *widget;
} LobbyLabel;
extern void func_001DF820(void *, const char *);
extern char D_00A02FB8[];
extern LobbyRecord *D_00A7DE00;
s32 func_009D21D0(const char *firstText, const char *secondText) {
    const char *left;
    const char *right = secondText;
    LobbyLabel *firstLabel;
    LobbyLabel *secondLabel;
    if (D_00A7DE00 == 0) {
        return 0;
    }
    firstLabel = D_00A7DE00->first;
    left = firstText;
    if (firstLabel != 0) {
        if ((firstText == 0) || ((*firstText) == 0)) {
            left = (void *)D_00A02FB8;
        }
        func_001DF820(firstLabel->widget, left);
    }
    secondLabel = D_00A7DE00->second;
    if (secondLabel != 0) {
        if ((right == 0) || ((*right) == 0)) {
            right = (void *)D_00A02FB8;
        }
        func_001DF820(secondLabel->widget, right);
    }
    return 1;
}
