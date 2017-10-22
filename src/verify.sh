#!/usr/bin/env sh
if [ -z "$1" ] \
        || [ ! "$(find requirements | grep "requirements/req$1.mcf")" ]; then
    echo 'Requirement does not exist' >&2
    exit 1
fi
if [ -z "${MCRL2_NAME}" ]; then
    . ./.mcrl2rc
fi
mcrl22lps -lregular2 "${MCRL2_NAME}.mcrl2" "${MCRL2_NAME}.lps" \
    && lps2pbes "${MCRL2_NAME}.lps" "requirements/req$1.pbes" \
        -f "requirements/req$1.mcf" \
    && pbes2bool -s2 "requirements/req$1.pbes" --rewriter=jittyc -v
