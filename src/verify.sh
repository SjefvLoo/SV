#!/usr/bin/env sh
mcrl22lps -lregular2 marc.mcrl2 alles.lps \
    && lps2pbes alles.lps t.pbes -freq$1.mcf \
    && pbes2bool t.pbes --rewriter=jittyc -v
