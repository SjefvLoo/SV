#!/usr/bin/env sh
if [ -n "$1" ] \
        && [ ! "$(find requirements | grep "requirements/req$1.mcf")" ]; then
    echo 'Requirement does not exist' >&2
    exit 1
fi
if [ -z "${MCRL2_NAME}" ]; then
    . ./.mcrl2rc
fi
if [ -z "$1" ]; then
    mcrl22lps -lregular2 "${MCRL2_NAME}.mcrl2" "${MCRL2_NAME}.lps" || exit 1
    for file in requirements/*.mcf; do
        echo "${file}"
        lps2pbes "${MCRL2_NAME}.lps" "${file%.mcf}.pbes" "-f${file}" \
            && pbes2bool "${file%.mcf}.pbes" --rewriter=jittyc
    done
else
    mcrl22lps -lregular2 "${MCRL2_NAME}.mcrl2" "${MCRL2_NAME}.lps" \
        && lps2pbes "${MCRL2_NAME}.lps" "requirements/req$1.pbes" \
            -f "requirements/req$1.mcf" \
        && pbes2bool $PFLAGS -s2 "requirements/req$1.pbes" --rewriter=jittyc -v
fi
