/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
unsigned long func_00110F00(unsigned int sec, unsigned int usec)
{
    return (unsigned long)sec * 147456000 + (unsigned long)usec * 147456000 / 1000000;
}
