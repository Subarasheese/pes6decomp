/* compiler: ee-gcc-2.9-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
struct Time { unsigned char h, d, min; };
void func_002D9918(struct Time *);
void func_002D9B48(struct Time *);
void func_002D9B78(struct Time *);
void func_002D9980(struct Time *);

void func_002D9BA0(struct Time *t, int d)
{
    int m;
    func_002D9918(t);
    m = t->min + d;
    if (m >= 0) {
        while (m >= 60) {
            func_002D9B48(t);
            m -= 60;
        }
    } else {
        while (m < 0) {
            m += 60;
            func_002D9B78(t);
        }
    }
    t->min = m;
    func_002D9980(t);
}
