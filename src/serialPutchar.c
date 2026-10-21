/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/D_00107658.c). */
void serialPutchar(int c);
int kputchar(int c);

void serialPutchar(int c)
{
    if (c == '\n') {
        kputchar('\r');
        kputchar('\n');
    } else {
        kputchar(c);
    }
}