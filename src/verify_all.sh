#!/usr/bin/env sh
if [ -z "${MCRL2_NAME}" ]; then
    . ./.mcrl2rc
fi
mcrl22lps -lregular2 "${MCRL2_NAME}.mcrl2" "${MCRL2_NAME}.lps"
for file in requirements/*.mcf; do
    echo "${file}"
    lps2pbes "${MCRL2_NAME}.lps" "${file%.mcf}.pbes" "-f${file}" \
        && pbes2bool "${file%.mcf}.pbes" --rewriter=jittyc
done
