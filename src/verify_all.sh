for f in *.mcf
do
	echo $f
	mcrl22lps -lregular2 alles.mcrl2 alles.lps && lps2pbes alles.lps t.pbes -f$f && pbes2bool t.pbes --rewriter=jittyc
done
