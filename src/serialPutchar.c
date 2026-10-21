/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/D_00107658.c). */
void serialPutchar(int c);
int func_00106DC0(int c);

void serialPutchar(int c)
{
    if (c == '\n') {
        func_00106DC0('\r');
        func_00106DC0('\n');
    } else {
        func_00106DC0(c);
    }
}