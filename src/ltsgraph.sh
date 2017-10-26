#!/usr/bin/env sh
if [ -z "${MCRL2_NAME}" ]; then
    . ./.mcrl2rc
fi
mcrl22lps -lregular2 "${MCRL2_NAME}.mcrl2" "${MCRL2_NAME}.lps" \
    && lps2lts -rjittyc "${MCRL2_NAME}.lps" "${MCRL2_NAME}.lts" \
    && ltsgraph "${MCRL2_NAME}.lts"
