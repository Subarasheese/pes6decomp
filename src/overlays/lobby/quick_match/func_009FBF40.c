/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    s32 first;
    s32 reserved04;
    s32 second;
} LobbyPercentages;
extern int atoi(const char *text);
s32 func_009FBF40(const char *text, LobbyPercentages *out) {
    s32 value = atoi(text);
    if (value < 0)
        value = 0;
    else if (value > 100)
        value = 100;
    out->first = value;
    out->second = value;
    return 0;
}
