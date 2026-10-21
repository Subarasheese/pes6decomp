/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/intr.c). */
void Copy(void *dst, void *src, int size);

int func_0010EC98(unsigned int *dst, unsigned int *src, unsigned int size)
{
    unsigned int i;

    for (i = 0; i < size / 4; i++) {
        *dst++ = *src++;
    }
    return 0;
}