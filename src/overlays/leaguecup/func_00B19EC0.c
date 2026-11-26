/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[4];
    u16 team;
    u8 reserved06[2];
    s32 played;
    s32 firstScore;
    u8 reserved10[8];
    s32 secondScore;
    u8 reserved1c[16];
    s32 result;
} CupFixture;
void func_00B19EC0(CupFixture *fixture) {
    if (fixture) {
        if (!fixture->played) {
            if (fixture->team == 0xffff)
                fixture->result = 0;
            else
                fixture->result = 1;
        } else {
            if (fixture->firstScore > fixture->secondScore)
                fixture->result = 2;
            else if (fixture->firstScore == fixture->secondScore)
                fixture->result = 4;
            else
                fixture->result = 3;
        }
    }
}
