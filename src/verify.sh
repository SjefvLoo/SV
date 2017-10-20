#!/usr/bin/env sh
mcrl22lps -lregular2 alles.mcrl2 alles.lps \
    && lps2pbes alles.lps t.pbes -freq2a.mcf \
    && pbes2bool t.pbes --rewriter=jittyc -v
