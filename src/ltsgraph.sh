#!/usr/bin/env sh
mcrl22lps -lregular2 marc.mcrl2 alles.lps \
    && lps2lts -rjittyc alles.lps alles.lts \
    && ltsgraph alles.lts
