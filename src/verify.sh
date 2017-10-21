#!/usr/bin/env sh
mcrl22lps -lstack marc.mcrl2 alles.lps \
    && lps2pbes alles.lps t.pbes -freq$1.mcf \
    && pbes2bool -s2 t.pbes --rewriter=jittyc -v
