#!/usr/bin/env sh
for file in *.mcf; do
    echo "${file}"
    mcrl22lps -lregular2 marc.mcrl2 alles.lps \
        && lps2pbes alles.lps t.pbes "-f${file}" \
        && pbes2bool t.pbes --rewriter=jittyc
done
