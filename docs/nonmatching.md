# Non-matching C reconstructions

The project accepts compiling C reconstructions under `nonmatching/<image>/`.
These are working sources for further research. They are **not** asserted to be
semantically equivalent, and their types, local layouts and call contracts may
still require investigation. They do not replace original code in the matching
executable build. `src/` retains its existing exact-match policy.

There are three different progress measures:

- **Exact code:** source verified against the original executable. The existing
  code and function badges keep their original meaning.
- **C reconstruction:** exact source plus accepted non-matching function bodies,
  weighted by their original inventoried code sizes. This describes how much
  code has a C reconstruction available, not how much can run from C.
- **Instruction similarity:** ordered, identical instruction words after every
  relocation has been resolved, divided by the longer body. The whole project's
  score also includes the unreconstructed functions at zero. This populates
  objdiff's `fuzzy_match_percent`; it does not change `matched_code_percent`.

The original combined denominator still includes the resident executable, all
26 executable overlays, and NTGUI2EU. Overlapping addresses in different images
are separate functions. Non-matching files cannot override existing exact
sources, and a function receives source coverage only once.

## Acceptance and checks

`config/nonmatching.json` records each source, image/address, compiler profile,
source and original-body hashes, review scope, and known limitations. Compiler
and structural checks are evidence about a reconstruction, not a runtime proof.

```sh
./run.sh python tools/nonmatching.py check --jobs 2
./run.sh bash tools/ci_local.sh -j 2
```

Verification compiles every candidate again. It requires a complete translation
without assembly, missing-instruction macros, fabricated register values, or
private writable storage. Parameter holes that shift argument registers and
address-taken unknown locals with unestablished storage sizes are rejected.
All relocation targets must resolve, referenced symbol addresses must have
evidence in the original instructions, and external direct call/tail-call
targets and indirect-transfer counts must agree. Bodies that shrink below half
or grow beyond 1.75 times the original instruction count are rejected. The
initial admission threshold is 50% instruction similarity; the measured score
is published per function, with remaining uncertainties explicitly recorded.

No similarity threshold alone proves correct behavior. In particular, matching
call addresses does not establish argument or return types. A reconstruction
remains non-matching even if its instruction score reaches 100%, until its ABI,
full function span and full-image integration have passed the exact workflow.

The local proof binds the manifest, source hashes, symbol tables, headers,
inventories, original image bytes, and verification tools. Editing those inputs requires another
check before publication. The report generator produces the separate
`progress/reconstruction.json` and SVG badge, and includes measured instruction
similarity in the existing objdiff report. CI publishes both reports.

## Promotion

Resolve a function's known issues, verify its contract and complete original
span, and move it from `nonmatching/` to the appropriate `src/` image. Remove its
non-matching manifest entry, rerun verification, and run the matching full build.
Only a verified exact recovery increases the existing matched-code badge.
