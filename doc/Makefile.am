# The man and info pages for bison (not bison++)
# were not installed by the previous make system.
dist_man1_MANS = \
	bison++.1
dist_noinst_MANS = \
	bison.1
noinst_TEXINFOS = \
	bison.texi

# FIXME:  `texi2dvi bison.texi` seems to be broken.
# Uncomment to keep `make distcheck` happy.
#.PHONY: dvi
#dvi:

# The .dman file and the rule below is/was used to generate the man page.
# According to the man page, it was with a flex++/bison++ parser.
# The source code for that parser is probably lost.
#%: %.dman
#	dman < $*.dman > $@
#	pman -t $@ > $*.ps

# FIXME:  For some reason automake isn't distributing the noinst files,
# so place them in EXTRA_DIST to force their inclusion.
EXTRA_DIST = \
	REFERENCES \
	bison++.1.dman \
	$(dist_noinst_MANS) \
	$(noinst_TEXINFOS)
